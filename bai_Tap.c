#include<stdio.h>
#include<stdLib.h>

double tinhNuaChuViTamGiac(double a, double b, double c){
	return(double)(a + b + c)/2;
}

int main( void ){
	double canh1,canh2,canh3;
	printf("Vui long nhap do dai 3 canh cua tam giac\n");
	printf("Canh thu nhat la: ");
	scanf("%lf",&canh1);
	printf("Canh thu hai la: ");
	scanf("%lf",&canh2);
	printf("Canh thu ba la: ");
	scanf("%lf",&canh3);
	if(canh1<=0 || canh2<=0 || canh3<=0){
		printf("Do dai mot canh khong the nho hon hoac bang 0\n");
	}else{
		if(canh1 + canh2 <= canh3 || canh1 + canh3 <= canh2 || canh2 + canh3 <= canh1){
			printf("ERROR\n");
			printf("Tong hai canh trong tam giac luon lon hon canh con lai\n");
		}else{
			printf("Nua chu vi cua tam giac la: %lf",tinhNuaChuViTamGiac(canh1,canh2,canh3));
		}
	}
	return 0;
}


