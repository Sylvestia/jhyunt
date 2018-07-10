#include "sum.h"

int sum(int n)
{
	int i, sum_r=0;
	for(i=0; i<n; i++)
	{
		sum_r+=i;
	}
	return sum_r;
}


