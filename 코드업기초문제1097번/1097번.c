#include<stdio.h>
#include<stdlib.h>

int prime(int n)

{
	int i, num = 0;

	for (i = 1; i <= n; i++) {
		if (n%i == 0) { num++; }
	}

	if (num == 2) { return 1; }

	else { return -1; }

 }
 //소수인지 판단하는 것

int main() {

	int i,n, m;

	scanf("%d", &n);

	for (i = 2; i < n; i++) {
		if (prime(i) == 1 && n%i == 0) {
			m = n / i;
			if (prime(m) == 1) {
				printf("%d %d", i, m);
				break;
			}
		}
		else {
			continue;
		}
	}

	if (i == n || n == 1) {
		printf("wrong number");
	}

	system("PAUSE");
	return 0;
}
