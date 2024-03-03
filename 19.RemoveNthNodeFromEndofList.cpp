class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr)
            return nullptr;
        ListNode *t1=head,*t2=head;
        while(n-->0)
            t1=t1->next;
        if(t1==nullptr)
            return head->next;
        while(t1->next!=nullptr)
            t1=t1->next,t2=t2->next;
        t2->next=t2->next->next;
        return head;
    }
};
