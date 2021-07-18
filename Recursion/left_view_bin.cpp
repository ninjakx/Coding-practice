#include <iostream>
#include <unordered_map>
using namespace std;

// Data structure to store a binary tree node
struct Node
{
    int key;
    Node *left, *right;

    Node(int key)
    {
        this->key = key;
        this->left = this->right = nullptr;
    }
};

// Recursive function to traverse the nodes in a preorder fashion
void leftView(Node* root, int level, auto &map)
{
    if (root == nullptr) {
        return;
    }

    // if the level is visited for the first time, insert the current node
    // and level information into the map
    if (map.find(level)==map.end())
        map[level] = root->key;
    leftView(root->left, level + 1, map);
    leftView(root->right, level + 1, map);
}

// Function to print the left view of a given binary tree
int leftView(Node* root)
{
    // create an empty map to store the first node for each level
    unordered_map<int, int> map;

    // traverse the tree and fill the map
    leftView(root, 1, map);

    // iterate through the map and print left view
    for (int i = 1; i <= map.size(); i++) {
        cout << map[i] << " ";
    }
}

int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->right = new Node(4);
    root->right->left = new Node(5);
    root->right->right = new Node(6);
    root->right->left->left = new Node(7);
    root->right->left->right = new Node(8);

    leftView(root);

    return 0;
}
