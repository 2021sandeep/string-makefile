#include"header.h"
#include<stdio.h>

void copy(char*, char*);

int main()
{
    char source[100], target[100];    
    printf("Enter source string\n");    
    scanf("%s",source);    
    copy(target, source);    
    printf("Target string is %s\n", target); 
    printf("%ld",strlen(target));   
    return 0;
}
