#include <iostream>
#include <vector>
#include <string>
#include <cassert>
#include <algorithm>
#include <stack>
using namespace std;

class StackWithMax {
    vector<int> stack;
    vector<int> mstack;
  public:

    void Push(int value) {
        stack.push_back(value);
        if(mstack.empty() || mstack[mstack.size()-1]<=value)
            mstack.push_back(value);
    }

    void Pop() {
        assert(stack.size());
        int t1=stack[stack.size()-1];
        stack.pop_back();
        if(t1==mstack[mstack.size()-1])
            mstack.pop_back();
    }

    int Max() const {
        assert(stack.size());
        return mstack[mstack.size()-1];
    }
};

int main() {
    int num_queries = 0;
    cin >> num_queries;

    string query;
    string value;

    StackWithMax stack;

    for (int i = 0; i < num_queries; ++i) {
        cin >> query;
        if (query == "push") {
            cin >> value;
            stack.Push(std::stoi(value));
        }
        else if (query == "pop") {
            stack.Pop();
        }
        else if (query == "max") {
            cout << stack.Max() << "\n";
        }
        else {
            assert(0);
        }
    }
    return 0;
}