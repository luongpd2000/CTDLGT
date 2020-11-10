#include<bits/stdc++.h>

using namespace std;
int h,c;
int A[100][100];
bool diemcuoi;
int dem;

void quaylui(int x,int y){
		if(x==h && y==c){	// h hàng c cot
			dem++;
		}else{
			if(x<h)	{
				quaylui(x+1,y);
			}
			if(y<c) {
				quaylui(x,y+1);
			} 
		}
}

int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		dem=0;
		cin>>h>>c;
		for(int i=1;i<=h;i++){
			for(int j=1;j<=c;j++){
				cin>>A[i][j];
			}
		}
		quaylui(1,1);
		cout<<dem<<endl;
	}

}

