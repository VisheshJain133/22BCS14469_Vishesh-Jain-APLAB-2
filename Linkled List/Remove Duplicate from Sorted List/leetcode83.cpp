class Solution {
public:
   ListNode* deleteDuplicates(ListNode* head) {
     
        if(head == NULL || head->next == NULL) return head;
        ListNode* temp = head;
        
        
        while(temp->next != NULL) {
            if(temp->val == temp->next->val) {
                ListNode* temp1 = temp->next;
                temp->next = temp->next->next;
                delete temp1;
            } else {
                temp = temp->next;
            }
        }
        
        return head;
     }
