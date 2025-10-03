# Arduino Şifreli Kilit Sistemi

Bu proje, Arduino kullanılarak yapılmış bir **şifreli kilit sistemi**dir. Kullanıcı 4 haneli şifreyi girerek sistemi açabilir. 
Doğru veya yanlış girişlerde LED ve buzzer ile geri bildirim verilir ve servo motor kilidi açıp kapatır.

!KASA ŞİFRESİ=5807
---

## Kullanılan Donanımlar

- Arduino Uno
- 4x3 Tuş Takımı (Keypad)
- LCD Ekran (I2C 20x4)
- Servo Motor
- Buzzer
- LED (Kırmızı ve Yeşil)
- Dirençler ve jumper kablolar

---

## Özellikler

- Kullanıcı 4 haneli şifreyi girer.  
- `#` tuşuna basıldığında şifre kontrol edilir.  
- Doğru şifre:  
  - Yeşil LED yanar  
  - Servo motor kilidi açar  
  - Buzzer kısa sinyal verir  
- Yanlış şifre:  
  - Kırmızı LED yanar  
  - Buzzer uzun sinyal verir  
- LCD ekranda giriş ve sonuç gösterilir.  

---

## Bağlantılar

- Servo Motor → Pin 12  
- Kırmızı LED → Pin 9  
- Yeşil LED → Pin 10  
- Buzzer → Pin 11  
- Keypad Satır Pinleri → 5, 6, 7, 8  
- Keypad Sütun Pinleri → 2, 3, 4  
- LCD I2C Adresi → 0x27  


---

## Kullanım

1. Tüm bileşenleri bağlayın ve Arduino IDE ile kodu yükleyin.  
2. Arduino'yu çalıştırın.  
3. LCD ekranda "Şifrenizi Giriniz:" mesajı görünecektir.  
4. Tuş takımından şifreyi girin ve `#` tuşuna basın.  
5. Sonuca göre LED, buzzer ve servo motor geri bildirim verecektir.  

---

## Örnek Çalışma

- Doğru şifre: Yeşil LED yanar, servo 90° açılır, buzzer kısa sinyal verir.  
- Yanlış şifre: Kırmızı LED yanar, buzzer uzun sinyal verir.  

---

![Arduino Sceernshot](kasa_kilidi/devre.png)


