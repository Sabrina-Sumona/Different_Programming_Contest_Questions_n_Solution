#include<bits/stdc++.h>

using namespace std;

int odd(int l, int h,int countOdd)
{
    if(l>h)
        return countOdd;
    countOdd++;
    odd(l+2, h,countOdd++);
}

int main()
{
     int N;
     cin>>N;
     int c=odd(1,N,0);
     cout<<c<<endl;
     return 0;
}
