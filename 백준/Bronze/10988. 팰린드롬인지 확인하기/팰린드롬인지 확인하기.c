#define _CRT_SECURE_NO_WARNINGS        
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main()
{
	char array[101];
	int a,i;
	bool b=true;
	scanf("%s", &array);
	a = strlen(array);
	for (i = 0; i < a/2; i++)
	{
		if (array[i] != array[a - i-1])
		{
			b = false;
		}
		
	}
	if (b == true)
	{
		printf("%d", 1);
	}
	else
	{
		printf("%d", 0);
	}

	
}