#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,i,j,k,l,a=0,b=0,c=0;
    cin>>n>>m;
    for(i=1;i<=(n*m);i++)
    {
        if(__gcd(n,i)==1 && __gcd(m,i)!=1)
        {
            a++;
        }
        if(__gcd(m,i)==1 && __gcd(n,i)!=1)
        {
            b++;
        }
        if(__gcd(n,i)==1 && __gcd(m,i)==1)
        {
            c++;
        }
    }
    cout<<a<<' '<<b<<' '<<c;
    return 0;
}


