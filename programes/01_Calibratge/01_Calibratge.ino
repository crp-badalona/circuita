// SPDX-License-Identifier: CC-BY-NC-SA-4.0
// CRP Badalona · amb assistència de la IA
// https://creativecommons.org/licenses/by-nc-sa/4.0/deed.ca
/* CIRCUITA · Proposta pròpia per al controlador Cirkids compatible UNO.
   Connexions i límits: Dossier-muntatge.html. Ús exclusiu de mòduls Cirkids
   documentats, no LEDs solts. Alimentació USB; NO unir la pila de 4,5 V a 5V.
   Revisió documental i compilació no equivalen a prova sobre el vostre kit.
*/
// M6: sensor + a 5V; sensor - a A0 i, via R de 10k, a GND.
// Una mateixa unió A0/sensor-/R. No connectar sensor- directament a GND.
const byte SENSOR_PIN = A0;
unsigned long lastReading = 0;
void setup() { Serial.begin(9600); }
void loop() {
  const unsigned long now = millis();
  if (now - lastReading >= 200UL) {
    lastReading = now;
    Serial.println(analogRead(SENSOR_PIN));
  }
}
