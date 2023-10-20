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
  ListNode*getmiddle(ListNode*&head){
    ListNode*slow=head;
    ListNode*fast=head->next;
    while(fast!=NULL && fast->next!=NULL){
      fast=fast->next->next;
       slow=slow->next;

    }
    return slow;

  }


  ListNode*getMerge(ListNode*&left,ListNode*&right){
    ListNode*dummy=new ListNode();
    ListNode*ptr=dummy;
    ListNode*temp1=left;
    ListNode*temp2=right;
    while(temp1!=NULL && temp2!=NULL){
      if(temp1->val<=temp2->val){
        ptr->next=temp1;
        ptr=ptr->next;
        temp1=temp1->next;

      }
      else{
        ptr->next=temp2;
        ptr=ptr->next;
        temp2=temp2->next;
      }
    }
    while(temp1!=NULL){
      ptr->next=temp1;
      ptr=ptr->next;
      temp1=temp1->next;

    }
     while(temp2!=NULL){
      ptr->next=temp2;
      ptr=ptr->next;
      temp2=temp2->next;
      
    }
    ptr->next=NULL;
    return dummy->next;


  }
public:
    ListNode* sortList(ListNode* head) {
      if(head==NULL || head->next==NULL){
        return head;

      }
      ListNode*mid=getmiddle(head);
      ListNode*left=head;
      ListNode*right=mid->next;
      mid->next=NULL;
      
      //recursive call 
      left=sortList(left);
      right=sortList(right);
       
       //merge two sorted linked list
       ListNode*ans=getMerge(left,right);
       return ans;



        
    }
};