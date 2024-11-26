#include<stdio.h>

int main(){
 int password=1234;
 int guess;
 
     while(guess != password){
     	
     	printf("moi nhap mat khau: ");
        scanf("%d", &guess);
	     if (guess == password){
		 printf("ban da doan dung!");
		 }else{printf("ban da doan sai!\n");
		 }
	 
	 
	 
	 }
 
 
 
 
 
   return 0;
}

