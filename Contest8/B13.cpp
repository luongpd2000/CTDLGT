#include <bits/stdc++.h> 
using namespace std; 
#define MAX 543210 // so lon nhat co the tao
vector<int> ans; // sinh ra chuoi so hop le <=543210
  
bool isValidNum(int x) { // kiem tra so co hop le
    map<int, int> mp; 
  	int n;
  	while(x>0){
		n=x%10;  
		if (mp.find(n)!= mp.end()) { // neu xuat hien nhieu lan
            return false; 
        } 
        else if (n > 5) { // neu lon hon 5
            return false; 
        } 
        else { //neu dung
            mp[n] = 1; 
        } 
		x=x/10;
	}
    return true; 
} 

void generate() { // sinh day
    queue<int> q; 
    q.push(1); 
    q.push(2); 
    q.push(3); 
    q.push(4); 
    q.push(5); 
  
    ans.push_back(0); 
  
    while (!q.empty()) { 
        int x = q.front(); 
        q.pop(); 
  
        if (isValidNum(x)) { 
            ans.push_back(x); 
        } 
    
        if (x == 543210) // r<10^5
            break; 
        for (int i = 0; i <= 5; i++) { 
            int temp = x*10 + i; 
            q.push(temp); 
        } 
    } 
} 

int findcount(int l, int r) {  
    int count = 0; 
    for (int i = 0; i< ans.size(); i++) { 
        int a = ans[i]; 
        
        if (a>=l && a<=r) { 
            count++; 
        }else{
        	if(a>r) break;
		}
    } 
    return count; 
} 
int main() { 
	int t;
	int l,r;
	cin>>t;
	generate();
	while(t--){
		cin.ignore();
		cin>>l>>r;
		cout<<findcount(l,r)<<endl;
	}
} 
