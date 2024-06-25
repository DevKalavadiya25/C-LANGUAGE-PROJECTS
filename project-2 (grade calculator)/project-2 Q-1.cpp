#include<stdio.h>
int main()
{
	int score;
	
	printf("Enter your score:- ");
	scanf("%d",&score);
	if(score>=80 && score<=100){
	
	printf("Your Grade is A. ");
	
	}else if(score>=70 && score<=80){
		
		printf("Your Grade is B.");
	}else if(score>=50 && score<=70){
		
	  printf("Your Grade is C.");	
	}else if (score>=40 && score<=50){
		
		printf("Your Grade is D.");
	}else{
		printf("Your Grade is F.");
	}
	
}