#include <stdio.h>


int fibonacci() {
	static int a = 0, b = 1, temp;
	temp = a;
	a = b;
	b = temp + b;
	return temp;
}

int main() {

	for (int i = 0; i < 10; ++i) {
		printf("%d\n", fibonacci());
	}
	return 0;
}

