#include <stdio.h>

int c = 0;

int main() {
int i = 1;
	while(i <= 500) {
		if((i % 2 != 0) && (i % 3 == 0)) {
			c += i;
			i = i + 2;
		}
		else {
			i++;
		}
	}
	printf("%d", c);
	return 0;
}
