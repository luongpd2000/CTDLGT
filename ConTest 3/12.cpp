#include<bits/stdc++.h> 
using namespace std; 
int findMax(int a[],int n,int m){
	int max = -1,j=-1;
	for(int i=0;i<n;i++){
		if(a[i] >max && a[i] > 0 && i != m){
			max = a[i];
			j = i;
		}
	}
	return j;
}
main(){ 
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		int k = 0; 
		string s;
		getline(cin,s);
		int n = s.length();
		int a[10001] = {0};
		
		for(int i=0;i<n;i++){
			bool check = true;
			for(int j=i-1;j>=0;j--){
				if(s[j] == s[i]){
					a[i] = a[j] + 1;
					a[j] = 0;
					check = false;
					break;
				}
			}
			if(check){
				a[i] = 1;
				k++;
			}
		}
		char kitu[k];
		int sl[k];

		for(int i=0;i<k;i++){
			int max = 0;
			for(int j=1;j<n;j++){
				if(a[j] > a[max]){
					max = j;
				}
			}
			sl[i] = a[max];
			kitu[i] = s[max];
			a[max] = 0;
		}
		//
		bool flag = true;
		char kq[n];
		for(int i=0;i<n;i++){
			kq[i] = '0';
		}
		kq[0] = kitu[0];
		sl[0] --;
		int bonus = 0;
		for(int i=1;i<n;i++){
			int j = findMax(sl,k,bonus); 
			if(j != -1){
				kq[i] = kitu[j];
				sl[j] --;
				bonus = j;
			}
			else{
				flag = false;
				break;
			}
		}
		if(flag) cout<<1<<endl;
		else cout<<-1<<endl;
	}
} 
