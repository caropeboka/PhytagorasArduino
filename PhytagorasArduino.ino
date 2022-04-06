int a;
int b;
int h;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print("Masukkan nilai C1 = ");
  while (1){
    if (Serial.available() > 0){
      a = Serial.read();
      Serial.write(a);
      a = a - 48;
      break;
    }
  }
  Serial.println();
  Serial.print("Masukkan nilai C2 = ");
  while (1){
    if (Serial.available() > 0){
      b = Serial.read();
      Serial.write(b);
      b = b - 48;
      break;
    }
  }
  Serial.println();
  h = sqrt(a * a + b * b);
  Serial.print("Maka panjang sisi miring h adalah = ");
  Serial.print(h);
  Serial.println();
  Serial.println();
}
