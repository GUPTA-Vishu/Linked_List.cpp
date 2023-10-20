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

//time complexity is O(n) time and space complexiy is O(n) time.
class Solution {
  bool palindrome(vector<int>&arr){
    int s=0;
    int e=arr.size()-1;
    while(s<=e){
      if(arr[s]!=arr[e]){
        return false;
      }
      s++;
      e--;
      
    }
    return true;

  }
public:
    bool isPalindrome(ListNode* head) {
        vector<int>ans;
        ListNode*temp=head;
        while(temp!=NULL){
          ans.push_back(temp->val);
          temp=temp->next;

        }
       return palindrome(ans);

    }
};