//Inisialisasi Servo
#include <Servo.h>
int pos = 0;
Servo servo_9;
//Inisialisasi Ultrasonic
int inches = 0;
int cm = 0;

long readUltrasonicDistance(int triggerPin, int echoPin)
{
  pinMode(triggerPin, OUTPUT);  // Clear the trigger
  digitalWrite(triggerPin, LOW);
  delayMicroseconds(2);
  // Sets the trigger pin to HIGH state for 10 microseconds
  digitalWrite(triggerPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(triggerPin, LOW);
  pinMode(echoPin, INPUT);
  // Reads the echo pin, and returns the sound wave travel time in microseconds
  return pulseIn(echoPin, HIGH);
}

void setup()
{
  Serial.begin(9600);
  servo_9.attach(9);
}

void baca_jarak() {
  // measure the ping time in cm
  cm = 0.01723 * readUltrasonicDistance(7, 7);
  // convert to inches by dividing by 2.54
  inches = (cm / 2.54);
  //  Serial.print(inches);
  //  Serial.print("in, ");
  Serial.print(cm);
  Serial.println("cm");
  delay(100); // Wait for 100 millisecond(s)
}

void tekan_sabun() {
  for (pos = 0; pos <= 90; pos += 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  for (pos = 90; pos >= 0; pos -= 1) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
  delay(100);
  //  for (pos = 0; pos >= 0; pos -= 0) {
  //    // tell servo to go to position in variable 'pos'
  //    servo_9.write(pos);
  //    // wait 15 ms for servo to reach the position
  //    delay(15); // Wait for 15 millisecond(s)
  //  }
}

void diam_sabun() {
  for (pos = 0; pos >= 0; pos -= 0) {
    // tell servo to go to position in variable 'pos'
    servo_9.write(pos);
    // wait 15 ms for servo to reach the position
    delay(15); // Wait for 15 millisecond(s)
  }
}
void loop()
{
  cm = 0.01723 * readUltrasonicDistance(7, 7);
  // convert to inches by dividing by 2.54
  inches = (cm / 2.54);
  //  Serial.print(inches);
  //  Serial.print("in, ");
  if (cm <= 15) {
    tekan_sabun();
    Serial.println("tekan_sabun");
    delay(50);
  }
  //  else if ( cm >= 15)  {
  //    diam_sabun();
  //    Serial.println("diam_sabun");
  //    delay(50);
  //  }
  //  Serial.print(cm);
  //  Serial.println("cm");
  //  delay(100); // Wait for 100 millisecond(s)
}
