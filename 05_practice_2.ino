# define PIN_LED 7

unsigned int count, toggle;


void setup() {
  pinMode(PIN_LED,OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  count = 0;
  toggle = 1 ;

}

void loop() {
  // put your main code here, to run repeatedly:
  toggle = toggle_state(toggle);
  Serial.println("1");
  digitalWrite(PIN_LED,toggle);
  delay(1000);
  while (count<11){
    toggle = toggle_state(toggle);
    Serial.println("2");
    digitalWrite(PIN_LED,toggle);
    count++;
    delay(100);
  }
  while (1){};
  

}
int toggle_state(int toggle){
  if (toggle==0) {
    return 1;
  } else {
    return 0;
  }
  /*
   *python에선 return 1 if toggle==0 else 0
   *C로는 return toggle==0? 1:0
   *위 2개 방법도 가능
  */
  
}
