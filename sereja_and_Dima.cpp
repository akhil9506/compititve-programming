#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++){
	    cin>>arr[i];
	}
	auto lptr = arr;
	auto rptr = arr+n-1;
	int count=0;
	int s=0,d=0;
	while(lptr != rptr){
	    if(count%2 == 0){
	        if(*lptr>=*rptr){
	           s+=*lptr;
	           lptr++;
	        }
	        else{
	            s+=*rptr;
	            //cout<<*rptr<<"asc = "<<s<<endl;
	            rptr--;
	        }
	    }
	    else{
	        if(*lptr>=*rptr){
	           d+=*lptr;
	           lptr++;
	        }
	        else{
	            d+=*rptr;
	            rptr--;
	        }
	    }

	    count++;
	}
	if(count%2==0){
	    s+=*lptr;
	}
	else{
	    d+=*lptr;
	}
	cout<<s<<" "<<d;
	return 0;
}
