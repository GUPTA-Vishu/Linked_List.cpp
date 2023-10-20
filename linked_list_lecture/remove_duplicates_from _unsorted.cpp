class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     if(head==NULL || head->next==NULL){
         return head;
         
     }
     Node*curr=head;
     
     while(curr!=NULL){
         Node*temp=curr;
         
         
         while(temp->next!=NULL){
             if(temp->next->data==curr->data){
                 Node*nodetoDelete=curr->next;
                 curr->next=temp->next->next;
                 delete(nodetoDelete);
                 
             }
             else{
                 temp=temp->next;
                 
             }
         }
         curr=curr->next;
         
     }
     return head;
     
    }
};
