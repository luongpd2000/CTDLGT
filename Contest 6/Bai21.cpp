#include<bits/stdc++.h>
using namespace std;

int a[10005],freq[100005],n; 

struct number{
	int value,freq;	// gtri và so lan xhien
};

number numbers[100005];

bool cmp(number x, number y){		// ham so sanh
	if(x.freq==y.freq) return x.value<y.value;
	return x.freq>y.freq;
}

main(){ 
	int t; cin>>t;
	while(t--){
		cin>>n; 
		int Max=INT_MIN,Min=INT_MAX,dem=0; 
		
		memset(freq,0,sizeof(freq));	// gan cac ptu cua mang =0
		
		for(int i=1;i<=n;i++) {
			cin>>a[i];
			
			freq[a[i]]++; 		// tan so xuat hien
			Max=max(Max,a[i]); 		// tim so lon nhat
			Min=min(Min,a[i]);		// tim so nho nhat
		}
		
		for(int i=Min;i<=Max;i++){
			if(freq[i]!=0) {
				numbers[dem].value=i;		// gan gia tri
				numbers[dem].freq=freq[i];	// gan tan so
				dem++;
			}
		} 
		
		sort(numbers,numbers+dem,cmp);		// sx theo ham cmp
		
		for(int i=0;i<dem;i++){
			for(int j=0;j<numbers[i].freq;j++) cout<<numbers[i].value<<" ";
		}
		cout<<endl;
	}
}
