
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2 ==NULL){
            return list1;
        }
        ListNode*head=NULL;
        ListNode*temp=NULL;
        ListNode* newnode=NULL;
        while(list1!=NULL && list2!=NULL){
            if(list1->val <=list2->val){
                newnode=list1;
               list1=list1->next;
                }
                else{
                    newnode=list2;
                    list2=list2->next;
                    }
                     if(head == NULL){
        head=newnode;
        temp=newnode;

        }
        else{
            temp->next=newnode;
            temp=temp->next;
        }
        }
      
        
    
    if(list1!=NULL){
        temp->next=list1;

    }
    if(list2!=NULL){
        temp->next=list2;
    }
    return head;
    }
};