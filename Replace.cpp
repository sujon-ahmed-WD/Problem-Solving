#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    while (t--)

    {
        string s, x;

        cin >> s >> x;

       for(int i=0; i<s.size();i++)
        {
            int pos = s.find(x);

            if (pos != -1)
            {
                s.replace(pos, x.size(), "#");
            }

        }
        cout << s << endl;
    }

    return 0;
}