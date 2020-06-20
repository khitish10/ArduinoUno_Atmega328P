int switchstate=0;
int motorpin1 =10;
int motorpin2 = 11;
int moterpin3 = 6;
int motorpin4 = 9;
int enablepin = 5;
int enablepin2 = 3;
int sensor = 7;
int sensor2 = 8;
int sensorstate1 = 0;
int sensorstate2 = 0;
void setup()
{
pinMode (7, INPUT);
pinMode (10, OUTPUT);
pinMode (11, OUTPUT);
pinMode(enablepin,OUTPUT); pinMode (8, INPUT);
pinMode (6, OUTPUT);
pinMode (9, OUTPUT); }
void loop()
{ 
digitalWrite(enablepin,HIGH); digitalWrite(enablepin2,HIGH);
sensorstate1= digitalRead(7);
sensorstate2= digitalRead(8);
if(sensorstate1 == HIGH)
{
analogWrite(10,80);
analogWrite(11,0); }
else
{
analogWrite(10,0);
analogWrite(11,0);

}
if(sensorstate2 == HIGH)
{
analogWrite(6,80);
analogWrite(9,0); }
else
{
analogWrite(6,0);
analogWrite(9,0);

}

}
