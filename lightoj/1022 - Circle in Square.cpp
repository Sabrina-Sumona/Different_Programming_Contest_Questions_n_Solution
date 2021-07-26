#include<bits/stdc++.h>
using namespace std;

#define pi acos(-1.0)

int main()
{
    int T,i;
    cin>>T;
    double l,r,circle_area,square_area,blue_part_area,c[T];
    for(i=0;i<T;i++)
    {
        cin>>r;
        l=2*r;
        circle_area=pi*r*r;
        square_area=l*l;
        blue_part_area=square_area-circle_area;
        c[i]=blue_part_area+(pow(10,-9));
    }
    for(i=0;i<T;i++)
    {
        printf("Case %d: %.2lf\n",i+1,c[i]);
    }
    return 0;
}
