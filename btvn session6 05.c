#include<stdio.h>
int main(){
	int day, month, year;
	printf("Moi ban nhap thang: ");
	scanf("%d",&month);
	printf("Moi ban nhap nam: ");
	scanf("%d",&year);
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			day=31;
			break;
		case 2: case 4: case 6: case 9: case 11:
			day=30;
			break;
	}
	printf("Thang %d nam %d co %d ngay",month, year, day);
	return 0;
}
