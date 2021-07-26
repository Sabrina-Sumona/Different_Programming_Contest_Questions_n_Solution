#include<bits/stdc++.h>
using namespace std;
int main()
{
    int T,N,M,t,a,b,c,i,j,k,l,G=0,Q,x,y;
    cin>>T;
    for(t=0;t<T;t++)
    {
        cin>>N>>M;
        int A[N],B[M];
        for(a=0;a<N;a++)
        {
            cin>>A[a];
        }
        for(b=0;b<M;b++)
        {
            cin>>B[b];
        }
        cin>>Q;
        for(c=0;c<Q;c++)
        {
            cin>>i>>j>>k>>l;
        }
        for(x=i;x<j;x++)
        {
            for(y=k;y<l;y++)
            {
                G=G+(A[x]*B[y]);
            }
        }
        cout<<"Case "<<t+1<<":"<<endl<<G<<endl;
    }
    return 0;
}

