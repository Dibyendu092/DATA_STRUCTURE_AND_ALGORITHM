#include <bits/stdc++.h>

using namespace std;

int maxlevel=0;

struct Node{
    int key;
    Node *left = NULL;
    Node *right = NULL;
    Node(int data){
        key = data;
        left = right = NULL;
    }
};

bool ChildrenSumProperty(Node *root){
    if(root == NULL){
        return true;
    }
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    int sum=0;
    if(root->left != NULL){
        sum += root->left->key;
    }
    if(root->right != NULL){
        sum += root->right->key;
    }
    return (root->key == sum && ChildrenSumProperty(root->left) && ChildrenSumProperty(root->right));
}

/*right View Of A Binary Tree*/
void RightViewOfBinaryTree(Node *root, int level){
    if(root == NULL){
        return;
    }
    if(maxlevel<level){
        cout<<root->key<<" ";
        maxlevel = level;
    }
    RightViewOfBinaryTree(root->right, level+1);
    RightViewOfBinaryTree(root->left, level+1);
    
}
/*Left View Of A Binary Tree*/
void LeftViewOfBinaryTree(Node *root, int level){
    if(root == NULL){
        return;
    }
    if(maxlevel<level){
        cout<<root->key<<" ";
        maxlevel = level;
    }
    LeftViewOfBinaryTree(root->left, level+1);
    LeftViewOfBinaryTree(root->right, level+1);
}
/*Find Maimum Node From Tree*/

int MaximumNode(Node *root){
    if(root == NULL){
        return 0;
    }
    else{
        return max(root->key, max(MaximumNode(root->left), MaximumNode(root->right)));
    }
}
/*Size Of A Binar Tree*/

int SizeOfBinaryTree(Node *root){
    if(root == NULL){
        return 0;
    }
    else{
        return(1+SizeOfBinaryTree(root->left)+SizeOfBinaryTree(root->right));
    }
}

/*Print The Node At K distance*/
void PrintKdistance(Node *root , int l){
    if(root == NULL){
        return;
    }
    if(l == 0){
        cout<<root->key<<" ";
    }
    else{
        PrintKdistance(root->left, l-1);
        PrintKdistance(root->right, l-1);
    }
    
}

/* Height Of A Binary Tree*/
int HeightOfBinaryTree(Node *root){
    if(root == NULL){
        return 0;
    }
    else{
        return 1+max(HeightOfBinaryTree(root->left), HeightOfBinaryTree(root->right));
    }
}

/*Level Order Traversal Or Bredth First Search */
void LevelOrder(Node * root){
    if(root == NULL){
        return;
    }
    queue<Node *> q;
    q.push(root);
    while(q.empty() == false){
        Node *curr = q.front();
        q.pop();
        cout<<curr->key<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    
}
/*Level order traversal Line By Line*/
void LevelOrderLineByLine(Node * root){
    if(root == NULL){
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while(q.size()>1){
        Node *curr = q.front();
        q.pop();
        if(curr == NULL){
            cout<<"\n";
            q.push(NULL);
            continue;
        }
        cout<<curr->key<<" ";
        if(curr->left != NULL){
            q.push(curr->left);
        }
        if(curr->right != NULL){
            q.push(curr->right);
        }
    }
    
}

/*Inorder Traversal*/

void Inorder(Node *root){
    if(root != NULL){
        Inorder(root->left);
        cout<<root->key<<" ";
        Inorder(root->right);
    }
    
}
/*PreOrder Traversal */
void Preorder(Node *root){
    if(root != NULL){
        cout<<root->key<<" ";
        Inorder(root->left);
        Inorder(root->right);
    }
    
}
/*Post Order Traversal */

void Postorder(Node *root){
    if(root != NULL){
        Inorder(root->left);
        Inorder(root->right);
        cout<<root->key<<" ";
    }
    
}

int main()
{
    /*For All OtherInput*/
    /*
    Node *root = new Node(10);
    root->left = new Node(20);
    root->left->left = new Node(40);
    root->left->right = new Node(50);
    root->right = new Node(30);
    root->right->right = new Node(60);
    root->right->right->left = new Node(70);
    root->right->right->right = new Node(80);
    */
    /*leftView INPUT*/
    /*
    Node *root = new Node(10);
    root->left = new Node(50);
    root->right = new Node(60);
    root->right->left = new Node(70);
    root->right->right = new Node(20);
    root->right->left->right = new Node(8);*/
    
    /*right View Input (When Print Left View Comment Out Right View Function And Vice Versa. Other Wise it Will Not Show)*/
    /*Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    root->right->right->right = new Node(8);*/
    
    /*children sum property input*/
    Node *root = new Node(20);
    root->left = new Node(8);
    root->right = new Node(12);
    root->left->left = new Node(3);
    root->left->right = new Node(5);
    
    Inorder(root);
    cout<<endl;
    Preorder(root);
    cout<<endl;
    Postorder(root);
    cout<<endl;
    LevelOrder(root);
    cout<<endl;
    LevelOrderLineByLine(root);
    cout<<endl;
    int k =HeightOfBinaryTree(root);
    cout<<k<<endl;
    PrintKdistance(root, 2);
    cout<<endl;
    int m = SizeOfBinaryTree(root);
    cout<<m<<endl;
    cout<<MaximumNode(root)<<endl;
    /*
    LeftViewOfBinaryTree(root, 1);
    cout<<endl;
    RightViewOfBinaryTree(root, 1);
    cout<<endl;*/
    if(ChildrenSumProperty(root)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    
    return 0;
}
