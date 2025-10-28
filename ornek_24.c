/*Klavyeden bir tamsayı giriniz.
Girilen sayıya kadar (dahil değil) 1 ile 100 arasındaki sayıların sadece 3 ve 5’in katı olanlarını ekrana listeleyen bir C programı yazınız.

Eğer girilen sayı 1’den küçük veya 100’den büyükse “Geçersiz giriş!” mesajı veriniz.*/
#include <stdio.h>

int main() {
    int i,n;
    printf("Bir sayi giriniz: ");
    scanf("%d", &n);

    if (n <= 1 || n > 100) {
        printf("Gecersiz giris!\n");
    } else {
        for (i = 1; i < n; i++) {
            if (i % 3 == 0 && i % 5 == 0) {
                printf("%d ", i);
            }
        }
    }
    return 0;
}
