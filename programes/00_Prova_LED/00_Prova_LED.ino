/* CIRCUITA · Proposta pròpia per al controlador Cirkids compatible UNO.
   Connexions i límits: Dossier-muntatge.html. Ús exclusiu de mòduls Cirkids
   documentats, no LEDs solts. Alimentació USB; NO unir la pila de 4,5 V a 5V.
   Revisió documental i compilació no equivalen a prova sobre el vostre kit.
*/
// M5: LED amb resistencia de sortida, segons el dossier. Sense piles externes.
// Sortida física: D11 -> R 1 kOhm -> LED +; LED - -> GND.
const byte LED_PIN = 11;
unsigned long lastChange = 0;
bool on = false;
void setup() { pinMode(LED_PIN, OUTPUT); digitalWrite(LED_PIN, LOW); }
void loop() {
  const unsigned long now = millis();
  if (now - lastChange >= 1500UL) {
    lastChange = now; on = !on; digitalWrite(LED_PIN, on ? HIGH : LOW);
  }
}
