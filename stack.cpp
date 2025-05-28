#include<iostream>
using namespace std;
class stack{
    //int * arr;
    //int top;
    public:
    int * arr;
    int top;
    int n;
    stack()
        {
            arr=new int[n];
            top=-1;
        }
    void push(int x)
    {
        if(top==n-1)
        {
            cout<<"Stack is overflowed";
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop()
    {
        if(top==-1)
        {
            cout<<"No element in stack";
            return;
        }
        top--;
    }
    int Top()
    {
        if(top==-1)
        {
            cout<<"No element in stack";
            return -1;
        }
        return arr[top];
    }
    bool empty()
    {
        return top==-1;
    }
    bool full()
    {
        return top==n-1;
    }
};
int main()
{
    stack st;
    st.push(20);
    st.push(10);
    st.push(60);
    st.push(90);
    cout<<"Top element is:"<<st.Top()<<endl;
    st.pop();
    st.pop();
    cout<<"Top element in stack is:"<<st.Top()<<endl;
    st.pop();
    st.pop();
    cout<<"no element in stack"<<st.empty()<<endl;
    return 0;
}