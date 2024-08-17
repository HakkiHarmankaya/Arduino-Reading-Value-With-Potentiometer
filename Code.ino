int deger=0;
float gerilim=0;
void setup() 
{
  Serial.begin(9600);
}

void loop() 
{
  deger = analogRead(A0);
  gerilim = (5.00 / 1024.00)*deger;
  Serial.print("Alinan deger = ");
  Serial.print(deger);
  Serial.print("  Voltaj degeri = ");
  Serial.println(gerilim);
  delay(500);
}
