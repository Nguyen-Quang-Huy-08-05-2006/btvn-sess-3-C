#include<stdio.h>
int main(){
	int a;
	int h;
	
	printf("nhap do dai canh tam giac : ");
	scanf("%d", &a);
	
	printf("nhap chieu cao tam giac : ");
	scanf("%d", &h);
	
	int S = (a * h) / 2;
	printf("dien tich tam giac la %d \n", S);
	
	return 0;	
	
}
