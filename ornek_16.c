//Klavyeden girilen 5 sayının toplamını ekrana yazdırınız.
#include <stdio.h>
int main() {
    int sum = 0;
    int number;
    for (int i = 0; i < 5; i++) {
        printf("Bir sayi giriniz: ");
        scanf("%d", &number);
        sum += number;
    }
    printf("Toplam: %d\n", sum);
    return 0;
}
