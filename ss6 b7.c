#include<stdio.h>

int main(){
	int number;
	printf("moi nhap so: ");
	scanf("%d", &number);
	int i;
	for (i=1;i<=number;i++){
		if (number%i==0){
		printf("uoc cua %d la %d\n",number,i);
		}
		
		
	}
	
	
	
	

   return 0;
}

