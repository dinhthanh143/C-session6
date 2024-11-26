#include<stdio.h>
#include<math.h>

int main(){
	int a,b,c;
	int i=0;
	float x1,x2,delta;
	printf("moi nhap so thu nhat: ");
	scanf("%d",&a);
	printf("moi nhap so thu hai: ");
	scanf("%d",&b);
	printf("moi nhap so thu ba: ");
	scanf("%d",&c);

	if (a==0){
		printf("so thu nhat phai lon hon 0!");
	}else{
		delta = b*b-4*a*c;
		
		if(delta<0){
			printf("phuong trinh vo nghiem!");
			
		}else if(delta==0){
			x2=-b/2*a;
			x1=x2;
			printf("phuong trinh co nghiem kep:\n x1=%.2f\n x2=%.2f ", x2,x2);
		}else if(delta>0){
			x1= (-b+ sqrt(delta))/2*a;
			
			x2=(-b- sqrt(delta))/2*a;
			
			printf("phuong trinh co 2 nghiem phan biet:\n x1=%.2f\n x2=%.2f",x1,x2);
		
			
		}
	}
	
	


	

   return 0;
}

