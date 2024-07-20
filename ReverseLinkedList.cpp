class Solution
{
public:
    ListNode *reverseList(ListNode *head)
    {
        ListNode *temp = NULL;
        while (head)
        {
            ListNode *curr = head->next;
            head->next = temp;
            temp = head;
            head = curr;
        }
        return temp;
    }
};