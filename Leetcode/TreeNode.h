template <typename T>
class TreeNode
{
public:
    T data;
    TreeNode *left;
    TreeNode *right;

    TreeNode(T data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }

    TreeNode(T data, TreeNode *left, TreeNode *right)
    {
        this->data = data;
        this->left = left;
        this->right = right;
    }

    ~TreeNode()
    {
        delete left;
        delete right;
    }
};