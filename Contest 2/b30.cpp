#include <iostream>
#include <vector>
#include <cmath>
#include <string>

using namespace std;

int N,P,S;
vector<int> pn;
int x[1000];
vector<string> kq;

bool ngto(int n)
{
    if(n!= 5 && n%5==0)
        return false;

    int sn=sqrt(n);

    for(int i=2;i<=sn;i++)
        if(n%i==0)
            return false;
    return true;
}

void init()
{
    if(P==2) P++;
    else P+=2;
    pn.push_back(0);
    for(int i=P;i<S;i+=2)
    {
        if(ngto(i)) pn.push_back(i);
    }

    for(int i=1;i<=N;i++)
        x[i]=i;
}

void addkq()
{
    string s="";
    for(int i=1;i<=N;i++)
    {
        s.append(to_string(pn[x[i]]));

        if(i!=N)
            s.append(" ");
    }

    kq.push_back(s);
}

void kt()
{
    int sum=0;
    for(int i=1;i<=N;i++)
        sum+=pn[x[i]];

    if(sum==S)
        addkq();
}

void ql(int i)
{
    for(int j=x[i-1]+1;j<=pn.size()-N+i;j++)
    {
        x[i]=j;

        if(i==N) kt();
        else ql(i+1);
    }
}

int main()
{
    int T;
    cin>>T;

    while(T--)
    {
        cin>>N>>P>>S;
        init();
        ql(1);

        cout<<kq.size()<<endl;
        for(string s:kq)
            cout<<s<<endl;

        kq.clear();
        pn.clear();
    }

	return 0;
}















