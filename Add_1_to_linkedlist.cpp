/**
 * Definition of linked list:
 *
 * class Node {
 * public:
 *      int data;
 *      Node *next;
 *      Node() {
 *          this->data = 0;
 *          this->next = NULL;
 *      }
 *      Node(int data) {
 *          this->data = data;
 *          this->next = NULL;
 *      }
 *      Node (int data, Node *next) {
 *          this->data = data;
 *          this->next = next;
 *      }
 * };
 *
 *************************************************************************/
Node*reverse(Node*head){
    if(head==NULL){
        return NULL;

    }
    Node*prev=NULL;
    Node*curr=head;
    Node*forward=NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;

    }
    return prev;
    

}
Node *addOne(Node *head)
{
   head=reverse(head);
   Node*temp=head;
   int carry=0;
   bool f=true;
   Node*prev=NULL;


   while(temp!=NULL){
       int sum=temp->data+carry;
       if(f==true)
       {
           sum+=1;
           f=false;


       }
       if(sum>9)
       {
           temp->data=0;
           carry=1;
       }
       else
       {
           temp->data=sum;
           carry=0;

       }
           prev=temp;
           temp=temp->next;
   }

   if(carry!=0)
   {
           Node*a=new Node(carry);
           a->next=NULL;
           prev->next=a;

    }

   return reverse(head);
   

}
