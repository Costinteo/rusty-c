#include <stdio.h>
#include "algo.h"

void test_add32() {
	int x = 5;
	int y = 10;

	printf("%d + %d = %d\n", x, y, add32(x, y));
}

void test_print_int_arr() {
	int arr[] = { 3, 1, 3, 3, 7 };
	int n = sizeof(arr) / sizeof(arr[0]);

	print_int_arr(arr, n);
}

int main() {
	test_add32();
	test_print_int_arr();
	return 0;
}
