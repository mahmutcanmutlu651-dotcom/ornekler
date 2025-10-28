/*Soru 1
Klavyeden bir tamsayı giriniz.
Girilen sayıdan küçük olan 1 ile 100 arasındaki tüm çift sayıları ekrana listeleyen bir C programı yazınız.*/
/*#include <stdio.h>

int main(){
    int i;
    int n;
    printf("Klavyeden bir tamsayı giriniz: ");
    scanf("%d",&n);

    for(i=1;i<100;i++){
        
        if(i<n && i%2==0){
            printf("%d\n",i);
        }
        
    }
    return 0;
}*/

/*Soru 2
Klavyeden girilen sayının pozitif, negatif veya sıfır olduğunu ekrana yazdıran bir C programı yazınız.*/

/*#include <stdio.h>

int main(){
    int i;
    printf("bir tam sayı giriniz: ");
    scanf("%d",&i);
    if(i>0){
        printf("sayı pozitiftir");
    }
    else if(i<0){
        printf("sayı negatiftir");
    }
    else{
        printf("sayı sıfırdır");
    }
    return 0;
}*/
/*Soru 3
Klavyeden girilen bir sayının faktöriyelini hesaplayan bir C programı yazınız.
(Örnek: Girdi=5 → Çıktı=120)*/
/*#include <stdio.h>
int main(){
    int i,n,fact=1;
    printf("bir tam sayı giriniz: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
         fact*=i;  
    }
    printf("%d",fact);
    return 0;
}*/
/*Soru 4
1 ile 100 arasındaki tüm sayıları ekrana yazdırınız, ancak 3’e bölünebilen sayılar yerine 
“Fizz”, 5’e bölünebilen sayılar yerine “Buzz”, 
her ikisine de bölünebilen sayılar yerine “FizzBuzz” yazdıran bir program yazınız.*/
/*#include <stdio.h>
int main(){
    int i;

    for(i=1;i<100;i++){
        if(i%3==0){
            printf("Fizz\n");
        }
        else if(i%5==0){
            printf("Buzz\n");
        }
        else if(i%3==0&&i%5==0){
            printf("FizzBuzz\n");
        }
        else{
            printf("%d\n",i);
        }
    }
    return 0;
}*/
/*Soru 5
Klavyeden iki sayı alınız.
Bu iki sayı arasındaki tek sayıları ekrana yazdıran bir C programı yazınız.*/
/*#include <stdio.h>
int main(){
    int i,n,t;
    printf("lütfen iki sayı giriniz: ");
    scanf("%d %d",&n,&t);
    if(n>t){
        for(i=t;i<n;i++){
            if(i%2==1){
                printf("%d\n",i);
            }
        }
    }
    else{
        for(i=n;i<t;i--){
            if(i%2==1){
                printf("%d\n",i);
            }
        }
    }
    return 0;
}*/
