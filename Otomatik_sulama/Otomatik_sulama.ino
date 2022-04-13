int nem_sensor = A0;
int motor = 8;

void setup() {
 pinMode(nem_sensor,INPUT);
 pinMode(motor,OUTPUT);
 digitalWrite(motor,0);
 //Serial.begin(9600);
}

void loop() {
 int nem_durumu = analogRead(nem_sensor);
 //Serial.println(nem_durumu);

 if(nem_durumu >400)
 {
  digitalWrite(motor,1);
  delay(1000);
  digitalWrite(motor,0);
  delay(5000);  
  }
  else
  {
   digitalWrite(motor,0);
    }
}
