#include<stdio.h>

int main(void){
    char num[102];
    int size;
    scanf("%s", num);
    
    for(int i=0; i<num; i++)
        if(num[i] == '\0')
            break;
    
   size = strlen(num);
   
    printf("%d\n", size);
    
}