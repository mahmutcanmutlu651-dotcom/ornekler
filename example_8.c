//Klavyeden girilen 3 sayinin en buyugunu bulan c programini yaziniz.
#include <stdio.h>
int main(){
    int a, b, c, max;
    printf("3 sayi giriniz: ");
    scanf("%d %d %d", &a, &b, &c);
    max = a; //ilk sayiyi en buyuk kabul et
    if(b > max){
        max = b; //b daha buyukse max'i b yap
    }
    if(c > max){
        max = c; //c daha buyukse max'i c yap
    }
    printf("En buyuk sayi: %d\n", max);
    return 0;
}
