// struct ListNode {
//     int val;
//     struct ListNode *next;
// };

struct ListNode* middleNode(struct ListNode* head) {
    // Initialize two pointers...each starrting from the head 
    struct ListNode* pointer1 = head;
    struct ListNode* pointer2 = head;

    // base condition...if head = null then 
    if(head==NULL) return NULL;
    else{
        while(pointer2!=NULL && pointer2->next != NULL){
            pointer2 = pointer2->next->next;
            pointer1 = pointer1->next;
        }
        return pointer1;
    }

    
}