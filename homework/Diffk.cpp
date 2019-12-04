int Solution::diffPossible(vector<int> &A, int B) {
    for(auto itr = A.begin();(itr+1)!= A.end();itr++){
        auto next = itr + 1;
        while(next != A.end()){
            if(*next- *itr < B){
                next++;
            }
            else if((*next - *itr) == B){
                return 1;
            }
            else{
                break;
            }
        }
    }
    return 0;
}
