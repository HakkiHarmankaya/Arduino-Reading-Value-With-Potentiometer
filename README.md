# 🎚️ Arduino #3: Potansiyometre ile Analog Değer Okuma

Bu projede, bir **potansiyometre** kullanarak Arduino üzerinden **analog veri okuma** işlemini gerçekleştireceğiz.  
Serial Monitor üzerinden anlık değerleri takip edebileceğiniz şekilde tasarlanmıştır.

🔗 [Web Siteme Bakmak İçin Tıkla](https://www.hakkiharmankaya.com/)
 
🔗 [Tinkercad Tasarımını Görüntüle](https://www.tinkercad.com/things/6ruU5uRQtPS?sharecode=g58elSyOKZaZqbvXGTfWq2GqZJj3V26jLntGLdMiri0)

---

## 🧰 Gerekli Malzemeler

- 1 adet **potansiyometre**
- 3 adet **jumper kablo**
- 1 adet **breadboard**
- 1 adet **Arduino**

---

## ⚙️ Adım Adım Devre Kurulumu

### 🔹 Adım 1: Devre Tasarımına Başlayın

- Tinkercad.com veya benzeri bir simülasyon aracında yeni bir devre oluşturun.
- Aşağıdaki bileşenleri ekleyin:  
  **Arduino**, **Breadboard**, **Potentiometer**

---

### 🔹 Adım 2: Potansiyometreyi Bağlayın

Potansiyometrenin 3 bacağı vardır:

- **Sol bacak** → GND  
- **Sağ bacak** → 5V  
- **Orta bacak** → A0 (analog pin)

---

### 🔹 Adım 3: Devreyi Kontrol Edin

- Arduino'yu bağlayın ve **Serial Monitor'ü** açın.
- Potansiyometreyi döndürdükçe, değerlerin değişimini görebilirsiniz.

---

### 🔹 Adım 4: Arduino Kodunu Yazın ve Yükleyin

Aşağıdaki kodu Arduino IDE'ye yapıştırın ve karta yükleyin:

```cpp
int deger = 0;
float gerilim = 0;

void setup() {
  Serial.begin(9600); // Seri haberleşmeyi başlat
}

void loop() {
  deger = analogRead(A0); // Analog değeri oku
  gerilim = (5.00 / 1024.00) * deger; // Voltaj hesapla

  Serial.print("Alinan deger = ");
  Serial.print(deger);
  Serial.print("  Voltaj degeri = ");
  Serial.println(gerilim);
  delay(500); // 500 ms bekle
}
