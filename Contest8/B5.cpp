#include <bits/stdc++.h> 
using namespace std; 

void generatePrintBinary(int n) { 

    queue<string> q; 
  
    q.push("1"); 
    while (n--) { 
        string s1 = q.front(); 
        q.pop(); 
        cout <<s1<<" "; 
  
        string s2 = s1;
    
        q.push(s1.append("0")); // sinh nhi phan tiep theo
  
        q.push(s2.append("1")); 
    } 
    cout<<endl;
} 
int main() { 
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		generatePrintBinary(n);
	}
} 
