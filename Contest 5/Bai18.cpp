#include<bits/stdc++.h>
using namespace std;

// giong bai chia cong viec
struct cap{
	int a,b;
};
int n;  cap M[105];
int find(){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(M[i].b>M[j].b) swap(M[i],M[j]);
		}
	}
	int j=0,dem=1;
	for(int i=1;i<n;i++){
		if(M[i].a>M[j].b){
			dem++; j=i;
		} 	
	}
	return dem;
}
main(){
	int t; cin>>t;
	while(t--){
		cin>>n;
		for(int i=0;i<n;i++) cin>>M[i].a>>M[i].b;
		cout<<find()<<endl;
	}
}
