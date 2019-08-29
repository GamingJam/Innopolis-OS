#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
	int i;
	float f;
	double d;

	i = INT_MAX;
	f = FLT_MAX;
	d = DBL_MAX;

    printf("size of int : %lu\n",sizeof(i));
    printf("size of float : %lu\n",sizeof(f));
    printf("size of double : %lu\n",sizeof(d));
    
    printf("Max int value : %d\n",i);
    printf("Max float value : %f\n",f);
    printf("Max double value : %f\n",d);

	return 0;
}