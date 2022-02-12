template <typename T>
class TreeNode
{
public:
    T val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(T val)
    {
        this->val = val;
        left = NULL;
        right = NULL;
    }

    TreeNode(T val, TreeNode *left, TreeNode *right)
    {
        this->val = val;
        this->left = left;
        this->right = right;
    }

    ~TreeNode()
    {
        delete left;
        delete right;
    }
};