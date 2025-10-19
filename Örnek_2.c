/*Klavyeden girilen a ve b sayilari icin a nin b nin tam kati olup olmadigini ekrana yazdiran c kodunu yaziniz*/

#include<stdio.h>
int main()
{
    int a,b;
    printf("Lutfen a sayisini giriniz:\n");
    scanf("%d",&a);
    printf("Lutfen b sayisini giriniz:\n");
    scanf("%d",&b);
    
    if(a%b==0){
        printf("a,b'nin tam katidir");
    }
    else{
        printf("a,b'nin tam kati degildir");
    }

    return 0;
}
