#include<stdio.h>
int main(){
	int num,num1;
	printf("Enter number:");
	scanf("%d",&num);
	int fact=1;  // initailize fact
	num1=num; //to store the number
	if(num==0){
		fact==1;
	}
	else{
		while(num!=1){              //continue loop till number becomes equal to 1
		fact=fact*num;
		num--;
	}
	}
	
	printf("Factorial of %d is %d",num1,fact);
	return 0;
}
