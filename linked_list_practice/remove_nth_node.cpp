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
  int getLength(ListNode*head){
    int cnt=0;
    ListNode*temp=head;
    while(temp!=NULL){
      cnt++;
      temp=temp->next;


    }
    return cnt;


  }
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int k=getLength(head);
        int i=1;
        int pos=k-n+1;
        if(i==pos){
          head=head->next;
          return head;

        }
        ListNode*prev=NULL;
        ListNode*curr=head;

        while(i<pos){
          prev=curr;
          curr=curr->next;
          i++;
        }
        prev->next=curr->next;
        return head;
        

    }
};