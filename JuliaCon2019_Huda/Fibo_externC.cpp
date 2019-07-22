#include <stdint.h>

extern "C"
{
int64_t Fibonacci_I(int64_t n)
{
	int x = 0;
	int y = 1;
	int t;
	for(int i=1; i<n; ++i)
	{
	    t = x;
	    x = y;
	    y = t+y;
	}
	return y;
}
};