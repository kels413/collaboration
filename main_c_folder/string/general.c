#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    printf("Range of int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Range of unsigned int: 0 to %u\n", UINT_MAX);
	 printf("Range of float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Range of double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Range of long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Range of unsigned long: 0 to %lu\n", ULONG_MAX);
    printf("Range of long long: %lld to %lld\n", LLONG_MIN, LLONG_MAX);
    printf("Range of unsigned long long: 0 to %llu\n", ULLONG_MAX);
	printf("sizeof the pointer is %zu\n", sizeof(int*));
	printf("sizeof the pointer is %zu\n", sizeof(char*));
	printf("sizeof the pointer is %zu\n", sizeof(float*));
	printf("sizeof the int in byte is %zu\n", sizeof(int));
	printf("sizeof the char in byte is %zu\n", sizeof(char));
	printf("sizeof the float in byte is %zu\n", sizeof(float));




    return 0;
}
