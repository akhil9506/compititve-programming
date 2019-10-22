ListNode* Solution::mergeTwoLists(ListNode* A, ListNode* B) {
    ListNode *head,*temp1,*temp2;
        temp1 = A;
        temp2 = B;
        ListNode d = *A;
    ListNode*ptr;
    ptr = &d;
    head = ptr;
    while(temp1!=NULL&temp2!=NULL){
        if(temp1->val<temp2->val){
            ptr->next = temp1;
            temp1= temp1->next;
        }
        else{
            ptr->next = temp2;
            temp2 = temp2->next;
        }
        ptr = ptr->next;
    }
    if(temp1==NULL){
        ptr->next = temp2;
    }
    else{
        ptr->next = temp1;
    }
    head = head->next;
    return head;

}
