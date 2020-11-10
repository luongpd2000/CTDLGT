#include <bits/stdc++.h>
using namespace std;
 
int a[9][9];
bool vis[9][9];
int n;
vector <string> vt;
string kq="";
void Try(int i,int j){
    if(a[1][1] == 0 || a[n][n]==0) return;
    if(i == n && j == n){ 
        vt.push_back(kq);
    }
    if(a[i+1][j]==1 && i!=n && !vis[i+1][j]){
        kq += 'D';
        vis[i][j]=true;
        Try(i+1,j);
        kq.erase(kq.length()-1); // xoa bo phan tu vua gan
        vis[i][j]=false;
    }
    if(a[i][j-1]==1 && j != 1 && !vis[i][j-1]){
        kq+='L';
        vis[i][j]=true;
        Try(i,j-1);
        kq.erase(kq.length()-1);
        vis[i][j]=false;
    }
    if(a[i][j+1]==1 && j != n && !vis[i][j+1]){
        kq+='R';
        vis[i][j]=true;
        Try(i,j+1);
        kq.erase(kq.length()-1);
        vis[i][j]=false;
    }
    if(a[i-1][j]==1 && i != 1 && !vis[i-1][j]){
        kq+='U';
        vis[i][j]=true;
        Try(i-1,j);
        kq.erase(kq.length()-1);
        vis[i][j]=false;
    }
}
 
void Solve(){
    kq="";
    vt.clear();
    cin >> n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin >> a[i][j];
            vis[i][j]=false;
        }
    }
    Try(1,1);
    if(vt.empty()) cout <<-1<<endl;
    else{
        for(int i=0;i<vt.size();i++){
            cout <<vt[i]<<" ";
        }
        cout << endl;
    }
}
 
int main(){
    int t;
    cin >> t;
    while(t--){
        Solve();
    }
    return 0;
}
