#include <iostream>
using namespace std;

int main() {
    int n,f;
    cin>>n>>f;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int max=0;
    int* ptr,*cur;
    for(int i=0;i<n;i++){
        int count=0;
        int sum =0;
        ptr = arr+i;
        cur = arr+i;
        if(*ptr<=f){
            for(;cur<arr+n;cur++){
                sum = sum +*cur;
                //cout<<sum<<count<<endl;
                if(sum<=f)
                count++;
            }
        }
        else{
            count =0;
        }
        if(max<count){
                max = count;
                //cout<<"max_upddated\n";

            }
        //cout<<i<<"index"<<endl;
    }
    cout<<max;
	return 0;
}
