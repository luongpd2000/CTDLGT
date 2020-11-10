#include <bits/stdc++.h>
using namespace std;
bool chuaxet[100001];
vector<int> q[100001];
int v,e,maxx;
int dem=1;

void init(){
	for(int i = 1;i <= v;i++) chuaxet[i] = true;
}

void BFS(int h){
	int dem = 1;
	chuaxet[h] = false;
	queue<int> kq;
	
	kq.push(h);
	int s;
	while(!kq.empty()){
		s = kq.front();
		kq.pop();
		
		for(int i=0;i<q[s].size();i++){
			if(chuaxet[q[s][i]]){
				chuaxet[q[s][i]] = false;
				kq.push(q[s][i]);
				dem++;
			}
		}
	}
	
	if(maxx < dem) maxx = dem;
}
void find(){
	maxx = INT_MIN;
	init();
	for(int i=1;i<=v;i++){
		if(chuaxet[i]){
			BFS(i);
		}
	}
}
main(){
	int t,a,b;
	cin>>t;
	while(t--){
		dem=1;
		cin>>v>>e;
		for(int i = 1;i <= e;i++){
			cin>>a>>b;
			
			q[a].push_back(b);
			q[b].push_back(a);
		}
		
		find();
		
		if(maxx==v) cout<<"YES";	// lthong
		else cout<<"NO";
		
		cout<<endl;
		
		for(int i=1;i<=v;i++) q[i].clear();
	}
	
}
