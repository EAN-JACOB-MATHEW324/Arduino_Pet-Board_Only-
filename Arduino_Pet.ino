// Arduino Uno Attention-Only Pet
// Interaction: RESET button only
// Fast mood changes for instant feedback

#define LED 13

unsigned long birthTime;

void setup() {
  pinMode(LED, OUTPUT);

  Serial.begin(9600);
  delay(1500);                 // give Serial time to connect

  birthTime = millis();

  Serial.println("🐣 Pet awakened!");
  Serial.println("Attention = RESET button");
}

void loop() {
  unsigned long age = millis() - birthTime;

  // Short timing windows
  if (age < 15000) {            // < 5 seconds
    happy();
  }
  else if (age < 25000) {      // 5–15 seconds
    bored();
  }
  else {                       // > 15 seconds
    angry();
  }
}

// -------- moods --------

void happy() {
  Serial.println("😊 HAPPY");
  blink(1000);                 // slow blink
}

void bored() {
  Serial.println("😐 BORED");
  blink(400);                  // medium blink
}

void angry() {
  Serial.println("😢 SAD");
  blink(100);                  // fast blink
}

// -------- helper --------

void blink(int speed) {
  digitalWrite(LED, HIGH);
  delay(speed / 2);
  digitalWrite(LED, LOW);
  delay(speed / 2);
}
