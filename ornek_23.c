//1 ile 100 arasindaki tek sayilarin adedini ekrana yazdirin

#include<stdio.h>

int main(){
    int i,n=0;
    for(i=1;i<=100;i++){
        if(i%2==1){
            printf("%d\n",i);
            n++;
        }
    }
    printf("tek sayilarin adedi : %d",n);
    return 0;
}
