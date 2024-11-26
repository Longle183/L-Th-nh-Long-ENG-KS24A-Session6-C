#include<stdio.h>
#include<math.h>
int main(){
	int a, b, c;
	int delta;
	int x1, x2;
	printf("Nhap vao 3 so a, b, c: ");
	scanf("%d %d %d",&a, &b, &c);
	if(a==0){
		printf("Day khong phai la phuong trinh bac hai");
	}else{
		delta=b*b-4*a*c;
		if(delta>0){
			x1=(-b+sqrt(delta))/(2*a);
			x2=(-b-sqrt(delta))/(2*a);
			printf("Phuong trinh co hai nghiem phanbiet: \n");
			printf("x1 = %.2f\n",x1);
			printf("x2 = %.2f\n",x2);
		}else if(delta==0){
			x1=-b/(2*a);
			printf("Phuong trinh co nghiem kep: \n");
			printf("x1 = x2 = %.2f",x1);
		}else{
			printf("Phuong trinh vo nghiem");
		}
	}
	return 0;
}
