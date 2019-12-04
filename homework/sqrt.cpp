int Solution::sqrt(int A) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    long int low=A,high=A;
    while(low*low>A){
        high = low;
        low = low/2;
    }
    long int mid = low + (high-low)/2;
    while(low<high&&low!=mid&&high!=mid){
        if(mid*mid>A){
            high = mid;
        }
        else if(mid*mid==A){
            return mid;
        }
        else{
            low= mid;
        }
        mid = low+(high-low)/2;
    }
    return low;

}
