# include <iostream>
# include <cmath>
# include <cstdio>
# include <functional>
# include <queue>
using namespace std;
int main()
{
    int n, m, tmp, sum, sum2, a;
    while(~scanf("%d%d",&n,&m))
    {
        sum = sum2 = 0;
        priority_queue<int>Q;//大根堆
        priority_queue<int, vector<int>, greater<int> >P;
        while(m--)
        {
            scanf("%d",&tmp);
            Q.push(tmp);
            P.push(tmp);
        }
        for(int i=0; i<n; ++i)
        {
            a = Q.top();
            sum += a;
            Q.pop();
            if(--a)
                Q.push(a);
        }
        for(int i=0; i<n; ++i)
        {
            a = P.top();
            sum2 += a;
            P.pop();
            if(--a)
                P.push(a);
        }
        printf("%d %d\n",sum, sum2);
    }
    return 0;
}
