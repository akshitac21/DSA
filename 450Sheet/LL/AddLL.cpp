Node* reverse(Node *head){
        Node *curr = head;
        Node *prev = NULL;
        Node *forward = NULL;
        
        while(curr){
            forward = curr->next;
            curr->next = prev;
            prev = curr;
            curr = forward;
        }
        
        return prev;
    }
    struct Node* addTwoLists(Node* first, Node* second)
    {
        Node *list1 = reverse(first);
        Node *list2 = reverse(second);
        
        Node *dummy = new Node(1);
        Node *temp = dummy;
        
        int carry = 0;
        
        while(list1 || list2 || carry){
            int sum = 0;
            if(list1){
                sum += list1->data;
                list1 = list1->next;
            }
            
            if(list2){
                sum += list2->data;
                list2 = list2->next;
            }
            
            sum += carry;
            carry = sum/10;
            temp->next = new Node(sum%10);
            temp = temp->next;
        }
        
        Node *ans = reverse(dummy->next);
        return ans;
    }
