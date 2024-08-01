class Solution {
public:

    void solve(vector<vector<int>> &ans,vector<int> ip, vector<int> op)
    {
        if(ip.size()==0)
        {
            ans.push_back(op);
            return;
        }
        vector<int> op1=op;
        vector<int> op2=op;
        op2.push_back(ip[0]);
        ip.erase(ip.begin()+0);
        solve(ans,ip,op1);
        solve(ans,ip,op2);
        return;
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> op;
        solve(ans,nums,op);
        return ans;
    }
};