  // This code is free to use but mention of credits of the Author.
  // Author - Sourav Kumar Verma
  //For reading X and Y axis of resistive touch pad.
   
  void setup() {
  Serial.begin(9600);
  
}


void loop() {
  static int posX=0;
  static int posY=0;
  posX=readX();
  posY=readY();
  Serial.print("X is : ");
  Serial.print(posX);
  Serial.print(" Y is : ");
  Serial.println(posY);
  delay(200);
}
 

  int readX(){
  pinMode(A0,OUTPUT);
  pinMode(A1,INPUT);
  pinMode(A2,OUTPUT);
  pinMode(A3,OUTPUT); //pin not being used
  digitalWrite(A3,LOW); //pin not being used
  digitalWrite(A0,HIGH);
  digitalWrite(A2,LOW);
  return (analogRead(A1));
  
 }
  int readY(){
  
  pinMode(A0,OUTPUT); //pin not being used
  pinMode(A1,OUTPUT);
  pinMode(A2,INPUT);
  pinMode(A3,OUTPUT);
  digitalWrite(A0,LOW); //pin not being used
  digitalWrite(A1,HIGH);
  digitalWrite(A3,LOW);
  return (analogRead(A2));
 }
