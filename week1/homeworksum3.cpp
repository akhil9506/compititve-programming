#include <iostream>
#include<bits/stdc++.h>
using namespace std;
bool getfirstchar(string str){
    unordered_map<char,int> umap;
     //cout<<str.length();
    for(int i=0;i<str.length();i++){
         //cout<<"fough";
        if(i==0||umap.find(str[i])==umap.end()){
            umap[str[i]]=1;
        }
        else{
            cout<<str[i];
            return false;
        }
    }
    return true;
}
int main() {
	//code
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    string str;
	    cin>>str;
	    //cout<<str;
	    //cout<<getfirstchar(string str);
	    if(getfirstchar(str)){
	        cout<<"-1";
	    }
	    cout<<endl;
	}
	return 0;
}
