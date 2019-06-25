#include <stdio.h>
#include <math.h>
int main()
{
	int a, t, a2, t2, at;
	float m;
	a=4;
	t=5;
	a2=pow(a,2);
	t2=pow(t,2);
	at=a2+t2;
	
	m=sqrt(at);
	
	printf("Out= %f", m);
	return 0;
}
