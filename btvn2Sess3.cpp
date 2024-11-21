#include<stdio.h>
int main (){
	float C,F;
	printf("nhap nhiet do Celsius: ");
	scanf("%f", &C);
	F = (C * 9/5) + 32;
	printf("nhiet do Fahrenheit la: %.2f ",F);
	return 0;
}
