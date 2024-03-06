class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *f = head, *s = head;
        if (f == nullptr || f->next == nullptr)
            return false;
        do
        {
            f = f->next->next;
            s = s->next;
        } while (f != nullptr && f->next != nullptr && s != f);
        return f != nullptr && f->next!=nullptr;
    }
};
