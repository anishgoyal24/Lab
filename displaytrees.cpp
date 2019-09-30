#include<bits/stdc++.h>
using namespace std;
//Create Node Data Type
class node{
 public:
 int data;
 node* left;
 node* right;
 node(int d){
  data=d;
  left = NULL;
  right = NULL;
 }
};
// Function to build tree recursively
node* buildtree(){
 int d;
 cin>>d;
 if(d==-1)
 return NULL;
 node* root = new node(d);
 root->left = buildtree();
 root->right = buildtree();
 return root;
}
// To get the height of tree
int height(node* root){
  if(root == NULL){
   return 0;
  }
  int leftHeight = height(root->left);
  int rightHeight = height(root->right);
  return max(leftHeight,rightHeight)+1;
}
// To print the tree level by level with space
void printBinaryTree(node*root)
{
queue<node*>Q;
Q.push(root);
Q.push(NULL);
int L=height(root);
int middle_space=0;
int forward_space=pow(2,L)-1;
node*Null=new node(100);
for(int i=1;i<=forward_space;i++)
            {
                cout<<" ";
            }
while(L>=0)
    {
        node*temp=Q.front();
        Q.pop();
        if(temp!=Null&&temp->left!=NULL)
           Q.push(temp->left);
        else
            {
                Q.push(Null);
            }
        if(temp!=Null&&temp->right!=NULL)
           Q.push(temp->right);
        else
            {
                Q.push(Null);
            }
        if(temp!=Null)
        cout<<temp->data;
        else
        {
            cout<<" ";
        }
        for(int i=1;i<=middle_space;i++)
        {
            cout<<" ";
        }
        if(Q.front()==NULL)
        {
            Q.pop();
            Q.push(NULL);
            cout<<endl;
            L--;
            middle_space=forward_space;
            forward_space=pow(2,L)-1;
             for(int i=1;i<=forward_space;i++)
            {
                cout<<" ";
            }
        }
    }
}


int main(){
//Create tree
node* root=buildtree();
//Function Call
printBinaryTree(root);
return 0;
}
