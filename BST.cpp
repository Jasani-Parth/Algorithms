#include <iostream>
#include <stdlib.h>
using namespace std;
struct Node
{
      int data;
      Node *left;
      Node *right;
};
Node *create(int item)
{
      Node *node = new Node;
      node->data = item;
      node->left = node->right = NULL;
      return node;
}

void inorder(Node *root)
{
      if (root == NULL)
            return;

      inorder(root->left);
      cout << root->data << "   ";
      inorder(root->right);
}

void preorder(Node *root)
{
      if (root == NULL)
            return;

      cout << root->data << "   ";
      preorder(root->left);
      preorder(root->right);
}

void postorder(Node *root)
{
      if (root == NULL)
            return;

      postorder(root->left);
      postorder(root->right);
      cout << root->data << "   ";
}

Node *findMinimum(Node *cur)
{
      while (cur->left != NULL)
      {
            cur = cur->left;
      }
      return cur;
}
Node *insertion(Node *root, int item)
{
      if (root == NULL)
            return create(item);
      if (item < root->data)
            root->left = insertion(root->left, item);
      else
            root->right = insertion(root->right, item);

      return root;
}

void search(Node *&cur, int item, Node *&parent)
{
      while (cur != NULL && cur->data != item)
      {
            parent = cur;

            if (item < cur->data)
                  cur = cur->left;
            else
                  cur = cur->right;
      }
}

Node* deletion(Node *&root, int item)
{
      preorder(root) ; cout << endl ;
      if ( root == NULL ) return NULL ;

      root->left = deletion(root->left,item) ;
      root->right = deletion(root->right,item) ;

      if( root->data < item )

            return root->right ;  

      return root ;      
}

int main()
{
      Node *root = NULL;

      root = insertion(root, 7);
      root = insertion(root, 3);
      root = insertion(root, 12);
      root = insertion(root, 1);
      root = insertion(root, 6);
      root = insertion(root, 13);
      root = insertion(root, 9);
      root = insertion(root,0) ;
      root = insertion(root,2) ;
      root = insertion(root,4) ;
      root = insertion(root,8) ;
      root = insertion(root,11) ;
      root = insertion(root,15) ;
      root = insertion(root,5) ;
      root = insertion(root,10) ;
      root = insertion(root,14) ;

      root = deletion(root,11) ;    
      inorder(root) ; cout << endl ;
      postorder(root) ; cout << endl ;
      preorder(root) ; cout << endl;      
}