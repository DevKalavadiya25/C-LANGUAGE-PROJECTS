#include<stdio.h>
int main(){
for(int row=1 ; row<=5 ; row++){

for(int col=1 ; col<=5 ; col++){

if(col==2 || row==1 || col==5 || row==5 || row==3){
printf("%d",row);
}else{
   printf("  "); 
}

}

printf("\n");
}




}