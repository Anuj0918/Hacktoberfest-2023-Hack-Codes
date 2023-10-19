 Trees are one of the most simplest data structure to use it and very important topic from tech-perspective.
   Traversal in trees can be bfs or dfs. so we will check out both;
 1.Bfs Traversal
Level Order Traversal technique is defined as a method to traverse a Tree such that all nodes present in the same level are traversed completely before traversing the next level.
   We need to visit the nodes in a lower level before any node in a higher level, this idea is quite similar to that of a queue.
   Push the nodes of a lower level in the queue. When any node is visited, pop that node from the queue and push the child of that node in the queue.
This ensures that the node of a lower level are visited prior to any node of a higher level.
  class Solution {
public: 
   vector<int> levelOrder(TreeNode* root) {
        vector<int> ans; 
         if(root == NULL) 
            return ans; 
            queue<TreeNode*> q; 
        q.push(root); 
        while(!q.empty()) {
           TreeNode *temp = q.front(); 
            q.pop(); 
              if(temp->left != NULL) 
                q.push(temp->left); 
            if(temp->right != NULL) 
                q.push(temp->right); 
                
            ans.push_back(temp->val); 
        }
        return ans; 
    }
};
2.Dfs Traversal
DFS (Depth-first search) is a technique used for traversing trees or graphs. 
Here backtracking is used for traversal. In this traversal first, the deepest node is visited and then backtracks to its parent node if no sibling of that node exists.
  (1). . Inorder Traversal :
Traverse the left subtree, i.e., call Inorder(left-subtree)
Visit the root
Traverse the right subtree, i.e., call Inorder(right-subtree)

// C++ program for different tree traversals 
#include <bits/stdc++.h> 
using namespace std; 
struct Node { 
    int data; 
    struct Node *left, *right; 
    Node(int data) 
    { 
        this->data = data; 
        left = right = NULL; 
    } 
}; 
void printInorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first recur on left child */
    printInorder(node->left); 
  
    /* then print the data of node */
    cout << node->data << " "; 
  
    /* now recur on right child */
    printInorder(node->right); 
} 
2.Preorder Traversal :
Visit the root
Traverse the left subtree, i.e., call Preorder(left-subtree)
Traverse the right subtree, i.e., call Preorder(right-subtree)
void printPreorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    /* first print data of node */
    cout << node->data << " "; 
  
    /* then recur on left subtree */
    printPreorder(node->left); 
  
    /* now recur on right subtree */
    printPreorder(node->right); 
} 
3. Postorder Traversal :
Traverse the left subtree, i.e., call Postorder(left-subtree)
Traverse the right subtree, i.e., call Postorder(right-subtree)
Visit the root
void printPostorder(struct Node* node) 
{ 
    if (node == NULL) 
        return; 
  
    // first recur on left subtree 
    printPostorder(node->left); 
  
    // then recur on right subtree 
    printPostorder(node->right); 
  
    // now deal with the node 
    cout << node->data << " "; 
} 
  
