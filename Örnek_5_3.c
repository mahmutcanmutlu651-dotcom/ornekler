#include<stdio.h>
int main(){
    int sayi;
    printf("Lütfen bir sayı giriniz:");
    scanf("%d",&sayi);
    ((sayi>1)&&(sayi<100))? printf("1 ile 100 arasindadir"):printf("1 ile 100 arasinda degildir");
}
