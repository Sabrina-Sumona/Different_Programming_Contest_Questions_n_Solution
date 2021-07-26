#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,i,a,b,c;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>a>>b;
        if(a<b)
        {
            c=b*4+3*3+5*2;
            cout<<"Case "<<i<<": "<<c<<endl;
        }
        else
        {
            c=((2*a)-b)*4+3*3+5*2;
            cout<<"Case "<<i<<": "<<c<<endl;
        }
    }
    return 0;
}


