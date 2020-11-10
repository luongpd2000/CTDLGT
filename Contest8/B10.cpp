#include<bits/stdc++.h>
using namespace std;

#define pair pair<int,int>	// luu tru theo dang cap doi tuong

int xuly(int n){
	
	queue < pair > q ;
	set <int> visit;
	q.push(pair(n,0));
	
	while(!q.empty()){
		pair tmp=q.front(); q.pop();
		
		if(tmp.first==1) return tmp.second;		// first la gia tri , second la so buoc
		
		if(tmp.first-1==1) return tmp.second+1;
		
		if(visit.find(tmp.first-1)==visit.end()){		// neu chua co gia tri trong set	// buoc -1
			q.push(pair(tmp.first-1,tmp.second+1));		// thi add vao queue
			visit.insert(tmp.first-1);					// luu gia tri vao set
		}
		
		for(int i=2;i*i<=tmp.first;i++){ // i*i vi no phai la max(2,8)=8	buoc tim max cua tich
		
			if(tmp.first%i==0){
				if(visit.find(tmp.first/i)==visit.end()){
					q.push(pair(tmp.first/i,tmp.second+1));
					visit.insert(tmp.first/i);
				}	
			}
		}
		
	}
}
main(){
	int t,n; cin>>t;
	while(t--){
		cin>>n;
		cout<<xuly(n)<<endl;
	}
}
