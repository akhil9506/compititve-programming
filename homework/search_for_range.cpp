vector<int> Solution::searchRange(const vector<int> &A, int B) {
    // Do not write main() function.
    // Do not read input, instead use the arguments to the function.
    // Do not print the output, instead return values as specified
    // Still have a doubt. Checkout www.interviewbit.com/pages/sample_codes/ for more details
    vector<int> so;
    if(!binary_search(A.begin(),A.end(),B)){
        so.push_back(-1);
        so.push_back(-1);
        return so;
    }
    int u = upper_bound(A.begin(),A.end(),B)-A.begin()-1;
    int l = lower_bound(A.begin(),A.end(),B)-A.begin();
    so.push_back(l);
    so.push_back(u);
    return so;
}
