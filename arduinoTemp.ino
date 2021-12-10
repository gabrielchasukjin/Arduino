void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); 
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
}

void loop() {
  //Reading the sensor value
  int sensorVal = analogRead(A0);
  Serial.print("Sensor Value: ");
  Serial.print(sensorVal); 

  //convert sensor to volts
  float voltage = (sensorVal/1024.0) * 5.0; 
  Serial.print(". Volts: ");
  Serial.print(voltage);
  Serial.print("c degrees C: ");

  //convert volts to celcius
  float temperature = (voltage - 0.5) * 100;  
  Serial.print(temperature);

  //convert celcius to fahrenheit
  float fahrenheit = (temperature * 9/5) + 32; 
  Serial.print("F degrees F: ");
  Serial.println(fahrenheit);


  if(fahrenheit < 72.0){
    //Red
    analogWrite(11,80);
    //Green
    analogWrite(9,187);
    //Blue
    analogWrite(10,253);
  }
  else if(fahrenheit > 72.0 && fahrenheit < 72.6)
  {
    //Red
    analogWrite(11,94);
    //Green
    analogWrite(9,138);
    //Blue
    analogWrite(10,255);
  }
  else if(fahrenheit > 72.6 && fahrenheit < 73.2){
     //Red
    analogWrite(11,6);
    //Green
    analogWrite(9,69);
    //Blue
    analogWrite(10,255);
  }
   else if(fahrenheit > 73.2 && fahrenheit < 73.8){
     //Red
    analogWrite(11,6);
    //Green
    analogWrite(9,69);
    //Blue
    analogWrite(10,130);
  }
   else if(fahrenheit > 73.8 && fahrenheit < 74.6){
     //Red
    analogWrite(11,102);
    //Green
    analogWrite(9,72);
    //Blue
    analogWrite(10,103);
  }
  
  
  
  



  
}
