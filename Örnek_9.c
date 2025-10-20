//2- Klavyeden girilen harf notunun karşılığını aşağıdaki duruma göre ekrana yazdıran akış şemasını çiziniz ve C kodunu yazınız.
/*
80 < n <= 100 -> A
60 < n <= 80 -> B
40 < n <= 60 -> C
20 < n <= 40 -> D
0 <= n <= 20 -> F
*/
#include <stdio.h>
int main() {
    int not_degeri;

    printf("Lutfen harf notunuzu giriniz (0-100): ");
    scanf("%d", &not_degeri);

    if (not_degeri > 80 && not_degeri <= 100) {
        printf("Harf Notunuz: A\n");
    } else if (not_degeri > 60 && not_degeri <= 80) {
        printf("Harf Notunuz: B\n");
    } else if (not_degeri > 40 && not_degeri <= 60) {
        printf("Harf Notunuz: C\n");
    } else if (not_degeri > 20 && not_degeri <= 40) {
        printf("Harf Notunuz: D\n");
    } else if (not_degeri >= 0 && not_degeri <= 20) {
        printf("Harf Notunuz: F\n");
    } else {
        printf("Gecersiz not degeri girdiniz.\n");
    }

    return 0;
}   
