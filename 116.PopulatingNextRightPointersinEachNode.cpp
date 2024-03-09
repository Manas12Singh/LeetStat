class Solution
{
public:
    void helper(Node *root, Node *next)
    {
        if (root == nullptr)
            return;
        root->next = next;
        helper(root->left, root->right);
        helper(root->right, (next) ? next->left : next);
    }
    Node *connect(Node *root)
    {
        helper(root, nullptr);
        return root;
    }
};
