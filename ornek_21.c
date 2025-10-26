// 1 ile 9 arasindaki sayilarin carpimini hesaplayan c kodunu yaziniz

#include <stdio.h>
int main (){
    int i,carp=1;
    for(i=1;i<=9;i++){
        carp = carp*i;
    }
    printf("sayilarin carpimi: %d",carp);
    return 0;
}
