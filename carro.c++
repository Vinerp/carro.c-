const int ldr = A5;


void setup()
{
  pinMode(ldr, INPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  Serial.begin(9600);
  
}

void loop()
{
  int valorLDR = analogRead(ldr);
  if (valorLDR > 899){
    digitalWrite(10, HIGH);
    digitalWrite(9, HIGH);}
  else{
    digitalWrite(10, LOW);
    digitalWrite(9, LOW);}
  
  Serial.println(analogRead(ldr));
}