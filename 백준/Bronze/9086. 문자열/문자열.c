#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

int main(void){
    int num;
    char str[1000];
    
    scanf("%d", &num);
    
    for(int i=0; i<num; i++){ // 입력받은 값만큼 반복하는 반복문
        scanf("%s", str);
        printf("%c%c\n", str[0], str[strlen(str)-1]);
        /* input[0]으로 배열의 첫번째 값을,
           strlen(str)으로 배열의 크기를 알아내고 배열은 0부터 start
           -1로 배열의 마지막 요소를 구함 */
    }
    
    return 0;
    
}