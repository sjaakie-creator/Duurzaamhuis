void setup() {
    Serial.begin(115200);

    char letter1 = 0b01101000;
    char letter2 = 0b01100101;
    char letter3 = 0b01101100;
    char letter4 = 0b01101100;
    char letter5 = 0b01101111;

    Serial.print(letter1);
    Serial.print(letter2);
    Serial.print(letter3);
    Serial.print(letter4);
    Serial.println(letter5);
}

void loop() {
}
