#define pot A1
#define der1 5
#define der2 6
#define Speed 11
int var1 ;
int var2 ;
void setup() {
  // put your setup code here, to run once:
  pinMode(pot,INPUT);
  pinMode(der1,OUTPUT);
//  pinMode(der..,2,OUTPUT);
  pinMode(Speed,OUTPUT);

}

void loop() {
  var1=analogRead(pot);
  digitalWrite(der1,HIGH);
  digitalWrite(der2,LOW);
  var2=map (var1,0,1023,0,255);
  analogWrite (Speed, var2);
  

}
