#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    double A,B,C,D;
    cin>>s;
    cin>>A>>B;
    C=B*15/100;
    D=A+C;
    cout<<"NUMBER = "<<A<<endl;
    printf("TOTAL = R$ %.2f\n",D);
    return 0;
}
