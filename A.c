#include<stdio.h>

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
     scanf("%d",&N);
     int c=odd(1,N,0);
     printf("%d\n",c);
     return 0;
}
