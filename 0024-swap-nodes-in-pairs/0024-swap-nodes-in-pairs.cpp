/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
   ListNode* swapPairs(ListNode* head) {
  if(head==NULL || head->next==NULL){
    return head;
  }
  ListNode* temp=head;
  ListNode* previous=NULL;
  head=temp->next;
  while(temp!=NULL && temp->next !=NULL){
   ListNode* swap1=temp;
   ListNode* swap2=temp->next;
   swap1->next=swap2->next;
   swap2->next=swap1;

  
  if(previous!=NULL){
    previous->next=swap2;
  }
  previous=swap1;
  temp=swap1->next;
  }
  return head;
   }
};