class Solution
{
public:
    void flatten(TreeNode *root)
    {
        if (root == nullptr)
            return;
        flatten(root->left);
        flatten(root->right);
        if (root->left != nullptr)
        {
            TreeNode *temp = root->left;
            while (temp->right != nullptr)
                temp = temp->right;
            temp->right = root->right;
            root->right = root->left;
            root->left = nullptr;
        }
    }
};
