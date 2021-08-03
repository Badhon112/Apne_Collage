#include<bits/stdc++.h>
using namespace std;
struct BstNode
{
    int data;
    BstNode* left;
    BstNode* right;
};
BstNode* GetNode(int data){
    BstNode* NewNode=new BstNode();
    NewNode->data=data;
    NewNode->left=NewNode->right=NULL;
    return NewNode;
}

BstNode* Insert(BstNode* root, int data){
    if(root=NULL){
        root=GetNode(data);
    }
    else if(data<=root->data){
        root->left=Insert(root->left, data);
    }
    else {
        root->right=Insert(root->right, data);
    }
    return root;
}
bool Search(BstNode* root, int data){
    if(root==NULL){
        return false;
    }
    else if(root->data=data){
        return true;
    }
    else if(data<=root->data){
       return Search(root->left, data);
    }
    else{
       return Search(root->right,data);
    }

}

int main(){
    BstNode* root;
    root=NULL;
    Insert(root,10);
    Insert(root,20);
    Insert(root,5);
    Insert(root,26);
    Insert(root,15);
    Insert(root,40);
    Insert(root,50);
    int number;
    cout<<"Enter a number to found: "<<endl;
    cin>>number;
    if(Search(root,number)==true) cout<<"Founded"<<endl;
    else{
        cout<<"Not Founded"<<endl;
    }



}