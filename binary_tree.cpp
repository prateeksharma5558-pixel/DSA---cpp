#include<iostream>
#include<vector>
#include<queue>
using namespace std;
class node {
    public:
    int data;
    node* left;
    node* right;
    node(int val) {
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
node* buildtree(vector<int> preorder) {
    idx++;
    if(preorder[idx] == -1) {
        return NULL;
    }
    node* root = new node(preorder[idx]);
    root->left = buildtree(preorder);
    root->right = buildtree(preorder);
    return root;
}
int main() {
    vector<int> preorder = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};
    node* root = buildtree(preorder);
    cout << root->data << endl;
    return 0;
}