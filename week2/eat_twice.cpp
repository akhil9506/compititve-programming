#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	        vector<pair<int,int>>v;
	        int n1,m1;
	        cin>>n1>>m1;
	        for(int j=0;j<n1;j++){
	            int a,b;
	        cin>>b>>a;
	        v.push_back(make_pair(a,b));
	        
	        }
	        int max1=0,d1;
	        for(auto itr = v.begin();itr!=v.end();itr++){
	            if(max1 < itr->first){
	                max1 = itr->first;
	                d1 = itr->second;
	                }
	        }
	    int max2 = 0;;
	    for(auto itr=v.begin();itr!=v.end();itr++){
	        if(max2<itr->first&&itr->second != d1){
	            max2 = itr->first;
	        }
	    }
	    cout<<max1+max2<<endl;
	}
	return 0;
}