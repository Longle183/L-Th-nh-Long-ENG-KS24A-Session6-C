#include<stdio.h>
int main(){
	int password;
	int pass=1803;
	printf("Nhap mat khau: ");
	scanf("%d",&password);
	if(password==pass){
		printf("Mat khau dung");
	}else{
		printf("Mat khau sai");
	}
	return 0;
}
