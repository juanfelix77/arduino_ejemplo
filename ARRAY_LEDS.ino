int array1[]={2,3,4};
void setup() {
  for(int i=0;i<=2;i++){
    pinMode(array1[i],OUTPUT);
  }
  int control=0;
  while(control<=3){
    control+=1;
    blink_led();
    delay(500);   
  }

}

void loop() {
  // put your main code here, to run repeatedly:

}
void blink_led(){
  digitalWrite(array1[0],HIGH);
  digitalWrite(array1[1],HIGH);
  digitalWrite(array1[2],HIGH);
  delay(500);
  digitalWrite(array1[0],LOW);
  digitalWrite(array1[1],LOW);
  digitalWrite(array1[2],LOW);
}

