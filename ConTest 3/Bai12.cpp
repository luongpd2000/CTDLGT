#include<bits/stdc++.h>

using namespace std;

void input(string &inp, vector<int> &freq){
    int dem[256]{0};

    for(int i=0; i<inp.size(); i++)		// dem so lan xuat hien
    {
        dem[inp[i]]++;
    }

    for(int i=0;i<256;i++)
        if(dem[i]!=0)	
            freq.push_back(dem[i]);			// add vao vector
}

int main(){
    int T;
    cin>>T;
    cin.ignore();

    while(T--){
        string inp;
        cin>>inp;
        cin.ignore();

        vector<int> freq;
        input(inp, freq);

        sort(freq.begin(), freq.end(),greater<int>());		// sap xep tang dan so lan xuat hien
		int kq=1;
        
        for(int i=0;i<freq.size();i++){
            if(i + (freq[i] -1)*2 > inp.size())		// toi uu nhat thì khoang cach min d=2
            {
                kq=-1;
                break;
            }
        }
        cout<<kq<<endl;
    }

    return 0;
}
