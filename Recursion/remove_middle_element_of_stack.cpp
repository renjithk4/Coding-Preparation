class Solution {
  public:
    // Function to delete middle element of a stack.

    void helper(stack<int>& s, int original,int current)
    {
        if(current==(original+1)/2)
        {
            s.pop();
            return;
        }
        int temp=s.top();
        s.pop();
        helper(s,original,current-1);
        s.push(temp);
    }

    void deleteMid(stack<int>& s, int sizeOfStack) {
        // code here..
        helper(s,sizeOfStack,sizeOfStack);
    }
};