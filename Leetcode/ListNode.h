template <typename T>
class ListNode
{
public:
    T val;
    ListNode *next;

    ListNode(T val)
    {
        this->val = val;
        next = NULL;
    }

    ListNode(T val, ListNode *next)
    {
        this->val = val;
        this->next = next;
    }

    ~TreeNode()
    {
        delete next;
    }
};