#include<stdio.h>
int main(){
for(int row=5 ; row>=1 ; row--){
    for(int j=1;j<=5+row-6;j++){
        printf("  ");
    }

for(int col=row ; col<=5 ; col++){
printf("%d ",col);

}

printf("\n");
}




}