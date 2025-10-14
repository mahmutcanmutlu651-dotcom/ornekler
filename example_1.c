/*Klavyeden girilen sayinin pozitif mi negatif mi olduğunu ekrana yazdiran c kodunu yaziniz*/

#include<stdio.h>
int main()
{
    int sayi;
    printf("Lutfen bir sayi giriniz: ");
    scanf("%d",&sayi);
    
    if(sayi>0){
        printf("Girdiginiz sayi %d ve pozitiftir.",sayi);
    }
    else{
        printf("Girdiginiz sayi %d ve negatiftir.",sayi);
    }

    return 0;
}
