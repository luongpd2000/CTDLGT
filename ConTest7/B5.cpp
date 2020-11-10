#include<bits/stdc++.h>

using namespace std;

int findMaxLen(string str) { 
    int n = str.length(); 
    stack<int> stk; 
    stk.push(-1); 
  
    int result = 0; 
  
    for (int i=0; i<n; i++) { 
        if (str[i] == '(') 
          stk.push(i); // vi tri
  
        else { 	// neu là dau )
            stk.pop(); 
            if (!stk.empty()) 
                result = max(result, i - stk.top()); // so sanh de lay max
  
            else stk.push(i); 
        } 
    } 
  
    return result; 
} 
main(){
	int t;
	string s;
	stack <char> dau;
	cin>>t;
	
	while(t--){
		cin.ignore();
		cin>>s;
		cout<<findMaxLen(s)<<endl;
	}
}
