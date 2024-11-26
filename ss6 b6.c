#include<stdio.h>

int main(){
int i;
int check = 0;

	for (i=1;i<101;i++){
		
	if(i%3==0 || i%5==0 || i%3==0 && i%5==0 ){
	if(i%3==0 && i%5==0 ){
		printf("FizzBuzz\n");
		fflush(stdin);
		continue;
	}else if(i%3==0){
		printf("Fizz\n");
		fflush(stdin);
		continue;
	}else if(i%5==0){
		printf("Buzz\n)");
		fflush(stdin);
		continue;
	}
	}else{
		printf("%d\n",i);
		fflush(stdin);
	}
	 
	 
	 
		
    
	
	
	
	
	
}
   return 0;
}

