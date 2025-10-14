//Klavyeden girilen a ve b sayilarinin büyüklüğünü karsilastiran c kodunu yaziniz.
#include <stdio.h>
int main(){
    int a,b;
    printf("Lütfen iki sayı giriniz:");
    scanf("%d %d",&a,&b);
    (a>b)? printf("a b'den buyuktur"): printf("a b'den kucuktur ");
}
