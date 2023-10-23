/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
      //ListNode* is used to get the actaul memmory address of the particular nODE OF LINKED LIST.
        map<ListNode*,bool>mp1;
        ListNode*temp1=headA;
        while(temp1!=NULL){
          //to insert we have specify the key value in map
          mp1[temp1]=true;
          temp1=temp1->next;

        }
      ListNode*temp2=headB;
      while(temp2!=NULL){
        //agr temp2 end tak nhi pahuch paya iska matlab mid me he wo kahi mil gaya to usko return kr denge 
        if(mp1.find(temp2)!=mp1.end()){
         return temp2;

        }
        temp2=temp2->next;
      }
      return NULL;

    }
};