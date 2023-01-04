/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode* l3 = calloc(1, sizeof(struct ListNode));
    struct ListNode* copy = l3;
    
    bool end1 = false;
    bool end2 = false;
    int temp = 0;

    while (true) {
        copy->val = temp;
        temp = 0;
        
        if (!end1) {
            copy->val += l1->val;
            if (l1->next == NULL) end1 = true;
            else l1 = l1->next;
        }

        if (!end2) {
            copy->val += l2->val;
            if (l2->next == NULL) end2 = true;
            else l2 = l2->next;
        }

        if (copy->val > 9) {
            temp = copy->val / 10;
            copy->val = copy->val % 10; 
        }

        if (end1 && end2 && !temp) break;

        copy->next = calloc(1, sizeof(struct ListNode));
        copy = copy->next;
    }
    return l3;
}
