#include<stdio.h>

int main(){
int i=1;
int number;
int count=1;
printf("moi nhap so so nguyen to muon in: ");
scanf("%d",&number);

  while(i<=number){
	
	count++;
	if(count==2 || count == 3 || count == 5 || count == 7|| count % 2 != 0 && count % 3 != 0 && count % 5 != 0 && count % 7 != 0 ){
		printf("%d ",count);
		i++;
	}
	
	
}
	
	
	





   return 0;
}

