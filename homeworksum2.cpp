#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;
int main() {
	//code
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
	    if(i%2!=0){
	        for(int j=1;j<=m;j++){
	            cout<<'#';
	        }
	    }
	   else if(i%4!=0){
	        for(int j=1;j<m;j++){
	            cout<<'.';
	            }
	           cout<<'#';
	        }
	   else{
	       cout<<'#';
	        for(int j=1;j<m;j++){
	             cout<<'.';
	            }
	        }
	    cout<<endl;
	}
}
