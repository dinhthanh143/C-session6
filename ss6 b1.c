#include<stdio.h>

int main(){
	int a,b,c,d,e,sum;
	printf("moi nhap so nguyen thu nhat: ");
	scanf("%d",&a);
		printf("moi nhap so nguyen thu hai: ");
	scanf("%d",&b);
		printf("moi nhap so nguyen thu ba: ");
	scanf("%d",&c);
		printf("moi nhap so nguyen thu tu: ");
	scanf("%d",&d);
		printf("moi nhap so nguyen thu nam: ");
	scanf("%d",&e);
	
	if(a%2!=0){
		sum=sum+a;
		
	}
	if(b%2!=0){
		sum=sum+b;
		
	}
	if(c%2!=0){
		sum=sum+c;
		
	}
	if(d%2!=0){
		sum=sum+d;
		
	}
	if(e%2!=0){
		sum=sum+e;
		
	}
	printf("tong cac so le la: %d",sum);
	
	
	

   return 0;
}

