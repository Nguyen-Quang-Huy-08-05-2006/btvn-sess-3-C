#include<stdio.h>
int main(){
	float r;
	float pi = 3.14;
	printf("nhap ban kinh duong tron: ");
	scanf("%.2f", &r);
	
	float C = 2 * pi * r;
	printf("chu vi la : %.2f \n", C);
	
	float S = (C * C) / (4 * pi);
	printf("dien tich la : %.2f \n", S);
	
	return 0; 
}
