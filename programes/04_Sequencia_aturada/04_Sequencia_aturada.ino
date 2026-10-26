// SPDX-License-Identifier: CC-BY-NC-SA-4.0
// CRP Badalona · amb assistència de la IA
// https://creativecommons.org/licenses/by-nc-sa/4.0/deed.ca
/* CIRCUITA · Proposta pròpia per al controlador Cirkids compatible UNO.
   Connexions i límits: Dossier-muntatge.html. Ús exclusiu de mòduls Cirkids
   documentats, no LEDs solts. Alimentació USB; NO unir la pila de 4,5 V a 5V.
   Revisió documental i compilació no equivalen a prova sobre el vostre kit.
*/
// M7: sortida LED amb R 1 kOhm. Interruptor ATURADA: D2 <-> GND.
// Polsador REARMA: D8 <-> GND. Tancat/premut = LOW amb INPUT_PULLUP.
// Inicia APAGAT; premeu REARMA amb ATURADA oberta per començar.
// Sortida física: D11 -> R 1 kOhm -> LED +; LED - -> GND.
const byte LED_PIN = 11, STOP_PIN = 2, RESET_PIN = 8;
const unsigned long PHASE_MS = 1000UL;
bool latchedStop = true;
bool lastRawReset = HIGH, stableReset = HIGH;
unsigned long resetChanged = 0, cycleStart = 0;
void setup() {
  pinMode(LED_PIN, OUTPUT); digitalWrite(LED_PIN, LOW);
  pinMode(STOP_PIN, INPUT_PULLUP); pinMode(RESET_PIN, INPUT_PULLUP);
}
void loop() {
  const unsigned long now = millis();
  const bool rawReset = digitalRead(RESET_PIN);
  if (rawReset != lastRawReset) { resetChanged = now; lastRawReset = rawReset; }
  bool resetPressed = false;
  if (now - resetChanged >= 30UL && stableReset != rawReset) {
    stableReset = rawReset; resetPressed = (stableReset == LOW);
  }
  // Cap delay(): l'aturada es llegeix a cada iteració i té prioritat.
  if (digitalRead(STOP_PIN) == LOW) {
    latchedStop = true; digitalWrite(LED_PIN, LOW); return;
  }
  if (resetPressed) { latchedStop = false; cycleStart = now; }
  if (latchedStop) { digitalWrite(LED_PIN, LOW); return; }
  const unsigned long phase = ((now - cycleStart) / PHASE_MS) % 4UL;
  digitalWrite(LED_PIN, phase < 2UL ? HIGH : LOW);
}
