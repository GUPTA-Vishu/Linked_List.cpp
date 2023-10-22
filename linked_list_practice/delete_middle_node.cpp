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
    ListNode* deleteMiddle(ListNode* head) {
        int n=getLength(head);
        int i=0;
        ListNode*prev=NULL;
        ListNode*curr=head;
        if(n==1){
          return NULL;

        }

        while(i<n/2){
          prev=curr;
          curr=curr->next;
          i++;
        }
        prev->next=curr->next;
        return head;

    }
};