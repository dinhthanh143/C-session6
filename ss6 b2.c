#include<stdio.h>

int main(){
	int chan=0;
	int le=0;
	int a,b,c,d,e;
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
	
	if(a%2==0){
		chan += 1;
		
	}else{
		le +=1;
	}
	if(b%2==0){
		chan += 1;
		
	}else{
		le +=1;
	}
	if(c%2==0){
		chan += 1;
		
	}else{
		le +=1;
	}
	if(d%2==0){
		chan += 1;
		
	}else{
		le +=1;
	}
	if(e%2==0){
		chan += 1;
		
	}else{
		le +=1;
	}
	
	printf("co %d so chan va %d so le",chan,le);
	
	
	
	
	
	

   return 0;
}

