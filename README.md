<h1 align="center">🔐 Arduino Kasa Kilidi Projesi</h1>

<p align="center">
  <img src="https://img.shields.io/badge/Arduino-Uno-blue?logo=arduino" alt="Arduino">
  <img src="https://img.shields.io/badge/Language-C++-brightgreen" alt="Language">
  <img src="https://img.shields.io/badge/Platform-Arduino%20IDE-orange" alt="Platform">
  <img src="https://img.shields.io/badge/License-Open%20Source-success" alt="License">
</p>

<p align="center">
  Bu proje, <b>Arduino</b> kullanılarak yapılmış bir <b>şifreli kasa kilidi sistemidir</b>.<br>
  Kullanıcı 4 haneli bir şifre girerek sistemi açabilir. <br>
  Doğru veya yanlış girişlerde <b>LED</b>, <b>buzzer</b> ve <b>LCD ekran</b> ile geri bildirim verilir. <br>
  Ayrıca doğru şifre girildiğinde <b>servo motor</b> kasayı açar. 
</p>

---

## 🧠 Özellikler
- Kullanıcı 4 haneli şifreyi girer.  
- `#` tuşuna basıldığında şifre kontrol edilir.  
- **Doğru şifre:**
  - ✅ Yeşil LED yanar  
  - ✅ Servo motor kilidi açar  
  - ✅ Buzzer kısa sinyal verir  
- **Yanlış şifre:**
  - ❌ Kırmızı LED yanar  
  - ❌ Buzzer uzun sinyal verir  
- LCD ekranda şifre girişi ve sonuç gösterilir  

---

## ⚙️ Kullanılan Donanımlar
- 🔸 Arduino Uno  
- 🔸 4x3 Tuş Takımı (Keypad)  
- 🔸 LCD Ekran (I2C 20x4)  
- 🔸 Servo Motor  
- 🔸 Buzzer  
- 🔸 LED (Kırmızı ve Yeşil)  
- 🔸 Dirençler ve jumper kablolar  

---

## 🔌 Bağlantılar

| Bileşen | Arduino Pin |
|----------|--------------|
| Servo Motor | 12 |
| Kırmızı LED | 9 |
| Yeşil LED | 10 |
| Buzzer | 11 |
| Keypad Satır Pinleri | 5, 6, 7, 8 |
| Keypad Sütun Pinleri | 2, 3, 4 |
| LCD (I2C) | 0x27 |

---

## 🔒 Şifre Bilgisi
> Varsayılan şifre: **5807**

---

## 🧰 Kurulum
1. Donanım bağlantılarını yukarıdaki tabloya göre yap.  
2. Arduino IDE'de kodu yükle.  
3. LCD ekranda **“Şifrenizi Giriniz”** mesajı belirecek.  
4. Tuş takımından şifreyi girip `#` tuşuna bas.  

---

## 🧩 Örnek Çalışma
- ✅ **Doğru şifre:** Yeşil LED yanar, servo 90° açılır, buzzer kısa sinyal verir.  
- ❌ **Yanlış şifre:** Kırmızı LED yanar, buzzer uzun sinyal verir.  

---

## 🖼️ Devre Görseli
<p align="center">
  <img src="devree.png" alt="Arduino Kasa Kilidi Devre Şeması" width="500"/>
</p>

---

## 📜 Lisans
Bu proje açık kaynaklıdır.  
Dilersen geliştirip kendi sistemlerinde kullanabilir veya geliştirme yapabilirsin.  

---

<h3 align="center">👨‍💻 Geliştirici</h3>
<p align="center">
  <b>Yavuz ÇANDIR</b>  
  <br>
  <a href="https://github.com/YavuzCandirr" target="_blank">
    <img src="https://img.shields.io/badge/GitHub-YavuzCandirr-black?logo=github" alt="GitHub">
  </a>
</p>
