#include <stdio.h>
#include <math.h>
int main()
{
	int d;
	float phi, r, v;
	d=14;
	r=0.5*d;
	phi=3.14;
	
	
	v=1.33*phi*pow(r,3);
	
	printf("Volume= %f", v);
	return 0;
}
