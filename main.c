#include <stdio.h>
#include "algo.h"

int main() {
	int x = 5;
	int y = 10;

	printf("%d + %d = %d\n", x, y, add32(x, y));
	return 0;
}
