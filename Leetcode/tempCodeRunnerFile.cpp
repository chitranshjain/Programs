bool canBeIncreasing(vector<int> &nums)
{
    bool valid = false;
    for (int i = 0; i < nums.size(); i++)
    {
        bool innerValid = true;
        for (int j = 0; j < nums.size() - 1; j++)
        {
            if (i == j)
            {
                if (i != 0)
                {
                    if (nums[i] > nums[j + 1])
                    {
                        innerValid = false;
                        break;
                    }
                }
            }
            else if (nums[j] > nums[j + 1])
            {
                innerValid = false;
                break;
            }
        }

        if (innerValid)
        {
            valid = true;
            break;
        }
    }

    return valid;
}