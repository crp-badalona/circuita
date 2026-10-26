/* CIRCUITA · Proposta pròpia per al controlador Cirkids compatible UNO.
   Connexions i límits: Dossier-muntatge.html. Ús exclusiu de mòduls Cirkids
   documentats, no LEDs solts. Alimentació USB; NO unir la pila de 4,5 V a 5V.
   Revisió documental i compilació no equivalen a prova sobre el vostre kit.
*/
// M6/M8. Sensor com a 01_Calibratge; sortida LED amb R 1 kOhm.
// Interruptor D2 <-> GND. INPUT_PULLUP: tancat = LOW = habilitat.
const byte SENSOR_PIN = A0;
// Sortida física: D11 -> R 1 kOhm -> LED +; LED - -> GND.
const byte LED_PIN = 11;
// EXEMPLES: substituïu-los per les mitjanes mesurades amb 01_Calibratge.
const int RAW_DARK = 150;
const int RAW_BRIGHT = 850;
const bool CALIBRATED = false; // Canvieu a true NOMÉS després del calibratge.
bool calibrationOK() {
  return CALIBRATED && RAW_DARK >= 0 && RAW_DARK <= 1023 &&
    RAW_BRIGHT >= 0 && RAW_BRIGHT <= 1023 && abs(RAW_BRIGHT - RAW_DARK) >= 20;
}
int lightPercent() {
  const long raw = analogRead(SENSOR_PIN);
  const long span = (long)RAW_BRIGHT - RAW_DARK;
  long percent = ((raw - RAW_DARK) * 100L) / span;
  return (int)constrain(percent, 0L, 100L);
}

const byte ENABLE_PIN = 2;
unsigned long lastReport = 0;
void setup() {
  pinMode(LED_PIN, OUTPUT); digitalWrite(LED_PIN, LOW); Serial.begin(9600);
  pinMode(ENABLE_PIN, INPUT_PULLUP);
}
void loop() {
  if (!calibrationOK()) {
    digitalWrite(LED_PIN, LOW);
    if (millis() - lastReport >= 1000UL) {
      lastReport = millis(); Serial.println(F("Calibratge pendent o invalid. LED apagat."));
    }
    return;
  }
  const int light = lightPercent();
  const bool on = (digitalRead(ENABLE_PIN) == LOW) && (light < 30);
  digitalWrite(LED_PIN, on ? HIGH : LOW);
  if (millis() - lastReport >= 200UL) {
    lastReport = millis(); Serial.print(light); Serial.print(F(" % | LED "));
    Serial.println(on ? F("ON") : F("OFF"));
  }
}
