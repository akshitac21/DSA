class Solution
{
    public:
     //Function to find first node if the linked list has a loop.
    int findFirstNode(Node* head)
    {
        if(head == NULL) return -1;
        
        Node* slow = head;
        Node* fast = head;
        
        while(fast != NULL && fast->next != NULL){
            slow = slow->next;
            fats = fast->next;
            
            if(fast->next){
                fast = fast->next;
            }
            
            if(fast == slow) break;
        }
        
        if(slow != fast) return -1;
        
        slow = head;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        
        return fast->data;
    }
};
