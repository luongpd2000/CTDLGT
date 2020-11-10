#include<bits/stdc++.h>

using namespace std;

void calculateSpan(int price[], int n, int S[]) { 
    stack<int> st; 
    st.push(0); 
  
    // Span value of first element is always 1 
    S[0] = 1; 
  
    for (int i = 1; i < n; i++) { 
        while (!st.empty() && price[st.top()] <= price[i]) 
            st.pop(); 
            
  		if(st.empty()) S[i]=i+1;
  		else S[i]=i-st.top();
  		
        st.push(i); 
    } 
} 
  
void printArray(int arr[], int n) { 
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " "; 
} 


main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int a[n];
		int S[n];
		for(int i=0;i<n;i++) cin>>a[i];
		
		calculateSpan(a,n,S);
		printArray(S,n);
	}
		
		
}
