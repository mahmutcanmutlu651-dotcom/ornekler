/*Klavyeden girilen a ve b degerlerinin iliskisini ekrana yazdiran  c kodunu yaziniz*/

#include<stdio.h>
int main()
{
    int a,b;
    
    printf("Lutfen a degeri giriniz: ");
    scanf("%d",&a);
    printf("Lutfen b degeri giriniz: ");
    scanf("%d",&b);
    
    if(a>b){
        printf("a,b'den büyüktür.");
    }
    else if(a<b){
        printf("a,b'den kucuktur.");
    }
    
    else{
        printf("a b'ye eşittir .");
    }
    
    return 0;
}
