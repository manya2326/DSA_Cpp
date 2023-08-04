class Solution{
public:
    int getNthFromLast(Node *head, int n)
    {
         int size = 0;
         Node* temp = head;
         while(temp!=NULL){
             size++;
             temp = temp->next;

         }
         int a= size-n+1;
         temp = head;
         int c = 0;
         while(temp!=NULL){
             c++;
             if(c==a){
                 return temp->data;
             }
             temp = temp->next;
         }
         return -1;
    }
};

