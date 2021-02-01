# Single-Layer-Neural-Networks
### Bu proje KTU Bilgisayar Mühendisliği Yapay Sinir Ağları dersi kapsamında geliştirilmiştir. 
### Proje kapsamında Visual Studio üzerinde C++/CLI arayüzü kullanılmıştır.
### Yapay Sinir Ağlarında (supervised) danışmanlı öğrenme etiketli verileri oluşturulan ağa verilip ağın nöronlarının ağırlıklarının güncellenmesi ile yapılabilir. Burada ilk olarak iki farklı sınıf etiketine sahip objeleri ayıran ağı eğiteceğiz. Bu eğitimi gerçekleştirirken hem ayrık hemde sürekli fonksiyon yardımı ile yapacağız. Ağımızın eğitimi sonlandığında iki sınıfı birbirinden ayıran bir doğru çizilecektir. Burada dikkat etmemiz gereken önemli noktalardan birisi örneklerimiz lineer olarak dağılması gerekmektedir. Çıktı katmanında tek nöron ve tek katlı ağ modeli kullanılmıştır. Nöronumuz 1. Örneğe +1 sonucunu verirken 2. Örneğe -1 sonucunu vermektedir.

## Ayrık Fonksiyon ile Eğitim

### Öğrenme işlemi tüm örnekler üzerinde error değeri sıfırlanana kadar işlemleri tekrarlamaktadır. Örnekler ağa verilirken bias değeri eklenip  örnek*wMatrisi ile net değeri hesaplandıktan sonra bu net değeri aktivasyon fonksiyonu ile ağımızın çıktısı bulunur. Eğer ağımızın çıktısı beklenen değerden farklı ise wMatrisi  w + x * (c * (d - o))  işlemi ile güncellenecektir. Burada c sabit x giriş değeri d beklenen değer ve o çıktı değeridir. Bu işlem error değerimiz sıfır olunca sonlanacak ve iki sınıfı birbirinden ayıran doğru ekrana çizilecektir.

### Yukarıdaki fonksiyonda kullanıcıdan alınan tüm örnek değerlerine göre random olarak başlatılan w matrisi ile çizilen doğrunun tüm değerleri iki sınıfı birbiri ile ayrılmasını sağlamaktadır. Örnek sonuç aşağıdaki resimdeki gibidir. Fonksiyonumuz ayrık olduğu için iki sınıfı birbirinden ayırma işlemi fazla cycle da tamamlanmıştır.

![image](https://user-images.githubusercontent.com/22706674/106503646-f91ae380-64d6-11eb-830a-210917b6d62f.png)

## Sürekli FOnksiyon ile Eğitim

### İki Sınıfa ait 2-Boyutlu veri uzayında etiketli örnekler ile sürekli (contunious) aktivasyon fonksiyonu ile (tanh fonk.) danışmanlı öğrenme (supervised learning) işlevi gerçeklenmiştir. Bu işlevi gerçeklerken aşağıdaki fonksiyonlar ile işlemler gerçeklenmiştir.

### Öğrenme işlemi yapılırken Batch normalizasyon yapılmaktadır. Normalizasyon yapıldıktan sonra veriler 0 merkezli olarak toplanacağından öğrenme işemi sonrasında trackbarr yardımı ile öğrenmenin doğruluğu kontrol edilmelidir. Batch normalizasyon işlevi checkbox işaretlendiğinde aşağıdaki fonksiyon ile yapılmaktadır.
### Sürekli fonksiyon ile eğitimi yapılan programın örneği aşağıdaki gibidir. Resimden de görülecei üzere eğitim tamamlandıktan sonra örnekler belli oranda sonuç gösterilmesi için örneklere zoom yapılmıştır.

![image](https://user-images.githubusercontent.com/22706674/106504037-76deef00-64d7-11eb-8ad2-07276ef4b898.png)
