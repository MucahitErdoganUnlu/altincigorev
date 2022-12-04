# Gorev-6

6\. görev `class` kullanımıyla ilgili
**` RegularPolygon `** isimli bir sınıfımız var
Başta oluştururken girdi olarak aldığı tam sayı ne ise o kenar sayısına sahip düzgün çokgeni temsil ediyor.
Yani `RegularPolygon square(4);` kareyi temsil ediyor.
Bu sınıfın iki `private` elemanı var: `n` ve `angle`
 - `n` kenar sayısını olduğunu tutuyor
 - `angle` merkezinden ardışık iki köşe arasındaki açıyı tutuyor
Yani kare için n=4, angle=π/4
**Hedef:** Bu sınıfın iki `public` fonksiyonu olsun istiyoruz:

  1. `area`: Girdi olarak bir kenar uzunluğunu alıyor, çıktı olarak çokgenin alanını veriyor.
  2. `length`: Girdi olarak çokgenin alanını alıyor, çıktı olarak bir kenar uzunluğunu veriyor.
  
**Bonus:** Mevcut durumda tanımlanmış RegularPolygon sayısını construction  ve destruction esnasında otomatik olarak tutan ve getcount fonksiyonu ile bu sayıyı veren bir yapı oluşturmayı deneyebilirsiniz. Bunun için `count` isimli değişkenin `private` olarak tanımlanması ve main'den önce 0'a eşitlenmesi gerekiyor.

* π'yi tanımlamak için şu iki satırı en başa yazabilirsiniz:
```
#define _USE_MATH_DEFINES // M_PI
#include <cmath>
```
