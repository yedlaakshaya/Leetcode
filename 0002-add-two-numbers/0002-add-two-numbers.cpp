class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode*temp1=l1;
        ListNode*temp2=l2;
        ListNode*head=NULL;
        ListNode*temp=NULL;
        int carry=0;
        while(temp1!=NULL || temp2!=NULL||carry!=0){
            int sum=carry;
            if(temp1!=NULL){
                sum=sum+temp1->val;
                temp1=temp1->next;
            }
            if(temp2!=NULL){
                sum=sum+temp2->val;
                temp2=temp2->next;
            }
            carry=sum/10;
            int value=sum%10;

            ListNode*newnode=new ListNode(value);

            if(head==NULL){
                head=newnode;
                temp=newnode;
            }
            else{
                temp->next=newnode;
                temp=temp->next;
            }
        }
         return head;  
        }
    
};