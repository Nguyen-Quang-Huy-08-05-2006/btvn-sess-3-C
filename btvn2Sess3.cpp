#include<stdio.h>
int main (){
	int C;
	printf("nhap nhiet do Celsius: ");
	scanf("%d", &C);
	int F = (C * 9/5) + 32;
	printf("nhiet do Fahrenheit la: %d ",F);
	return 0;
}
