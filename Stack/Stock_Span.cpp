
class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
        //Your code here
      vector<int> ans;
      stack<int> temp;
      temp.push(-1);
      for(int i=0;i<n;i++)
      {
          if(temp.top()==-1)
            {
                ans.push_back(i+1);
                temp.push(i);
            }
            else if(price[i]<price[temp.top()])
            {
                ans.push_back(i-temp.top());
                temp.push(i);
            }
            else
            {
                while(price[i]>=price[temp.top()] && temp.top()!=-1)
                {
                    temp.pop();
                }
                if(temp.top()==-1)
                 {
                    ans.push_back(i+1);
                    temp.push(i);
                 }
                 else
                 {
                      ans.push_back(i-temp.top());
                         temp.push(i);
                 }
            }
      }

      return ans;
    }