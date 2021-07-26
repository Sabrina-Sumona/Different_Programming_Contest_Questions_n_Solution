#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int main () 
{
  int N = 0;
  scanf ("%d", &N);
  if (1 <= N <= 10)
    {
        int index = 0, m = N, i = 0, j = 0;
        long long max = 0, sum = 0, a[10], b[11] ;
        for (i = 0; i < N; i++)
	    {
	        scanf ("%lld", &a[i]);
	    }
      
        b[0] = 0;
        for (j = 0; j < m; j++)
	    {
	        for (i = 0; i < N; i++)
	        {
	                if (N>1)
	                {
	                    if (i - 1 < 0)
                        {
                            b[i + 1] = a[i + 1];
                        }
                        else if (i + 1 == N)
	                    {
		                    b[i + 1] = a[i - 1];
	                    }
	                    else 
	                    {
	                        b[i + 1] = a[i - 1] * a[i + 1];
	                    }
                        if (b[i + 1] > b[i])
                        {
                            max = b[i + 1];
		                    index = i;
                        }
	                }
	                else
	                {
	                    max = b[0];
	                    index = i;
	                }
	           
            }
            sum = sum + max;
            for (int i = index; i < N - 1; i++)
	        {
                a[i] = a[i + 1];
            } 
            N--;
        } 
        sum = sum % 100005;
        printf ("%lld", sum);
    }
  
 
return 0;

}