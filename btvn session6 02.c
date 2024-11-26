#include<stdio.h>
int main(){
	int num1, num2, num3, num4, num5;
	int tongChan=0, tongLe=0;
	printf("Nhap vao 5 so nguyen: ");
	scanf("%d %d %d %d %d",&num1, &num2, &num3, &num4, &num5);
	if(num1%2==0){
		printf("So %d la so chan\n",num1);
		tongChan++;
	}else{
		printf("So %d la so le\n",num1);
		tongLe++;
	}
	if(num2%2==0){
		printf("So %d la so chan\n",num2);
		tongChan++;
	}else{
		printf("So %d la so le\n",num2);
		tongLe++;
	}
	if(num3%2==0){
		printf("So %d la so chan\n",num3);
		tongChan++;
	}else{
		printf("So %d la so le\n",num3);
		tongLe++;
	}
	if(num4%2==0){
		printf("So %d la so chan\n",num4);
		tongChan++;
	}else{
		printf("So %d la so le\n",num4);
		tongLe++;
	}
	if(num5%2==0){
		printf("So %d la so chan\n",num5);
		tongChan++;
	}else{
		printf("So %d la so le\n",num5);
		tongLe++;
	}
	printf("Co %d so chan\n",tongChan);
	printf("Co %d so le\n",tongLe);
	return 0;
}
