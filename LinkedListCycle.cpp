class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *first = head;
        while (first && first->next)
        {
            head = head->next;
            first = first->next->next;

            if (head == first)
                return true;
        }
        return false;
    }
};