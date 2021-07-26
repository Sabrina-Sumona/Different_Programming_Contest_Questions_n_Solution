#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,n,a,b,i;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>n;
        a=n/2;
        b=n-a;
        cout<<a<<" "<<b<<endl;
    }
    return 0;
}

