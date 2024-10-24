#include <iostream>
using namespace std;
void InOutFast() {
    ios::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
}
struct Node{
    int val;
    Node *next;
    Node(int val, Node* next) : val(val), next(next) {}
};

template <class T> 
class Stack{
private:
    int s_size = 0;
    Node *head = nullptr;

public:
    void pop(){
        Node *temp = head;
        head  = head->next;
        delete temp;
        s_size--;
    }

    void push(int x){
        head = new Node(x, head);
        s_size++;
    }

    int top() const {
        return head->val;
    }

    bool empty() const {
        return !s_size;
    }

    int size() const{
        return s_size;
    }
};

int main(){
InOutFast();
    Stack<int> st;
    int n,t,x;
    cin>>t;
    for(int i=0;i<t;i++){
    cin>>n;
    if(n==1){
        cin>>x;
        st.push(x);
    }
    else if (n==2){
        if(st.size())
    st.pop();}
    else if(n==3){
        if(!st.size())
        cout<<"Empty!\n";
        else
        cout<<st.top()<<"\n";
    }
    }
    return 0;

}