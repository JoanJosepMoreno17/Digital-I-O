const int led1 = 8;
unsigned long retard = 500;
int i=0;
void setup(){
for (i; i<3; i++)
{
pinMode(led1,OUTPUT);
digitalWrite(led1,1);
delay(retard);
digitalWrite(led1,0);
delay(retard);
}
}
void loop() {
}
