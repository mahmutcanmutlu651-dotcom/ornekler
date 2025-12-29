#include<stdio.h>
main()
{
	int i;
	char A[] = {'m', 'a', 'h', 'm', 'u', 't', '\0','c','a','n','\0'};
	
	for(i = 0; i < 11; i++)
		printf("A[%d]: %c\n", i, A[i]);
}
//Klavyeden girilen bir degeri 5 elemanlı 
//A dizisine atayan C kodunu yazın

#include<stdio.h>
#define SIZE 5
main()
{
	int A[5], n, i, k;
	
	printf("Lutfen bir sayi girin: ");
	scanf("%d", &n);
	
	for(i = 0; i < SIZE; i++)
		A[i] = n;
		
	for(i = 0; i < SIZE; i++)
		printf("A[%d]: %d\n", i, A[i]);
	
}
//100 elamanlı A dizisinin elemanalarına 2'den başlayarak
//cift sayilari atayan C kodunu yazınız 

#include<stdio.h>
#define SIZE 100

main()
{
	int i, A[100];
	
	for(i = 0; i < SIZE; i++)
		A[i] = (i + 1) * 2;
		
	for(i = 0; i < SIZE; i++)
		printf("A[%d]: %d\n", i, A[i]);	
}
#include<stdio.h>
#define SIZE 12//dizinin kaç elamanlı olduğunu yazıyoruz, SIZE içinde saklayabiliriz
main()
{
	
	//int n[5] = {32, 27, 64, 18, 95, 14}; //Array Index out of exception - dizi taşması
	
	int i, c[] = {-45, 6, 0, 72, 1543, -89, 0, 62, -3, 1, 6453, 78};
	int z[100];
	
	for(i = 0; i < SIZE; i++)
		printf("c[%d]: %d\n", i, c[i]);	
}
