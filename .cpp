#define IN1 D1
#define IN2 D2
#define IN3 D5
#define IN4 D6
void setup() {
  // put your setup code here, to run once:
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //eepromdan gelen kodlar hep void setup()'a konulmuş çalışma mantığına göre kodun void loop veya void setup kısmına koyulacağına karar verilebilir.
if (/*internetten gelen bilgiye göre mekanizmanın çalışmasını sağlayan değişken */){
  for (int i = 0; i < 1500; i++) {
    int modul = i % 4;
    switch (modul) {
      case 0:
        digitalWrite(IN1, HIGH);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        break;
      case 1:
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, HIGH);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, LOW);
        break;
      case 2:
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, HIGH);
        digitalWrite(IN4, LOW);
        break;
      case 3:
        digitalWrite(IN1, LOW);
        digitalWrite(IN2, LOW);
        digitalWrite(IN3, LOW);
        digitalWrite(IN4, HIGH);
        break;
    }
  delay(3);
  }

delay(1000);
}

  
}
