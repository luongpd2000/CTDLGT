#include<bits/stdc++.h>

using namespace std;

int n,s,m;
// n so luong thuc co the mua trong ngay
// s so ngay can ton tai
// m so l??ng thuc can de ton tai trong 1 ngay
int kq(){
	int sum = s*m;
	int b=sum/n;
	if(b*n ==sum){
		 return b;
	}
	else {return b+1;}		// neu bi thieu thi can c?ng them 1 ngay di mua
}

void xuly(){
	
	if(m>n) cout<<-1<<endl;
	if(m==n){
		if(s>6) cout<<-1<<endl;
		else cout<<s<<endl;
	}
		 
	if(m<n){
		int a=n-m;
		if(s<=6){
			cout<<kq()<<endl;
		}else{
			if(a*6>=m) {	// so luong thuc tich luy trong 6 ngay có the song qua chu nhat
				cout<<kq()<<endl;
			}
			else cout<<-1<<endl;
		}
	}	
}

main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>s>>m;
		xuly();
	}
}

