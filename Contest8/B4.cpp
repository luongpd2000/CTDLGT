#include<bits/stdc++.h>

using namespace std;
long long k;
string s;

void xuly(){
	long long dem[255]{0};
	
	for(long long i=0;i<s.size();i++){
		dem[s[i]]++;
	}
	priority_queue<long long> t;
	for(int i=0;i<255;i++){
        if(dem[i]!=0){	
            t.push(dem[i]);
        }
    }
    while(k>0){
		long long h=t.top() ; t.pop();
		t.push(h-1);
		if(t.top()==0) break;
		k--;
	}
	long long sum=0;
	while(t.size()>0){
		long long h=t.top();
		sum+=h*h;
		t.pop();
	}
	cout<<sum<<endl;
}


main(){
	int t;
	cin>>t;
	while(t--){
		cin>>k;
		cin.ignore();
		cin>>s;
		xuly();
	}
}

