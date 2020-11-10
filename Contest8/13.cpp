#include<bits/stdc++.h>

using namespace std;
bool F[100005];
//KIEM TRA CAC SO CO CAC CS KHAC NHAU VA < 5
bool kiemtra(int n){
	priority_queue<int> q;
	
	while(n){
		q.push(n%10);
		n/=10;
	}
	
	if(!q.empty() && q.top() >5) return false;
	else{			// ktra khac nhau ham doi uu tien nen chi can ktra cac cso canh nhau xem co trung ko
		while(!q.empty()){
			int temp=q.top();
			q.pop();
			
			if(!q.empty() && q.top()==temp) return false;
		}
	}
	return true;
}

main(){
	int t,l,r;
	// load 1 lan
	for(int i=0;i<=100000;i++) F[i]=kiemtra(i);
	cin>>t;
	while(t--){
		int d=0;
		cin>>l>>r;
		for(int i=l;i<=r;i++) if(F[i]) d++;
		cout<<d<<endl;
	}
}
