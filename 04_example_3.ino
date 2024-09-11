# define PIN_LED 13

unsigned int count, toggle;


void setup() {
  pinMode(PIN_LED,OUTPUT);
  Serial.begin(115200);
  while(!Serial){
    ;
  }
  Serial.println("hellow World");
  count = toggle =0;
  digitalWrite(PIN_LED,toggle);

}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.println(++count);//이거 때문에 TX LED가 점멸
  toggle = toggle_state(toggle);
  digitalWrite(PIN_LED,toggle);
  delay(1000);

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
