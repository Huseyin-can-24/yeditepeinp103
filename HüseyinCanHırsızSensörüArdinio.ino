


int a=6,b=7,c=8,d=9,e=10,f=11,g=12;
int sayac=0;


void setup()
{
  for (int i=6;i<13;i++){
    pinMode(i,OUTPUT);}
  pinMode(5, INPUT);
  pinMode(3, INPUT);
  pinMode(4, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(13, OUTPUT);

  
}

void loop()
{
  if (digitalRead(5) > 0) {
    digitalWrite(13, HIGH);
    if (digitalRead(3) > 0) {
      digitalWrite(4, LOW);
      digitalWrite(2, HIGH);
      sayac++;
      delay(3000);
    } else {
      digitalWrite(4, HIGH);
      digitalWrite(2, LOW);
    }
  } else {
    digitalWrite(2, LOW);
    digitalWrite(4, LOW);
    digitalWrite(13, LOW);
    sayac=0;

  }
  if (sayac > 9){
      sayac=0; }
  
  switch(sayac){
    case 0:
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,HIGH);
    break;
    case 1:
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    break;
    case 2:
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,HIGH);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    break;
    case 3:
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,LOW);
    break;
    case 4:
    digitalWrite(a,HIGH);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    break;
    case 5:
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    break;
    case 6:
    digitalWrite(a,LOW);
    digitalWrite(b,HIGH);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    break;
    case 7:
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,HIGH);
    digitalWrite(e,HIGH);
    digitalWrite(f,HIGH);
    digitalWrite(g,HIGH);
    break;
    case 8:
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,LOW);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    break;
    case 9:
    digitalWrite(a,LOW);
    digitalWrite(b,LOW);
    digitalWrite(c,LOW);
    digitalWrite(d,LOW);
    digitalWrite(e,HIGH);
    digitalWrite(f,LOW);
    digitalWrite(g,LOW);
    break; }
      
  
  
  
  
  
  
  
  delay(250); // Delay a little bit to improve simulation performance
}