#include <bits/stdc++.h> 
using namespace std; 
string pure(int n) { 
    string p;  
    while (n > 0) {  
        n--;  
        if (n % 2 == 0) 
            p.append("4"); 
        else
            p.append("5"); 
        n /= 2;  
    } 
    int len = p.length();
    reverse(p.begin(), p.end()); //dao nguoc
  	
    for (int i = len - 1; i >= 0; i--)  // cong them 1 lan nua
        p += p[i]; 
  
    return p; 
} 
  
int main() {
	int t;
	int n;
	cin >> t;
	while (t--) {
		cin>>n; 
    	for (int i = 1; i <= n; i++){
        	cout << pure(i) << " "; 
        }
        cout<<endl;
	}
} 
