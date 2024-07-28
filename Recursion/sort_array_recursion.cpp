class Solution {
public:
    vector < int > insert(vector < int > & nums, int temp)
{
    if (nums.size() == 0 | | nums[nums.size() - 1] <= temp)
{
    nums.push_back(temp);
return nums;
}

int x = nums[nums.size() - 1];
nums.pop_back();
vector < int > final = insert(nums, temp);
final.push_back(x);
return final;
}

vector < int > sortArray(vector < int > & nums) {
if (nums.size() == 1)
    {
        vector < int > one;
    one.push_back(nums[0]);
    return one;
    }
    int
    n = nums[nums.size() - 1];
    nums.pop_back();
    vector < int > oneless = sortArray(nums);

    return insert(oneless, n);
}
};