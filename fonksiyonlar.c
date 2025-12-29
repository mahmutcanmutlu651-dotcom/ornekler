//1'den 10'a kadar sayıların karesini hesaplayan bir C fonksiyon yazın.
#include <stdio.h>

void kareleriYazdir() {
    for (int i = 1; i <= 10; i++) {
        printf("%d sayisinin karesi = %d\n", i, i * i);
    }
}

int main() {
    kareleriYazdir();
    return 0;
}
//1'den 6'ya kadar rastgele sayılar seçen ve sayıları ekranda görüntüleyen bir fonksiyon yazın.
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rastgeleSayiUret() {
    srand(time(NULL));  // Rastgelelik için seed

    for (int i = 0; i < 10; i++) { // 10 tane rastgele sayı üretir
        int sayi = (rand() % 6) + 1; // 1-6 arası
        printf("Rastgele sayi: %d\n", sayi);
    }
}

int main() {
    rastgeleSayiUret();
    return 0;
}
//Kullanıcı tarafından girilen sayının çarpanlarına ayrılmasını özyinelemeli bir fonksiyonla çözün.
#include <stdio.h>

void carpanaAyir(int sayi, int bolen) {
    if (sayi == 1) {
        return;
    }

    if (sayi % bolen == 0) {
        printf("%d ", bolen);
        carpanaAyir(sayi / bolen, bolen); // aynı bölenle devam
    } else {
        carpanaAyir(sayi, bolen + 1); // sonraki böleni dene
    }
}

int main() {
    int sayi;

    printf("Bir sayi giriniz: ");
    scanf("%d", &sayi);

    printf("Carpanlar: ");
    carpanaAyir(sayi, 2);

    return 0;
}
//Özyinelemeli bir işlev kullanarak örnek bir fibonacci serisi yazdırın
#include <stdio.h>

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int terimSayisi;

    printf("Kac terim Fibonacci yazdirilsin: ");
    scanf("%d", &terimSayisi);

    printf("Fibonacci Serisi: ");
    for (int i = 0; i < terimSayisi; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
