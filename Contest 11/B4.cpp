#include<bits/stdc++.h>
using namespace std;
int pre[1001],n,preIdx;

void find(int minval, int maxval){
	if(preIdx==n) return;
	
	if(pre[preIdx] < minval || pre[preIdx] > maxval) return;
	
	int val = pre[preIdx++]; //preIdx cong sau nen cong den =n thi stop
	
	find(minval,val);
	find(val,maxval);
	
	cout<<val<<" ";
}
main(){
	int t; 
	cin>>t;
	while(t--){
		cin>>n; 
		preIdx=0;
		
		for(int i=0;i<n;i++) cin>>pre[i];

		find(INT_MIN, INT_MAX);
		cout<<endl;
	}
}
