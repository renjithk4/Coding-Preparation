
class Solution{
public:

    void insertatend(stack<int> &St,int temp)
    {
        if(St.empty())
        {
            St.push(temp);
            return;
        }
        int x=St.top();
        St.pop();
        insertatend(St,temp);
        St.push(x);
        return;

    }

    void Reverse(stack<int> &St){
        if(St.empty())
            return;

        int temp = St.top();
        St.pop();
        Reverse(St);

        insertatend(St,temp);
        return;
    }
};