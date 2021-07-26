#include<bits/stdc++.h>

using namespace std;

int main()
{
    int T,i,x1,y1,x2,y2,M,j,x,y;
    cin>>T;
    for(i=1;i<=T;i++)
    {
        cin>>x1>>y1>>x2>>y2;
        cin>>M;
        cout<<"Case "<<i<<":"<<endl;
        for(j=1;j<=M;j++)
        {
            cin>>x>>y;
            if(x1<=x && x<=x2 && y1<=y && y<=y2)
                cout<<"Yes"<<endl;
            else
                cout<<"No"<<endl;
        }
    }
    return 0;
}



