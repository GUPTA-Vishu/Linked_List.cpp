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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode*dummy=new ListNode();
        ListNode*p=dummy;
        ListNode*temp1=list1;
        ListNode*temp2=list2;
        while(temp1!=NULL && temp2!=NULL){
          if(temp1->val<=temp2->val){
            p->next=temp1;
            p=p->next;
            temp1=temp1->next;
          }

          else {
            p->next=temp2;
            p=p->next;
            temp2=temp2->next;
          }
        }

        while(temp1!=NULL){
          p->next=temp1;
          p=p->next;
          temp1=temp1->next;

        }

        while(temp2!=NULL){
          p->next=temp2;
          p=p->next;
          temp2=temp2->next;

        }

        p->next=NULL;
        return dummy->next;



    }
};