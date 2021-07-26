#include<stdio.h>
#include<math.h>
#include<stdlib.h>

#define pi acos(-1.0)

int main()
{
    int H,h1,h2,h3;
    double c1=0.0,c2=0.0,r=0.0,v1=0.0,v2=0.0,v3=0.0,V=0.0,X=0.0,Y=0.0,Z=0.0,m,h,l;
    scanf("%d%d%d",&H,&h1,&h2);
    if (H>h1)
    {
        m=H;
        l=h1;
    }
    else
    {
      m=h1;
      l=H;
    }
    if (m>h2)
    {
      h=m;
      if(l>h2)
      {
         m=l;
         l=h2;
      }
      else
      {
         m=h2;
      }
    }
    else
    {
        h=h2;
    }
    H=h;
    h1=m;
    h2=l;
    h3=H-h1;
    r=H/2.0;
    V=4.0*pi*pow(r,3.0)/3.0;
    c1=sqrt(h3*((2.0*r)-h3));
    c2=sqrt(h2*((2.0*r)-h2));
    v1=pi*h3*((3.0*pow(c1,2.0))+pow(h3,2.0))/6.0;
    v2=pi*h2*((3.0*pow(c2,2.0))+pow(h2,2.0))/6.0;
    v3=V-(v1+v2);
    if (v1>v2)
    {
        m=v1;
        l=v2;
    }
    else
    {
      m=v2;
      l=v1;
    }
    if (m>v3)
    {
      h=m;
      if(l>v3)
      {
         m=l;
         l=v3;
      }
      else
      {
         m=v3;
      }
    }
    else
    {
        h=v3;
    }
    Z=h;
    Y=m;
    X=l;
    printf("%.13lf %.13lf %.13lf\n",X,Y,Z);

    return 0;
}

