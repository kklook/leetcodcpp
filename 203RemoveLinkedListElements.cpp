class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * node = head;
        ListNode * pr = new ListNode(0);
        pr->next = head;
        ListNode * loction = pr;
        while (node != NULL)
        {
            if (node->val == val)
            {
                pr->next = node->next;
            }
            else
            {
                pr = pr->next;
            }
            node = node->next;
        }
        return loction->next;
    }
};