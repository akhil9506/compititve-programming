#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
	    int s;
	    cin>>s;
	    int arr[s];
	    for(int j=0;j<s;j++){
	        cin>>arr[j];
	    }
	    int k = arr[s-1];
	    //cout<<k<<" ";
	    int max[s];
	    int count=0;
	    max[count++]= k;
	    for(int j=s-2;j>=0;j--){
	        if(k<=arr[j]){
	            k=arr[j];
	            max[count++] = k;
	            //cout<<arr[j]<<"  ";
	        }
	    }
	    for(int h=count-1;h>=0;h--){
	        cout<<max[h]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
