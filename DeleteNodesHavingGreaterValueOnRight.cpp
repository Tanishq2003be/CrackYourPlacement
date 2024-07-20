class Solution
{
public:
    Node *compute(Node *head)
    {
        // your code goes here

        if (!head || !head->next)
            return head;

        Node *nextnode = compute(head->next);

        if (nextnode->data > head->data)
            return nextnode;
        head->next = nextnode;

        return head;
    }
};