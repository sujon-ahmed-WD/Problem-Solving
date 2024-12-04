#include <bits/stdc++.h>
using namespace std;

class Student
{
public:
    string nm;
    int cls;
    char s;
    long long id;
    int math_mark;
    int eng_mark;
};
bool cmp(Student l, Student r)
{
    if(l.eng_mark==r.eng_mark)
    {
        if(l.math_mark==r.math_mark)
        {
            return l.id<r.id;
        }
        else 
        {
            return l.math_mark>r.math_mark;
        }
    }
    else
    {
        return l.eng_mark>r.eng_mark;
    }
}
int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_mark >> a[i].eng_mark;
    }
    sort(a,a+n,cmp);
    for (int i = 0; i < n; i++)
    {
          {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_mark << " " << a[i].eng_mark << endl;
    }
    }

    return 0;
}