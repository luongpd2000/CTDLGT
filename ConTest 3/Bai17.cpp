#include<bits/stdc++.h>

using namespace std;
int k;
string s;

void xuly(){
	int dem[255]{0};
	for(int i=0;i<s.size();i++){
		dem[s[i]]++;
	}
	priority_queue<int> t;
	for(int i=0;i<255;i++){
        if(dem[i]!=0){	
            t.push(dem[i]);
        }
    }
    while(k>0){
		int h=t.top() ; t.pop();
		t.push(h-1);
		if(t.top()==0) break;
		k--;
	}
	int sum=0;
	while(t.size()>0){
		int h=t.top();
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
		getline(cin,s);
		xuly();
	}
}

