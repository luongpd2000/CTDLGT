#include <bits/stdc++.h> 
using namespace std; 
  
const int MAX_CHAR = 26; 
  
bool adjSign(string s, int i) { // kiem tra dau truoc ( có phai - khong
    if (i == 0) 
        return true; 
    if (s[i - 1] == '-') 
        return false; 
    return true; 
}; 
  
void eval(string s, vector<int>& v, bool add) { 
    stack<bool> stk; 
    stk.push(true); 
  
    int i = 0; 
    while (s[i] != '\0') { 
        if (s[i] == '+' || s[i] == '-') { 
            i++; 
            continue; 
        } 
        if (s[i] == '(') { // neu co (
  
            if (adjSign(s, i))  // kiem tra toan tu truoc no
                stk.push(stk.top()); // push true
            else 
                stk.push(!stk.top()); // push false
        } 
        else if (s[i] == ')')  
            stk.pop(); 
        else { 
            if(stk.top())                  
                v[s[i] - 'a'] += (adjSign(s, i) ? add ? 1 : -1 : add ? -1 : 1); 
  
            else                 
                v[s[i] - 'a'] += (adjSign(s, i) ? add ? -1 : 1 : add ? 1 : -1); 
        } 
        i++; 
    } 
}; 

bool areSame(string expr1, string expr2) { 
    vector<int> v(MAX_CHAR, 0); 
  
    eval(expr1, v, true); 
  
    eval(expr2, v, false); 
    
    for (int i = 0; i < MAX_CHAR; i++)  
        if (v[i] != 0)  
            return false; 
  
    return true; 
} 

main(){
	int t;
	cin>>t;
	string exp1,exp2;
	while(t--){
		cin.ignore();
		getline(cin,exp1);
		cin.ignore();
		getline(cin,exp2);
		if(areSame(exp1,exp2)) cout<<"YES"<<endl;
		else cout<<"NO"<<endl;
	}
}
  
