const int ledD3 = D3;
const int ledD5 = D5;
const int ledD6 = D6;

void setup() {
    Serial.begin(115200);
    pinMode(ledD3, OUTPUT);
    pinMode(ledD5, OUTPUT);
    pinMode(ledD6, OUTPUT);
}

void loop() {
    int A = random(999);
    int B = random(999);
    int C = random(999);
    int D = random(999);

    Serial.print("A: "); Serial.print(A);
    Serial.print(" B: "); Serial.print(B);
    Serial.print(" C: "); Serial.print(C);
    Serial.print(" D: "); Serial.println(D);

    if (A > B || A < C) {
        digitalWrite(ledD3, HIGH);
    } else {
        digitalWrite(ledD3, LOW);
    }

    if (C > A && A < B) {
        digitalWrite(ledD5, HIGH);
    } else {
        digitalWrite(ledD5, LOW);
    }

    if (B > C && B > A && C < A) {
        digitalWrite(ledD6, HIGH);
    } else {
        digitalWrite(ledD6, LOW);
    }

    if (D > A && D > B && D > C) {
        for (int i = 0; i < 5; i++) {
            digitalWrite(ledD3, HIGH);
            digitalWrite(ledD5, HIGH);
            digitalWrite(ledD6, HIGH);
            delay(200);
            digitalWrite(ledD3, LOW);
            digitalWrite(ledD5, LOW);
            digitalWrite(ledD6, LOW);
            delay(200);
        }
    }

    delay(10000); 
}
