#include<stdio.h>
int main(){
	int a;

	printf("nhap so nguyen co 4 chu so :");
	scanf("%4d", &a);
	
	 int tong = (a / 1000) + (a%1000 / 100) + (a%100 / 10) + (a%10);
	printf("tong cac chu so la %d \n", tong);
	
	return 0;
	
	
}
