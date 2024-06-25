#include<stdio.h>
int main()
{
	int score;
	char grade;
	
	printf("Enter Your score: ");
	scanf("%d",&score);
	
	if(score>=80 && score<=100){
	
	printf("Your Grade is A: ");
	 grade='A';
	
	}else if(score>=70 && score<=80){
		
		printf("Your Grade is B:");
		grade='B';
		
	}else if(score>=50 && score<=70){
		
	  printf("Your Grade is C:");
	  grade='C';
	  
	}else if (score>=40 && score<=50){
		
		printf("Your Grade is D:");
		grade='D';
		
	}else{
		printf("Your Grade is F :");
		grade='F';
	}
	
	switch(grade){
		
		case 'A':
		printf("Excellent work !");
		
		break;
		
		case 'B':
		printf("Well done");
		
		break;
		
		case 'C':
		printf("Good job");
		
		break;
		
		case 'D':
		printf("Your passed, but you could do better");
		
		break;
		
		case 'F':
			
			printf("Sorry,kal Aana...");
			
			break;
	}
	
	if(score>=40){
		
		printf(":-Congratulation! You are eligible for the next level.");
		
	}else{
		printf(":-Please try agin next time. ");
	}
	
}