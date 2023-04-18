#include <stdio.h>
int main(void) {
	int n, m, i, j, k;
	scanf("%d %d", &n, &m);

	int	baguni[101] = { 0 };

	for (int l=0; l<m; l++){
		scanf("%d %d %d", &i, &j, &k);
		for (i; i <= j; i++) {
			baguni[i] = k;
		}
	}
	for (int l = 1; l <= n;l++) {
		printf("%d ", baguni[l]);
	}
}