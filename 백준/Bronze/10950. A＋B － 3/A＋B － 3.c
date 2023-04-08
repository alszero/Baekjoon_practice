#include<stdio.h>

int main(void){
    int a,b, test;
    scanf("%d", &test);
    
    for(int i=0; i<test; i++){
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }
    
    return 0;
}