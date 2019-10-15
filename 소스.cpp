#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
	int h[6] = { 0, };
	int i, n;
	srand(time(NULL));
	for (i = 0; i < 6000; i++) {
		n = rand() % 6;
		h[n]++;
	}
	for (i = 0; i < 6; i++) {
		printf("[%d] %d\n", i + 1, h[i]);
	}
}