#include<stdio.h>
int main ()
{
   int n;
   printf("Enter a value :- ");
   scanf("%d",&n);
   
   for(int i=1; i<=n; i++){
   	
   	for (int j=1; j<=i; j++){
   		
   		printf("%d",j);
	   }
	   for (int j=2*(n-i); j > 0; j-- ){
	   
	   printf(" ");
}
   	for (int j = i; j >= 1; j--){
   		printf("%d",j);
	   }  	
	   printf("\n");
   }
}