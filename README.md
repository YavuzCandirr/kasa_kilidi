# 🔐 Arduino Şifreli Kasa Kilidi Sistemi

Bu proje, **Arduino kullanılarak yapılmış bir şifreli kilit sistemidir.**  
Kullanıcı 4 haneli şifreyi girerek sistemi açabilir.  
Doğru veya yanlış girişlerde **LED ve buzzer ile geri bildirim** verilir ve **servo motor kilidi açıp kapatır.**

---

## 📸 Devre Görseli

![Kasa Kilidi Devre Görseli](devre.png)

> 💡 Kasa şifresi varsayılan olarak **5807**'dir.

---

## ⚙️ Kullanılan Donanımlar

- Arduino Uno  
- 4x3 Tuş Takımı (Keypad)  
- LCD Ekran (I2C 20x4)  
- Servo Motor  
- Buzzer  
- LED (Kırmızı ve Yeşil)  
- Dirençler ve jumper kablolar  

---

## 🧠 Özellikler

- Kullanıcı 4 haneli şifreyi girer.  
- `#` tuşuna basıldığında şifre kontrol edilir.  

### ✅ Doğru Şifre:
- Yeşil LED yanar  
- Servo motor kilidi açar  
- Buzzer kısa sinyal verir  

### ❌ Yanlış Şifre:
- Kırmızı LED yanar  
- Buzzer uzun sinyal verir  

LCD ekranda hem giriş hem de sonuç bilgileri gösterilir.  

---

## 🔌 Bağlantılar

| Bileşen | Pin Numarası |
|----------|--------------|
| Servo Motor | 12 |
| Kırmızı LED | 9 |
| Yeşil LED | 10 |
| Buzzer | 11 |
| Keypad Satır Pinleri | 5, 6, 7, 8 |
| Keypad Sütun Pinleri | 2, 3, 4 |
| LCD (I2C) Adresi | 0x27 |

---

## 🚀 Kullanım

1. Tüm bileşenleri bağlayın ve Arduino IDE ile kodu yükleyin.  
2. Arduino’yu çalıştırın.  
3. LCD ekranda **“Şifrenizi Giriniz:”** mesajı gözükecektir.  
4. Tuş takımından şifreyi girin ve `#` tuşuna basın.  
5. Doğru veya yanlış sonuca göre LED, buzzer ve servo motor tepki verir.  

---

## 🔍 Örnek Çalışma

- **Doğru şifre:** Yeşil LED yanar, servo 90° döner, buzzer kısa sinyal verir.  
- **Yanlış şifre:** Kırmızı LED yanar, buzzer uzun sinyal verir.  

---

## 🧩 Geliştirme Önerileri

- Şifreyi **EEPROM** üzerinde saklayarak kalıcı hale getirebilirsiniz.  
- LCD ekran yerine **OLED ekran** kullanılabilir.  
- Buzzer melodisini değiştirerek farklı uyarı sesleri eklenebilir.  
- Bluetooth veya Wi-Fi (ESP8266/ESP32) desteğiyle uzaktan kontrol eklenebilir.

---

✨ Hazırlayan: **Yavuz Candır**  
📅 Proje: *Arduino Şifreli Kasa Kilidi*  
