#include<stdio.h>
int main()
{
    char ch = 'a';
    printf("Alphabets from a - z are:");

    do{
        printf("%c\n", ch);
        ch+=4;
        
    }
	
    while(ch<='z');
    
}
    

    