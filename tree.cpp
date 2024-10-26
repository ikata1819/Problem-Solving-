#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define S string
#define V vector
#define Us unordered_set
#define Um unordered_map
#define len length
struct node
{
    int data;
    node * left;
    node * right;
    node(int value):data(value),left(nullptr),right(nullptr) {}

};
node *insertnode()
{
    cout<<"Enter data\n";
    int data;
    cin>>data;
    if(data==-1)
    {
        return nullptr;
    }
    node *newn=new node(data);
    cout<<"left "<<data<<endl;
    newn->left=insertnode();
    cout<<"right "<<data<<endl;
    newn->right=insertnode();
    return newn;

}
void inorder(node *root)
{
    if(root==nullptr)
    {
        return;
    }
    stack <node*> s;
    node *c=root;
    while(c!=nullptr||!s.empty())
    {
        while(c!=nullptr)
        {
            s.push(c);
            c=c->left;
        }
        c=s.top();
        s.pop();
        cout<<c->data<<endl;
        c=c->right;
    }
}

void postorder(node *root)
{
    if(root == nullptr)
        return;
    stack<node*> s1, s2;
    s1.push(root);
    while (!s1.empty())
    {
        node* temp = s1.top();
        s1.pop();
        s2.push(temp);
        if (temp->left)
            s1.push(temp->left);
        if (temp->right)
            s1.push(temp->right);
    }
    while (!s2.empty())
    {
        node* temp = s2.top();
        s2.pop();
        cout << temp->data << endl;
    }
}

void preorder(node *root)
{
    if (root == nullptr)
        return;
    stack<node*> s;
    s.push(root);
    while (!s.empty())
    {
        node* temp = s.top();
        s.pop();
        cout << temp->data << endl;
        if (temp->right)
            s.push(temp->right);
        if (temp->left)
            s.push(temp->left);
    }
}

int main()
{
    node *root =nullptr;
    root=insertnode();
    cout << "Inorder Traversal:" << endl;
    inorder(root);
    cout << "Postorder Traversal:" << endl;
    postorder(root);
    cout << "Preorder Traversal:" << endl;
    preorder(root);

    return 0;
}
