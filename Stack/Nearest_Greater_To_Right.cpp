class Solution
{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here

        vector<long long> ans;
        stack<long long> s;
        for(int i=n-1;i>=0;i--)
        {
            if(s.empty())
            {
                ans.push_back(-1);
                s.push(arr[i]);
            }
            else if(s.top()>arr[i])
            {
                ans.push_back(s.top());
                s.push(arr[i]);

            }
            else
            {
                while(!s.empty()&&s.top()<=arr[i])
                {
                    s.pop();
                }
                if(s.empty())
                {
                ans.push_back(-1);
                s.push(arr[i]);
                }
                if(s.top()>arr[i])
                {
                     ans.push_back(s.top());
                     s.push(arr[i]);

                }

            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};