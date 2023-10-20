/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/
void insertAtTail(Node*&tail,Node*&curr){
    tail->next=curr;
    tail=curr;
    
}
Node* sortList(Node *head){
    Node*zerohead=new Node(-1);
    Node*zeroTail=zerohead;
    
    
    Node*onehead=new Node(-1);
    Node*oneTail=onehead;
    
    
    Node*twohead=new Node(-1);
    Node*twoTail=twohead;
    
    
    Node*temp=head;
    while(temp!=NULL){
        if(temp->data==0){
            insertAtTail(zeroTail,temp);
            
        }
        else if(temp->data==1){
            insertAtTail(oneTail,temp);
            
        }
        else if(temp->data==2){
            insertAtTail(twoTail,temp);
            
        }
        temp=temp->next;
        
    }
    
    if(onehead->next!=NULL){
        zeroTail->next=onehead->next;
    
        
        
    }
    else{
        zeroTail->next=twohead->next;
        
        
    }

     oneTail->next=twohead->next;
     twoTail->next=NULL;
     head=zerohead->next;
     delete(zerohead);
     delete(onehead);
     
     delete(twohead);
     
    return head;
    
    
 
    
    
}