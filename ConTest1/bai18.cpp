#include<bits/stdc++.h>
using namespace std;

int n,k;
long long s;
int a[100];
int t[100];

void init(){
	for(int i=1;i<=k;i++)
		a[i]=i;
}
void sinh(){
		int i=k;
		while(i>0 && a[i]==n-k+i){	
			i--;
		}
		if(i==0){
			k++;
			init();
		}else{
				a[i]++;
				for( int j = i+1; j<= n; j++ )
				a[j] = a[i] + j-i;
		}
	
}
long long sumt(){
	long long sum=0;
	for(int i=1;i<=k;i++){
		sum=sum+t[a[i]];
	}
	return sum;
}

int main(){
	cin>>n>>s;
	for(int i=1;i<=n;i++){
		cin>>t[i];
	}
	k=1;
	init();
	sort(t+1,t+1+n,greater<int>());
	while(k<=n)
	{
		if(sumt()==s){
			cout<<k;
			return 0;
		}
		sinh();
	}
	cout<<-1;
	return 0;
}
