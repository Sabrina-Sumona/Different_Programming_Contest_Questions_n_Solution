#include <stdio.h>

int main ()
{
    int n, i, j, sum1 = 0, sum2 = 0, sum3 = 0;
    scanf ("%d", &n);
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
	    {
	        scanf ("%d", &a[i][j]);
	        if(n==0)
                break;
	    }
    }

    for (int i = n; i > ((n+1)/2); i--)
    {
        for (int j = 0; j < n; j++)
	    {
	        if (i <(n-1) || i == 0)
	            sum1 = sum1 + a[i][j];
	        else
	            sum2= sum2+ a[i][0]+a[i][n-1];
	        sum3 = sum1+sum2;
	    }
	    printf ("Case %d: %d\n", sum3);
    }

}