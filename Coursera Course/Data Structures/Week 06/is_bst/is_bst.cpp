#include <bits/stdc++.h>
using namespace std;

struct Node {
  int key;
  int left;
  int right;

  Node() : key(0), left(-1), right(-1) {}
  Node(int key_, int left_, int right_) : key(key_), left(left_), right(right_) {}
};

bool IsBinarySearchTree(const vector<Node>& tree,int left=INT_MIN,int right=INT_MAX,int index=0) {
  if(index==-1 || tree.size()==0)
    return true;
  if(tree[index].key<left || tree[index].key > right)
    return false;
  return IsBinarySearchTree(tree,tree[index].key,right,tree[index].right) && IsBinarySearchTree(tree,left,tree[index].key,tree[index].left);
}

int main() {
  int nodes;
  cin >> nodes;
  vector<Node> tree;
  for (int i = 0; i < nodes; ++i) {
    int key, left, right;
    cin >> key >> left >> right;
    tree.push_back(Node(key, left, right));
  }
  if (IsBinarySearchTree(tree)) {
    cout << "CORRECT" << endl;
  } else {
    cout << "INCORRECT" << endl;
  }
  return 0;
}
