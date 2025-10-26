// 1 ile 100 arasindaki sayilarin toplamini ,ortalamasini hesaplayan c kodunu yaziniz
#include <stdio.h>

int main(){
    int i,sum=0;
    double ort=0;
    for(i=1;i<=100;i++){
        sum=sum+i;
    }
    ort=(double)sum/100;
    printf("toplami : %d\n",sum);
    printf("ortalamasi: %lf",ort);
    
}
