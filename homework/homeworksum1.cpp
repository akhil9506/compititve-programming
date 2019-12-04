tdcinclude <iostream>
#include<bits/stdc++.h>
using namespace std;
bool comp(pair<int,int>p1,pair<int,int>p2){
    return p1.first < p2.first;
}
bool check(int s,vector<pair<int,int>>data){
    for(auto itr=data.begin();itr!=data.end();itr++){
        if(s<=itr->first){
            return false;
        }
        else{
            s = s+itr->second;
        }
    }
    return true;
}
int main() {
	vector<pair<int,int>>data;
	int s,n;
	cin>>s>>n;
	for(int i=0;i<n;i++){
	    int a,b;
	    cin>>a>>b;
	    pair<int,int> p{a,b};
	    data.push_back(p);
	}
	sort(data.begin(),data.end(),comp);
	check(s,data)?cout<<"YES":cout<<"NO";
	return 0;
}
