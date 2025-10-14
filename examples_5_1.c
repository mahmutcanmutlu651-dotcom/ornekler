//Klavyeden girilen sayının 1 ile 100 arasında olup olmadığını gösteren c kodunu yazınız.
#include<stdio.h>
int main(){
    int sayi;
    printf("Lütfen bir sayı giriniz:");
    scanf("%d",&sayi);
    if(1<sayi && 100>sayi){
        printf("Girdiğiniz sayı 1 ile 100 arasındadır.");    
    }
    else{
        printf("Girdiğiniz sayı 1 ile 100 arasında değildir.");
    }
}
