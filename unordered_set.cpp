#include<bits/stdc++.h>
using namespace std;
// unordered_set
struct AB
{
    int alpha,beta;
    AB(int a=0,int b=0){
        alpha=a;
        beta=b;
    }
    bool operator==(const AB a) const{
        return (a.alpha==alpha && beta==a.beta)||(alpha==a.beta && beta==a.alpha);
    }
};

class comp{
    public:
    size_t operator()(const AB a) const{
        return hash<int>()(a.alpha)^((hash<int>()(a.beta<<1)));
    }
    
};

struct Node{
    static bool HasSamePosition(const Node& a, const Node& b);
};

struct NodeEqual
{
    bool operator()(const Node& a, const Node& b) { return Node::HasSamePosition(a, b); }
};
int main()
{
    unordered_set<AB,comp> st;
    AB a,b(2,1);
    st.insert(a);
    a.alpha=1;
    a.beta=2;
    st.insert(a);  
    cout<<(st.find(b)==st.end());

    std::unordered_set<Node, std::hash<Node>, NodeEqual> closedlist();
    return 0;
}