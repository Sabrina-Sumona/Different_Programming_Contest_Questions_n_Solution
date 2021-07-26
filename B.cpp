#include<bits/stdc++.h>

using namespace std;

#define pi acos(-1.0)

int main()
{
    double H,h1,h2,h3=0.0,a=0.0,b=0.0,c=0.0,c1=0.0,c2=0.0,r=0.0,v1=0.0,v2=0.0,v3=0.0,V=0.0,X=0.0,Y=0.0,Z=0.0;
    cin>>H>>h1>>h2;
    double arr[]={H,h1,h2};
    sort(arr,arr+3);
    h3=arr[0]-arr[1];
    r=arr[0]/2.0;
    V=4.0*pi*pow(r,3.0)/3.0;
    c1=sqrt(h3*((2.0*r)-h3));
    c2=sqrt(arr[2]*((2.0*r)-arr[2]));
    v1=(pi/6.0)*h3*((3.0*pow(c1,2.0))+pow(h3,2.0));
    v2=(pi/6.0)*arr[2]*((3.0*pow(c2,2.0))+pow(arr[2],2.0));
    v3=V-(v1+v2);
    X=v1;
    Y=v3;
    Z=v2;
    printf("%.10lf %.10lf %.10lf\n",X,Y,Z);

    return 0;
}


