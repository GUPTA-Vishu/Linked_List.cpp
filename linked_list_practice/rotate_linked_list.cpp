class Solution {
  
  
public:
    ListNode* rotateRight(ListNode* head, int k) {
      if(head==NULL){
        return head;
      }

     ListNode*temp=head;
     int len=1;

     while(temp->next!=NULL){
       temp=temp->next;
       len++;

     }
     temp->next=head;
     
     k=k%len;
     k=len-k;
     while(k!=0){
       temp=temp->next;
       k--;
       
     }
     head=temp->next;
     temp->next=NULL;
     return head;

    



        
    }
};