#define DIR1 2
#define PWM1 3
#define DIR2 4
#define PWM2 5

void setup() {
  // put your setup code here, to run once:
  pinMode(DIR1, OUTPUT);
  pinMode(PWM1, OUTPUT);
  pinMode(DIR2, OUTPUT);
  pinMode(PWM2, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println("working");
  digitalWrite(DIR1, HIGH);
  digitalWrite(PWM1, HIGH);
}
