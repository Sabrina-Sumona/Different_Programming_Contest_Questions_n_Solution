#include<bits/stdc++.h>

using namespace std;

int main()
{
    int a[2],b[2],i;
    double c[2],d=0.0;
    for(i=0;i<2;i++)
    {
        cin>>a[i]>>b[i]>>c[i];
        d=d+b[i]*c[i];
    }
    printf("VALOR A PAGAR: R$ %.2f\n",d);
    return 0;
}

