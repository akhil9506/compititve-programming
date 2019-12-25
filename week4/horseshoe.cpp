#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main() {
	int s1;
	cin>>s1;
    unordered_map<int,int> umap;
    umap[s1]=1;
    for(int i=1;i<4;i++){
        int s;
        cin>>s;
        if(umap.find(s)==umap.end()){
            umap[s]=1;
        }
        else{
            umap[s]+=1;
        }
    }    
    cout<<4-umap.size();
	return 0;
}