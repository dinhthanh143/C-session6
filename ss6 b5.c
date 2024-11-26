#include<stdio.h>

int main(){
	int year,month;
	printf("moi nhap thang(1-12): ");
	scanf("%d", &month);
	printf("moi nhap nam(lon hon 0): ");
	scanf("%d", &year);
	
	if(year<0 || month<1 || month >12){
		printf("thang hoac nam khong hop le!");
	}else if(month==4 || month == 6 || month ==9 || month == 11){
			printf("thang nay co 30 ngay");
		}else if(month==2 && year%4!=0 && year%100==0 ){
			printf("thang nay co 28 ngay");
		}else if (month==1 || month == 3 || month ==5 || month == 7|| month==8|| month== 10|| month==12){
		
			printf("thang nay co 31 ngay");
		}else if(month==2 &&year%4==0 && year%100!=0 ){
		
			printf("thang nay co 29 ngay");
			}
		
	

   return 0;
}

