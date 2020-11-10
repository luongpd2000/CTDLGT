#include <bits/stdc++.h>
using namespace std;

#define ll long long
void precal(int n)
{
    queue<string> q;
    vector<string> kq;
    kq.reserve(10000);
    q.push("44");
    q.push("55");

    while(kq.size()<n){
        string f=q.front();
        q.pop();

        kq.push_back(f);
        q.push("4"+f+"4");
        q.push("5"+f+"5");
    }

    sort(kq.begin(), kq.end(), [](string &s1, string &s2)
         {
             if(s1.size()==s2.size())
                return s1 < s2;
             return s1.size() < s2.size();
         });
}

main()
{
    int T;
    cin>>T;
    cin.ignore();

    while(T--)
    {
        int n;
        cin>>n;
        precal(n);
    }
}
