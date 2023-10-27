ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* dummy = new ListNode(0); // create a dummy node to hold the result
    ListNode* curr = dummy; // create a pointer to the current node in the result list
    int carry = 0; // initialize the carry to 0
    while (l1 || l2 || carry) { // loop until both input lists and the carry are exhausted
        int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry; // calculate the sum of the current nodes and the carry
        carry = sum / 10; // calculate the carry for the next iteration
        curr->next = new ListNode(sum % 10); // create a new node with the sum modulo 10
        curr = curr->next; // move the current node pointer to the new node
        l1 = l1 ? l1->next : nullptr; // move the pointer for the first input list to the next node
        l2 = l2 ? l2->next : nullptr; // move the pointer for the second input list to the next node
    }
    return dummy->next; // return the head of the result list (skipping the dummy node)
}