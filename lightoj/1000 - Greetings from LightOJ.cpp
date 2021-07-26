#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,a,b,i;
    cin>>T;
    int c[T];
    for(i=0;i<T;i++)
    {
        cin>>a>>b;
        c[i]=a+b;
    }
    for(i=0;i<T;i++)
    {
        cout<<"Case "<<i+1<<": "<<c[i]<<endl;
    }
    return 0;
}
