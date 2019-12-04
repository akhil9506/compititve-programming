nt Solution::search(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    auto low=A.begin();
    //cout<<*low<<endl;
    auto high = A.end()-1;
    auto mid = low +(high-low)/2 ;
    while(low<mid){
        if(*high<*mid){
            low = mid;
            mid = low + (high-low)/2;
        }
        else if(*high>=*mid){
            high = mid;
            mid = low + (high-low)/2;

        }
        //cout<<"low = "<<*low<<"mid ="<<*mid<<"high="<<*high<<endl;
    }
    int index;
    if(*low<*high){
        index = low - A.begin();
    }
    else{
        index = high - A.begin();
    }
    //cout<<index<<"_________________________"<<endl;
    //cout<<*low<<"cdsdc"<<endl;
    if(B<*(A.end()-1)){
        if(binary_search(A.begin()+index,A.end(),B)){
            //cout<<upper_bound(A.begin()+index,A.end(),B)-A.begin()-1;
            return lower_bound(A.begin()+index,A.end(),B)-A.begin();
        }
    }
    else{
        if(binary_search(A.begin(),A.begin()+index-1,B)){
            return lower_bound(A.begin(),A.begin()+index-1,B)-A.begin();
        }
    }
    return -1;
}
