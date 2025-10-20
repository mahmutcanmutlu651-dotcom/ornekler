// ekrana 1 den 10 a kadar olan sayilarin toplamini yazdiran program
//#include <stdio.h>  
/*int main() {
    int toplam = 0;
    for(int i = 1; i <= 10; i++) {
        toplam += i;
    }
    printf("1'den 10'a kadar olan sayilarin toplami: %d\n", toplam);
    return 0;
}*/
// ekrana 1 den 10 a kadar olan sayilarin toplamini yazdiran program
//#include <stdio.h>  
/*int main() {
    int toplam = 0;
    int i = 1;
    while(i <= 10) {
        toplam += i;
        i++;
    }
    printf("1'den 10'a kadar olan sayilarin toplami: %d\n", toplam);
    return 0;
}*/
// ekrana 1 den 10 a kadar olan sayilarin toplamini yazdiran program
#include <stdio.h>  
int main() {
    int toplam = 0;
    int i = 1;
    do {
        toplam += i;
        i++;
    } while(i <= 10);
    printf("1'den 10'a kadar olan sayilarin toplami: %d\n", toplam);
    return 0;
}
