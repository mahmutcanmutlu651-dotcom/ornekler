//2- Klavyeden girilen harf notunun karşılığını aşağıdaki duruma göre ekrana yazdıran C kodunu yazınız. switch case kullaniniz.
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
    char harf_notu;

    printf("Lutfen harf notunuzu giriniz (0-100): ");
    scanf("%d", &not_degeri);

    if (not_degeri < 0 || not_degeri > 100) {
        printf("Gecersiz not degeri girdiniz.\n");
        return 1;
    }

    switch (not_degeri / 20) {
        case 5:
        case 4:
            harf_notu = 'A';
            break;
        case 3:
            harf_notu = 'B';
            break;
        case 2:
            harf_notu = 'C';
            break;
        case 1:
            harf_notu = 'D';
            break;
        default:
            harf_notu = 'F';
            break;
    }

    printf("Harf Notunuz: %c\n", harf_notu);
    return 0;
}   
