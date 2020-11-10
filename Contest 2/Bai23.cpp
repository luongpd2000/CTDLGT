#include<bits/stdc++.h>

using namespace std;
int n;
int A[10][10];
bool diemcuoi;
bool kiemtra[10][10];
vector<string> kq;
string tp="";
// tao 1 ma tran kiemtra de xac dinh ô dã di qua chua
// tp là 1 duong di
// kq là tap cac duong di 

void quaylui(int x,int y){		// x hang , y cot
		if(x==n && y==n){
			kq.push_back(tp);
			return;
		}else{
			if(x<n && A[x+1][y]==1 && kiemtra[x+1][y])	{
				tp += 'D';
				kiemtra[x][y]=false;
				quaylui(x+1,y);
				kiemtra[x][y]=true;
				tp.erase(tp.length()-1); // xoa bo phan tu vua gan
			}
			if(y>1 && A[x][y-1]==1 && kiemtra[x][y-1]){
				kiemtra[x][y]=false;
				tp += 'L';
				quaylui(x,y-1);
				kiemtra[x][y]=true;
				tp.erase(tp.length()-1); // xoa bo phan tu vua gan
			}
			if(y<n && A[x][y+1]==1 && kiemtra[x][y+1]) {
				kiemtra[x][y]=false;
				tp += 'R';
				quaylui(x,y+1);
				kiemtra[x][y]=true;
				tp.erase(tp.length()-1); // xoa bo phan tu vua gan
			} 
			if(x>1 && A[x-1][y]==1 && kiemtra[x-1][y]){
				kiemtra[x][y]=false;
				tp += 'U';
				quaylui(x-1,y);
				kiemtra[x][y]=true;
				tp.erase(tp.length()-1); // xoa bo phan tu vua gan
			}
		}
}


int main(){
	int t;
	cin>>t;
	cin.ignore();
	while(t--){
		tp="";
		kq.clear();
		cin>>n;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				cin>>A[i][j];
				kiemtra[i][j]=true;			// chua di qua
			}
		}
		if(A[1][1]==0 || A[n][n]==0){
			cout<<"-1";
		}else{
			quaylui(1,1);
			if(kq.empty()) cout <<"-1";
    		else{
        		for(int i=0;i<kq.size();i++){
            		cout <<kq[i]<<" ";
        		}
    		}
		}
		cout<<endl;
	}

}

