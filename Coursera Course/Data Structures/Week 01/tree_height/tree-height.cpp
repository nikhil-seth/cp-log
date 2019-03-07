#include <bits/stdc++.h>
#if defined(__unix__) || defined(__APPLE__)
#include <sys/resource.h>
#endif

class Node;

class Node {
public:
    int key;
    Node *parent;
    std::vector<Node *> children;

    Node() {
      this->parent = NULL;
    }

    void setParent(Node *theParent) {
      parent = theParent;
      parent->children.push_back(this);
    }
};


int main_with_large_stack_space() {
  std::ios_base::sync_with_stdio(0);
  int n;
  std::cin >> n;
  int posn;
  std::vector<Node> nodes;
  nodes.resize(n);
  int parent_index;
  for (int child_index = 0; child_index < n; child_index++) {
    std::cin >> parent_index;
    if (parent_index >= 0)
      nodes[child_index].setParent(&nodes[parent_index]);
    nodes[child_index].key = child_index;
    if( parent_index == -1)
    	posn=child_index;
  }

  int maxHeight = 0;
  std::queue <int> q1,q2;
  q1.push(posn);
  while(!q1.empty() || !q2.empty())
{	  	maxHeight++;

	while(!q1.empty()){
  	posn=q1.front();
  	q1.pop();
  	for(auto &x:nodes[posn].children)
  		q2.push(x->key);
  	}
  	q1.swap(q2);
  }
  std::cout << maxHeight << std::endl;
  return 0;
}

int main (int argc, char **argv)
{
#if defined(__unix__) || defined(__APPLE__)
  // Allow larger stack space
  const rlim_t kStackSize = 16 * 1024 * 1024;   // min stack size = 16 MB
  struct rlimit rl;
  int result;

  result = getrlimit(RLIMIT_STACK, &rl);
  if (result == 0)
  {
      if (rl.rlim_cur < kStackSize)
      {
          rl.rlim_cur = kStackSize;
          result = setrlimit(RLIMIT_STACK, &rl);
          if (result != 0)
          {
              std::cerr << "setrlimit returned result = " << result << std::endl;
          }
      }
  }

#endif
  return main_with_large_stack_space();
}
