#include<bits/stdc++.h>

using namespace std;
int X[10];
int A[9][9];
bool cot[10], dcxuoi[20] , dcnguoc[20];
int MAX=0;
int sum=0;

void quaylui(int i){	// hang i
	for(int j=1;j<=8;j++){			// cot j
		if(cot[j] && dcxuoi[i-j+8] && dcnguoc[i+j-1]){		// kiem tra neu cot 2 dc ko chua quan hau
			X[i]=j;		// luu lai vi tri dat quan hau
			sum+=A[i][j];
			cot[j]=false;
			dcxuoi[i-j+8]=false;
			dcnguoc[i+j-1]=false;
			if(i==8){
				if(sum>MAX) MAX=sum;
			}else{
				quaylui(i+1);
			}
			cot[j]=true;
			dcxuoi[i-j+8]=true;
			dcnguoc[i+j-1]=true;
			sum-=A[i][j];
		}
	}

}

int main(){
	int t;
	cin>>t;
	while(t--){
		MAX=0;
		sum=0;
		for(int i=1;i<=8;i++){
			for(int j=1;j<=8;j++){
				cin>>A[i][j];
			}
		}
		for(int i=1;i<=8;i++){
			cot[i]=true;   		// cot chua co quan hau
		}
		for(int i=1;i<16;i++){
			dcxuoi[i]=true;		// dc xuoi chua co quan hau
			dcnguoc[i]=true;	// dc nguoc chua có quan hau
		}
		quaylui(1);
		cout<<MAX<<endl;
	}
}
