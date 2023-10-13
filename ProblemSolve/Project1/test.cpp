#include <iostream>
#include <map>
#include <vector>
using namespace std;

struct Node {
    int data;
    struct Node* left;
    struct Node* right;
};
Node* root = NULL;
Node* MakeBTreeNode(int value) {
    Node* nd = new Node;
    nd->data = value;
    nd->left = NULL;
    nd->right = NULL;
    return nd;
}
void InsertRecur(Node* r, Node* node) {
    if (root == NULL) root = node;
    else if (node->data < r->data) {
        if (r->left == NULL) r->left = node;
        else InsertRecur(r->left, node);
    }
    else {
        if (r->right == NULL) r->right = node;
        else InsertRecur(r->right, node);
    }
}
void PostOrder(Node* r) {
    if (r->left != NULL) PostOrder(r->left);
    if (r->right != NULL) PostOrder(r->right);
    cout << r->data << endl;
}
int main()
{
    cin.tie(NULL);
    cout.tie(NULL);
    ios::sync_with_stdio(false);

    int value;
    while (cin >> value) {
        //if (value == 0) break;
        InsertRecur(root, MakeBTreeNode(value));
    }
    PostOrder(root);
    return 0;
}