int LED1 = 13;
int LED2 = 12;
int LED3 = 11;
int LED4 = 7;

void setup() {
 pinMode(2, INPUT_PULLUP);
 pinMode(13, OUTPUT);
  pinMode(LED1, OUTPUT);
   pinMode(LED2, OUTPUT);
   pinMode(LED3, OUTPUT);
   pinMode(LED4, OUTPUT);
}

void loop() {
 int pusshed = digitalRead(2);
 if(pusshed == LOW){
   digitalWrite(13, HIGH);
 }else{
   digitalWrite(13, LOW);
 }
 digitalWrite(LED1, HIGH);    // turn on LED1 
  delay(100);                  // wait for 100ms
  digitalWrite(LED2, HIGH);    // turn on LED2
  delay(100);                  // wait for 100ms       
  digitalWrite(LED3, HIGH);    // turn on LED3 
  delay(100);                  // wait for 100ms
  digitalWrite(LED4, HIGH);    // turn on LED4
  delay(100);                  // wait for 100ms
  digitalWrite(LED1, LOW);     // turn off LED1
  delay(200);                  // wait for 200ms
  digitalWrite(LED2, LOW);     // turn off LED2
  delay(200);                  // wait for 200ms
  digitalWrite(LED3, LOW);     // turn off LED3
  delay(200);                  // wait for 200ms
  digitalWrite(LED4, LOW);     // turn off LED4
  delay(200);                 
}



