#include <bits/stdc++.h> 
using namespace std; 

int mod(string t, int n) { // só du
    int r = 0; 
    for (int i = 0; i < t.length(); i++) { 
        r = r * 10 + (t[i] - '0'); 
        r %= n; 
    } 
    return r; 
} 

string getMinimum(int n) { 
    queue<string> q; 
    set<int> visit; 
  
    string t = "1"; 
  
    q.push(t); 
  
    while (!q.empty()) { 
        t = q.front();      q.pop(); 
        
        int rem = mod(t, n); 
        
        if (rem == 0) 
            return t; 
            
        else if(visit.find(rem) == visit.end()) { //neu chua ton tai rem
            visit.insert(rem);
            q.push(t + "0"); 
            q.push(t + "1"); 
        } 
    } 
} 

main() { 
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<getMinimum(n)<<endl;
	}
} 
