#include <bits/stdc++.h>
using namespace std;

int n,cmin=99999999;
int c[16][16],x[16];
int ktra[16]={0};
int S=0,MIN=99999999;
void Try(int i){
	for(int j=2;j<=n;j++){
		if(ktra[j]==0){
			x[i]=j;
			ktra[j] = 1;
			S += c[x[i-1]][x[i]];		// tong chi phi
			if(i==n){
				if(S+c[j][1] < MIN) MIN = S+c[j][1]; 		// cap nhat
			}
			else if(S+(n-i+1)*cmin < MIN ) Try(i+1); // neu can duoi cua phuong an nho hon MIN thi moi de quy
			ktra[j] = 0; // danh dau lai
			S -= c[x[i-1]][x[i]];
		}
	}
}


main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cin>>c[i][j];
			if(c[i][j] != 0 && cmin > c[i][j]) cmin = c[i][j];		// cmin de tinh can duoi
		}
	}
	x[1] = 1;
	Try(2);
	cout<<MIN<<endl;
}
