#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    string s;
	    cin>>s;
	    unordered_map<char,int> umap;
	    //cout<<s.length();
	    for(int j=0;j<s.length();j++){
	        if(umap.find(s[j])==umap.end()){
	            umap[s[j]] = 1;
	            //cout<<"uerf";
	            //cout<<s[i]<<"___";
	        }
	        else{
	            umap[s[j]]++;
	            //cout<<s[i]<<"*****\n";
	        }
	    }
	        int sum=0;
	        for(auto itr = umap.begin();itr!=umap.end();itr++){
	            sum+=(itr->second)%2;
	            sum+=(itr->second)/2;
	            //cout<<"yerger";
	        }
	        cout<<sum<<endl;
	}    
	return 0;
}