#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
	char* endPoint;	int fbMax;
	if (fbMax = strtol(argv[1], &endPoint, 10)) {;}	else printf("arg fail\n");
	for (size_t i = 1; i < fbMax + 1; i++) {
		if (((i % 3) == 0) && ((i % 5) == 0)) {printf("FizzBuzz\n"); goto jump;}
		if ((i % 3) == 0) printf("Fizz\n");
		else if ((i % 5) == 0) {printf("Buzz\n"); goto jump;}
		else printf("%ld\n", i);
		if (1 == 2) jump: continue;
	} return 0;
}
