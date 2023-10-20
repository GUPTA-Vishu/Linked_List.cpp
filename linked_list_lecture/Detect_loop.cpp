class Solution
{
    public:
    //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {  
        map<Node*,bool>Nodemap;
        
       if(head==NULL){
           return  true;
           
       }
       Node*temp=head;
       while(temp!=NULL){
           if(Nodemap.find(temp)!=Nodemap.end()){
               return true;
           }
           Nodemap[temp]=true;
           temp=temp->next;
           
           
       }
       return false;
       
    }
};