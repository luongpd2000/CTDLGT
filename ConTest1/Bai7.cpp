#include<bits/stdc++.h>

using namespace std;
int n;
int T[15];  // luu tong i so 
int X[15];

void xemmh(int a){
	if(a ==1) cout << "("<<X[a]<<") ";
    else{
        cout << "("<<X[1]<<" ";
        for(int i=2;i<a;i++){
            cout << X[i]<<" ";
        }
        cout <<X[a]<<") ";
    }
}

void Try(int i){
	int j;
	for(j=n-T[i-1] ; j>=1 ;j--){     // j = n- tong cac so truoc 
		if(X[i-1]>=j){     // so truoc lon hon so sau
			X[i]=j;       // so tiep theo 
			T[i]=T[i-1]+j;   // tông cac so da in
			if(T[i]==n){
				xemmh(i);
			}else{
				Try(i+1);
			}
 		}
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		X[0]=n;
		T[0]=0;
		Try(1);
		cout<<endl;
	}
}

