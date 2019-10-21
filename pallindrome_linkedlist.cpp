int Solution::lPalin(ListNode* A){
    int count =0;
    auto temp = A;
    while(temp != NULL){
        temp = temp->next;
        count++;
    }
    //cout<<count<<endl;
    int n = (count+1)/2+1;
    //cout<<n<<endl;
    temp = A;
    int k=0;
    while(k<n-2&&temp!=NULL){
        temp = temp ->next;
        k++;
    }
    auto middle = temp;
    if(temp->next!=NULL){
    temp = temp->next;
    }
    else if(A->val==temp->val){
        return 1;
    }
    else{
        return 0;
    }
     auto prev = temp;
    //temp = temp->next;
    if(temp->next!=NULL){
    temp = temp->next;
    }
    else if(A->val==temp->val){
        return 1;
    }
    else{
        return 0;
    }
   //cout<<temp->val;
   auto after = temp->next;
    while(after != NULL){
        temp->next = prev;
        prev = temp;
        temp = after;
        after = after->next;
    }
    temp->next = prev;
    middle->next->next = NULL;
    middle->next = temp;
    temp = A;
    while(middle->next!=NULL){
        middle = middle ->next;
        if(middle->val!=temp->val){
            return 0;
        }
        temp = temp ->next;
    }
    return 1;
}
