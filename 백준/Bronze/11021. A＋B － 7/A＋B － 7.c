#include<stdio.h>

int main(void){
    int test;
    scanf("%d", &test);
    
    for(int i=1; i<=test; i++){
        int a,b;
        scanf("%d %d", &a, &b);
        if( 0<a && b<10) printf("Case #%d: %d\n", i, a + b);
    }
    return 0;
}