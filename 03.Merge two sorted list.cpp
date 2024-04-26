//TC: O(n+m) n, m are lengths of both the linked list
    //SC: O(1)
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        ListNode* ans= new ListNode(0);//dummy value
        ListNode* anshead=ans;
        while(list1!=NULL && list2!=NULL){
            if(list1->val<=list2->val){
                ans->next=list1;
                ans=ans->next;
                list1=list1->next;
            }
            else{
                ans->next=list2;
                ans=ans->next;
                list2=list2->next;
            }
        }
        if(list1!=NULL){
            ans->next=list1;
        }
        if(list2!=NULL){
            ans->next=list2;
        }


        return anshead->next;
    }
