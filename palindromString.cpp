#include <bits/stdc++.h>
using namespace std;

string isPalindrome(string S)
{
    string P = S;
    reverse(P.begin(), P.end());
    if (S == P)
    {
        return "Yes";
    }
    else
    {
        return "No";
    }
}

int main()
{
    string S;
    cout<<"Enter your String : ";
    getline(cin,S);
    cout << isPalindrome(S);
    return 0;
}
