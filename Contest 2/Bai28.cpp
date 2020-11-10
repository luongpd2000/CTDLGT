#include<bits/stdc++.h>
using namespace std;

int n,x;
int A[21];
vector<int> kq;
int kt;

void inkq(){
	kt=1;
	cout<<"[";
	for(int j=0;j<kq.size()-1;j++){
		cout<<kq[j]<<" ";
	}
	cout<<kq[kq.size()-1]<<"] ";
}

void quaylui(int sum,int i){
	if(sum<0) return;
	if(sum==0) inkq();
	while(i<=n && sum-A[i]>=0){
		
		kq.push_back(A[i]);		// them ai vao kq
		quaylui(sum-A[i],i);	// i có the lap lai
		i++;
		kq.pop_back();			// xoa ai
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>x;		// n là so cs trong day , x là tong
		for(int i=1;i<=n;i++){
			cin>>A[i];
		}
		sort(A+1,A+1+n);		// sx day tang dan
		int s=x;
		kt=0;
		quaylui(s,1);
		if(kt==0) cout<<-1;
		cout<<endl;
	}
}
