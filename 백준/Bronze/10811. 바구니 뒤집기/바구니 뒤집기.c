#include <stdio.h>

int main() {
    int n, m, a, b;
    int arr[101] = {0, }, rev[101] = {0, };

    scanf("%d %d\n", &n, &m);

    for(int i = 1; i <= n; i++)
    {
        arr[i] = i;
        rev[i] = i;
    }

    for(int i = 0; i < m; i++)
    {
        scanf("%d %d", &a, &b);

        if(a != b)
        {
            for(int j = 0; j <= (b - a); j++)
            {
                arr[a + j] = rev[b - j];
            }
        }

        memcpy(&rev[0], &arr[0], 101*4);
    }

    for(int i = 1; i <= n; i++)
    {
        printf("%d ", arr[i]);
    }
}