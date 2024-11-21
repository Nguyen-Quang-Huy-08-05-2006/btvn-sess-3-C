#include<stdio.h>
int main(){
	float diemToan;
	float diemVan;
	float diemtAnh;
	
	printf("nhap diem mon toan :");
	scanf("%f", &diemToan);
	
	printf("nhap diem van : ");
	scanf("%f", &diemVan);
	
	printf("nhap diem tieng Anh : ");
	scanf("%f", &diemtAnh);
	
	int tong = diemToan + diemVan + diemtAnh;
	
	float trungBinh = (float)tong / 3;
	
	printf("trung binh 3 mon la %.2f \n", trungBinh);
	
	return 0;
}
