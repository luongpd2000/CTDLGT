#include<bits/stdc++.h>
// dem so cach dat n quan hau
using namespace std;
int X[15];
int n,dem=0;
bool cot[15], dcxuoi[30] , dcnguoc[30];

void quaylui(int i){	// hang i
	for(int j=0;j<=n;j++){			// cot j
		if(cot[j] && dcxuoi[i-j+n] && dcnguoc[i+j-1]){		// kiem tra
			X[i]=j;
			cot[j]=false;
			dcxuoi[i-j+n]=false;
			dcnguoc[i+j-1]=false;
			if(i==n){
				dem++;
			}else{
				quaylui(i+1);
			}
			cot[j]=true;
			dcxuoi[i-j+n]=true;
			dcnguoc[i+j-1]=true;
		}
	}

}

int main(){
	cin>>n;
	for(int i=1;i<=n;i++){
		cot[i]=true;   		// cot chua co quan hau
	}
	for(int i=1;i<=2*n;i++){
		dcxuoi[i]=true;
		dcnguoc[i]=true;
	}
	quaylui(1);
	cout<<dem;
}

