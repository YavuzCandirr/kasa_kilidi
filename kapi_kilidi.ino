#include <Servo.h>
#include <LiquidCrystal_I2C.h>
#include "Keypad.h"
Servo myservo;
LiquidCrystal_I2C lcd(0x27, 20, 4);

int buzzerPin = 11;
int kirmiziLed = 9;
int yesilLed = 10;
int basamak = 0;
const byte satir = 4;
const byte sutun = 3;
char tus;
String sifre = "5807";
String girilen_sifre = "";

char tus_takimi[satir][sutun] = {
  { '1', '2', '3' },
  { '4', '5', '6' },
  { '7', '8', '9' },
  { '*', '0', '#' }
};

byte satir_pinleri[satir] = { 8, 7, 6, 5 };
byte sutun_pinleri[sutun] = { 4, 3, 2 };

Keypad tuslar = Keypad(makeKeymap(tus_takimi), satir_pinleri, sutun_pinleri, satir, sutun);

void setup() {
  Serial.begin(9600);
  pinMode(kirmiziLed, OUTPUT);
  pinMode(yesilLed, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  lcd.backlight();
  lcd.setCursor(0, 0);
  lcd.print("Sifrenizi Giriniz:");
  digitalWrite(11, 0);
  myservo.attach(12);
  
}

void loop() {
  tus = tuslar.getKey();  // Tuşu al
  
  if (tus) {  // Eğer tuş basılmışsa
    lcd.setCursor(basamak, 2);  // LCD'de doğru konumda yazı yaz
    lcd.print(tus);  // Tuşu yaz
    girilen_sifre += tus;  // Tuşu girilen_sifre'ye ekle
    basamak++;  // Basamağı bir artır

    if (tus == '#') {  // # tuşuna basıldığında şifre kontrol et
      if (girilen_sifre.substring(0, girilen_sifre.length() - 1) == sifre) {  // Şifreyi kontrol et
        lcd.setCursor(0, 2);
        lcd.print("Dogru Sifre");
        digitalWrite(yesilLed, HIGH);
        myservo.write(90);
        if(digitalRead(yesilLed)==HIGH) {
          digitalWrite(buzzerPin, HIGH);
          delay(200);
          digitalWrite(buzzerPin, LOW);
          delay(500);
          digitalWrite(buzzerPin, HIGH);
          delay(200);
          digitalWrite(buzzerPin, LOW);
         
        } // Yeşil LED'i aç

        // LCD'yi temizle
        delay(2000);  // 2 saniye bekle
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Sifrenizi Giriniz:");
        myservo.write(0);

        // LED'leri kapat
        digitalWrite(yesilLed, LOW);
        digitalWrite(kirmiziLed, LOW);

        girilen_sifre = "";  // Girilen şifreyi sıfırla
        basamak = 0;
        


        
        
        
          // Basamağı sıfırla
      } else {  // Eğer şifre yanlışsa
        lcd.setCursor(0, 2);
        lcd.print("Yanlis Sifre");
        digitalWrite(kirmiziLed, HIGH);
        if(digitalRead(yesilLed==HIGH)){
          digitalWrite(buzzerPin, HIGH);
          delay(2000);
          digitalWrite(buzzerPin, LOW);

        }   // Kırmızı LED'i yak

        delay(2000);  // 2 saniye bekle
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Sifrenizi Giriniz:");

        // LED'leri kapat
        digitalWrite(kirmiziLed, LOW);
        girilen_sifre = "";  // Girilen şifreyi sıfırla
        basamak = 0;  // Basamağı sıfırla
      }
    }
  }
}
