/*
*/

void setup() {
    pinMode(10, OUTPUT);    // Rojo
    pinMode(9, OUTPUT);     // Amarillo
    pinMode(8, OUTPUT);     // Verde
}

void loop() {
    digitalWrite(10, HIGH);     // rojo encendido
    delay(1000);
    digitalWrite(8, HIGH);      // verde encendido
    digitalWrite(10, LOW);      // rojo apagado
    delay(1000);
    digitalWrite(9, HIGH);      // amarillo encendido
    digitalWrite(8, LOW);       // verde apagado
    delay(1000);
    digitalWrite(9, LOW);       // amarillo apagado
}
