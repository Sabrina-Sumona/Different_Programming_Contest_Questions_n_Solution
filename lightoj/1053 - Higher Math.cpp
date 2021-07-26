#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,i,a,b,c,n[3];
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>a>>b>>c;
        if(a>=1 && c<=40000 )
        {
            int n[3]={a,b,c};
            sort(n,n+3);
            if(n[2]==sqrt(pow(n[0],2)+pow(n[1],2)))
                cout<<"Case "<<i<<": yes"<<endl;
            else
                cout<<"Case "<<i<<": no"<<endl;
        }
    }
    return 0;
}


