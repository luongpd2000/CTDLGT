#include <bits/stdc++.h>
using namespace std;


main(){
    int t;
    cin>>t;
    cin.ignore();

    while(t--){
        string inp;
        getline(cin, inp);
        stringstream ss(inp);

        string word;
        while(getline(ss,word,' ')){	// dao chuoi
        	
            reverse(word.begin(), word.end());
            
			cout<<word<<" ";
        }
        cout<<endl;
    }
}
