#include<stdio.h>
long int f91(long int n)
{
    int val;
    if(n<=100)
        val=91;
    else if(n>100)
        val=n-10;
    return val;
}
int main()
{
    long int i,n,ans;
    for(i=n;i>=1;i--)
    {
        scanf("%ld",&n);
        if(n==0)
            break;
        ans=f91(n);
        printf("f91(%ld) = %ld\n",n,ans);
    }
    return 0;
}
