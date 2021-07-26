#include<bits/stdc++.h>
#include <cstdio>

using namespace std;
int main()
{
    int T,N,m,i,j,sum=0;
    cin>>T;
    int c[T];
    for(i=1;i<=T;i++)
    {
        char gets();
        cin>>N;
        for(j=0;j<N;j++)
        {
            cin>>m;
            if(m>0)
                sum=sum+m;
        }
        c[i]=sum;
        sum=0;
    }
    for(i=1;i<=T;i++)
    {
        cout<<"Case "<<i<<": "<<c[i]<<endl;
    }
    return 0;
}


