/* CIRCUITA · Proposta pròpia per al controlador Cirkids compatible UNO.
   Connexions i límits: Dossier-muntatge.html. Ús exclusiu de mòduls Cirkids
   documentats, no LEDs solts. Alimentació USB; NO unir la pila de 4,5 V a 5V.
   Revisió documental i compilació no equivalen a prova sobre el vostre kit.
*/
// M9 opcional: calen dues resistencies d'1 kOhm, una per sortida.
// Bicolor: D10 -> R B 1k -> GREEN; RED -> GND (verd).
// LED vermell: D11 -> R A 1k -> LED +; LED - -> GND.
// Interruptor zona A: D2 <-> GND. Polsador zona B: D8 <-> GND.
// Cada sortida usa el seu propi pin; mai connecteu D10 amb D11.
// D11 i D10: cadascun amb R 1 kOhm en serie amb el seu modul LED.
const byte A_LED = 11, B_LED = 10, A_CONTROL = 2, B_CONTROL = 8;
void setup() {
  pinMode(A_LED, OUTPUT); pinMode(B_LED, OUTPUT);
  digitalWrite(A_LED, LOW); digitalWrite(B_LED, LOW);
  pinMode(A_CONTROL, INPUT_PULLUP); pinMode(B_CONTROL, INPUT_PULLUP);
}
void loop() {
  digitalWrite(A_LED, digitalRead(A_CONTROL) == LOW ? HIGH : LOW);
  digitalWrite(B_LED, digitalRead(B_CONTROL) == LOW ? HIGH : LOW);
}
