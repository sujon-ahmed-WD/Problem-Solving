#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;

    getline(cin, s);

    stringstream ss(s);

    string word;
    int cnt=0;
    while (ss >> word)
    {
        if(word=="Jessica")
        {
            cnt++;
            break;
            
        }
    
    }
    if(cnt==1)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }

    return 0;
}