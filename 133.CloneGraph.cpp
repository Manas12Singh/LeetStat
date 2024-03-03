class Solution
{
public:
    Node *dfs(Node *node, map<int, Node *> &m)
    {
        if (m.find(node->val) != m.end())
            return m[node->val];
        m[node->val] = new Node(node->val);
        for (auto &i : node->neighbors)
            m[node->val]->neighbors.push_back(dfs(i, m));
        return m[node->val];
    }
    Node *cloneGraph(Node *node)
    {
        if (node == nullptr)
            return nullptr;
        map<int, Node *> m;
        return dfs(node, m);
    }
};
