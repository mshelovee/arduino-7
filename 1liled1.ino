// C++ code
//
void setup()
{
  pinMode(2, INPUT);  //ANAHTAR SİNYALGİRİŞİ
  pinMode(3, OUTPUT); //LED BAĞLANTISI ÇIKIŞI
}

void loop()
{
 if(digitalRead(2)==1) //LEDİYAK
 {
   digitalWrite(3,1);
 }
  else
  {
   digitalWrite(3,0);  //LEDİ SÖNDÜR
  }
}