#include <bits/stdc++.h>
using namespace std;

void xuly(int s, int t)
{
    int a[20001];

    fill_n(a,20001,INT_MAX);
    a[s]=0;

    queue<int> q; q.push(s);

    while(a[t]==INT_MAX)
    {
        int f=q.front(); q.pop();

        if(f-1>0 && a[f-1]==INT_MAX)
        {
            a[f-1]=min(a[f]+1,a[f-1]);
            q.push(f-1);
        }

        if(f*2<20000 && a[f*2]==INT_MAX)
        {
            a[f*2] = min(a[f] + 1,a[f*2]);
            q.push(f*2);
        }
    }

    cout<<a[t]<<endl;
}

int main() {
	int t;
	int n;
	cin >> t;
	while (t--) {
        int s,t;
        cin>>s>>t;
        xuly(s,t);
	}
}
