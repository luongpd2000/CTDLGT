#include<bits/stdc++.h>

using namespace std;
int N,P,S;
int X[100];		// day so nguyen to tu P -> S
int A[100];		//
int kq[100000], size;
int sum;
int l;  // so luong so nto tu P -> S
int dem;

bool soNTo(int x){			// ktra so nto
	int n=sqrt(x);
	if(x==1) return false;
	for(int i=2;i<=n;i++){
		if(x%i==0) return false;
	}
	return true;
}

void init(){				// gan tat ca so nguyen to vào 1 mang
	l=0;
	for(int i=P;i<S;i++){
		if(soNTo(i)==true) X[++l]=i;
	}
}

void kiemtra(){				// kiem tra truong hop thoa than
	sum=0;
	for(int h=1;h<=N;h++){
		sum+=X[A[h]];
	}
	if(sum==S){
		dem++;
		for(int h=1;h<=N;h++){		// gan vao mang kq
			kq[++size]=X[A[h]];
		}
	}
}

void quaylui(int i){			// sinh to hop
	int j;
	for(j=A[i-1]+1;j<=l-N+i;j++){
		A[i]=j;
		if(i==N){
			kiemtra();
		}else{
			quaylui(i+1);	
		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>N>>P>>S;
		dem=0;
		size=0;
		init();
		quaylui(1);
		cout<<dem<<endl;
		
		if(dem!=0){				// in kq
			int j=0;
			for(int i=1 ; i<=size ;i++){
				cout<<kq[i]<<" ";
				++j;
				if(j==N){
					j=0;	
					cout<<endl;
				}
			}
		}
	}
}
