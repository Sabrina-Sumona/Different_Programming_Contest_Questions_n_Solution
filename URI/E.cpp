#include<bits/stdc++.h>
using namespace std;


string sum(string s1, string s2)
{

    if (s1.length() > s2.length())
        swap(s1, s2);


    string st = "";


    int n1 = s1.length(), n2 = s2.length();


    reverse(s1.begin(), s1.end());
    reverse(s2.begin(), s2.end());

    int carry = 0;
    for (int i=0; i<n1; i++)
    {
        int sum = ((s1[i]-'0')+(s2[i]-'0')+carry);
        st.push_back(sum%10 + '0');

        carry = sum/10;
    }


    for (int i=n1; i<n2; i++)
    {
        int sum = ((s2[i]-'0')+carry);
        st.push_back(sum%10 + '0');
        carry = sum/10;
    }


    if (carry)
        st.push_back(carry+'0');


    reverse(st.begin(), st.end());

    return st;
}

int main()
{
    string s1,s2;
    cin>>s1;
    cin>>s2;
    cout << sum(s1, s2);
    return 0;
}
