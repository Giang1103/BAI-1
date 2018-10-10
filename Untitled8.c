#include<stdio.h>
#include<stdLib.h>

float tinhTienLuongThang13(float soNamKinhNghiem, float soNamLamViec){
	float luongCung;
	float phanTramTienThuong;
	if(soNamKinhNghiem < 2){
		luongCung = 10000000;
	}
	else if(2<=soNamKinhNghiem<=5){
		luongCung = 20000000;
	}
	else if(soNamKinhNghiem>5){
		luongCung = 30000000;
	}
	if(soNamLamViec<1){
		phanTramTienThuong = 0.3;
	}
	else if(1<=soNamLamViec<2){
		phanTramTienThuong = 0.5;
	}
	else if(2<=soNamLamViec<=5){
		phanTramTienThuong = 1;
	}
	else if(soNamLamViec>5){
		phanTramTienThuong = 2;
	}
	return luongCung + luongCung * phanTramTienThuong;
}

int main ( void ){
	float soNamKinhNghiem, soNamLamViec;
	printf("Vui long nhap so nam kinh nghiem cua ban: ");
	scanf("%d",&soNamKinhNghiem);
	printf("Vui long nhap so nam lam viec cho cong ty cua ban: ");
	scanf("%d",&soNamLamViec);
	printf("Tien luong thang 13 la: %2f",tinhTienLuongThang13(soNamKinhNghiem,soNamLamViec));
	return 0;
}
