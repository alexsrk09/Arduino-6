
int par(int x){ //muestra el primer led, el de paridad
  if(x%2==1 && x!=0){
    digitalWrite(2,HIGH);
    return (x-1);
  }
  else return x;
}
int led7 (int x){ //2^5
  if(x>=pow(2, 5)){
    digitalWrite(7, HIGH);
    return (x-pow(2, 5));
  }
  else return x;
}
int led6 (int x){ //2^4
  if(x>=pow(2, 4)){
    digitalWrite(6, HIGH);
    return (x-pow(2, 4));
  }
  else return x;
}
int led5 (int x){ //2^3
  if(x>=pow(2, 3)){
    digitalWrite(5, HIGH);
    return (x-pow(2, 3));
  }
  else return x;
}
int led4 (int x){ //2^2
  if(x>=pow(2, 2)){
    digitalWrite(4, HIGH);
    return (x-pow(2, 2));
  }
  else return x;
}
int led3 (int x){
  if(x>=pow(2, 1)){ //2^1
    digitalWrite(3, HIGH);
    return (x-pow(2, 1));
  }
  else return x;
}
void setup() {
  pinMode(2,OUTPUT);
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  int x=63;  //introduce el numero a traducir
  x=par(x);
  x=led7(x);
  x=led6(x);
  x=led5(x);
  x=led4(x);
  x=led3(x);
}

void loop() {
}
