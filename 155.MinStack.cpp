struct L
{
    int val, m;
    L *next;
    L(int x) : val(x), m(x), next(nullptr) {}
    L(int x, L *next) : val(x), m(min(x, next->m)), next(next) {}
};

class MinStack
{
public:
    L *head;
    MinStack()
    {
        head = nullptr;
    }

    void push(int val)
    {
        if (head == nullptr)
            head = new L(val);
        else
            head = new L(val, head);
    }

    void pop()
    {
        head = head->next;
    }

    int top()
    {
        return head->val;
    }

    int getMin()
    {
        return head->m;
    }
};
