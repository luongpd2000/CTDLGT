#include <iostream>
using namespace std;

int n,k,s;
int x[11],dem = 0;

void tinh(){
	int sum = 0;
	for(int i=1;i<=k;i++){
		sum += x[i];
	}
	if(sum == s) dem++;
}

void quaylui(int i){			// sinh to hop
	for(int j=x[i-1]+1; j<=n-k+i;j++){
		x[i] = j;
		if(i == k) tinh();
		else quaylui(i+1);
	}
}

main(){
	while(true){
		cin>>n>>k>>s;
		if(n==0 && k==0 && s==0){			// ketthuc chuong trinh
			break;
		}
		quaylui(1);
		cout<<dem<<endl;
		dem=0;
	}
}
