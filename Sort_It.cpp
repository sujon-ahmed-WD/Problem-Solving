#include <bits/stdc++.h>
using namespace std;
class Student
{
public:
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
    // int total_marks;
};
bool cmp(Student l,Student r)
{
  
     if((l.math_marks+l.eng_marks)==(r.math_marks+r.eng_marks))
    {
         return l.id<r.id;
    }
    else  
    {
        return (l.math_marks+l.eng_marks)>(r.math_marks+r.eng_marks);
    }


}
int main()
{
    int n;
    cin >> n;
    Student a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> a[i].nm >> a[i].cls >> a[i].s >> a[i].id >> a[i].math_marks >> a[i].eng_marks;
        // >>a[i]. math_marks+a[i]. eng_marks;
    }
    sort(a, a + n, cmp);
    for (int i = 0; i < n; i++)
    {
        cout << a[i].nm << " " << a[i].cls << " " << a[i].s << " " << a[i].id << " " << a[i].math_marks << " " << a[i].eng_marks << endl;
    }
    return 0;
}

/*
Bijoy 7 E 29 68 99
Asif 10 C 27 55 60
Joy 9 G 28 66 45
Shojoy 9 E 26 40 50
Munna 8 D 25 50 30
*/