#include<bits/stdc++.h>

using namespace std;

main(){
	int t,m,n,x,y;
	cin>>t;
	while(t--){
		
		cin>>m>>n;
		priority_queue <int ,vector<int>, greater<int> > q[m+5];	// xep sep tang dan
		
		while(n--){
			cin>>x>>y;
			q[x].push(y);
			q[y].push(x);
		}
		 
		for(int i=1;i<=m;i++){
			cout<<i<<": ";
			while(!q[i].empty()){
				cout<<q[i].top()<<" ";
				q[i].pop();
			}
			cout<<endl;
		}
	}
}
