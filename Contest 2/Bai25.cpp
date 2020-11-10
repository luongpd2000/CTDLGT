#include<iostream>

using namespace std;

int sum(int a,int s[]){
	int sum=0;
	for(int i=0;i<a;i++) sum=sum+s[i];
	return sum;
}

int subset(int a,int s[],int sum){
	if(sum==0) return 1;		// neu tong con lai = 0 tuc là có day con tong =k/2 
	if(sum<0||a==-1) return 0;	// thop khong co day thoa man
	if(subset(a-1,s,sum)==1) return 1;		// neu khong lay vi tri a thi tong giu nguyen
	if(subset(a-1,s,sum-s[a]==1)) return 1;		// neu lay tong vi tri a thi tong thay doi
}

main(){
	int t;
	cin >> t;
	cin.ignore();
	while(t--){
		int a;
		cin >> a;
		int s[a];
		for(int i=0;i<a;i++) cin >> s[i];
		int k=sum(a,s);		// tong day 
		if(k%2==1){
			cout << "NO\n";
		}
		else{
			if(subset(a,s,k/2)) cout <<"YES\n";	// subset tong = k/2
			else cout <<"NO\n";
		}
	}
}
