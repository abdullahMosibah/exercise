#include <stdio.h>

int main(){

	int left = 8 << 1;	
	int right = 8 >>  1;	
	
	printf(" left = %d, right %d\n", left, right );
	printf(" %d\n", 2 & 2 );

	int a = 5, b = 10;
	int z = ( a < b) ? a:b;
	printf("%d", z);
return 0;
}
