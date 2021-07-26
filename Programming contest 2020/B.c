#include <stdio.h>

int main()
{
  	int a,b,c, i, avg,t;
	scanf("%d", &t);

	for(i=1;i<=t;i++)
        	{
           		scanf("%d%d%d",&a,&b,&c);
            		if((b>a && b<c)||(b<a && b>c))
           		avg=b;
            		else if((c>a && c<b)||(c<a && c>b))
                	avg=c;
            		else
                avg=a;
            printf("Case %d: %d\n",i,avg);
        }

}