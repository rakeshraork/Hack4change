#define soil_moisture_pin A0 

void setup() {
  Serial.begin(9600);
  // put your setup code here, to run once:

}

void loop() {
  Serial.println(analogRead(soil_moisture_pin));
  delay(500);
    // put your main code here, to run repeatedly:

}
