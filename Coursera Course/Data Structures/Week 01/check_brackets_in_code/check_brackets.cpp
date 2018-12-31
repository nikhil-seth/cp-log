#include <iostream>
#include <stack>
#include <string>

struct Bracket {
    Bracket(char type, int position):
        type(type),
        position(position)
    {}

    bool Matchc(char c) {
        if (type == '[' && c == ']')
            return true;
        if (type == '{' && c == '}')
            return true;
        if (type == '(' && c == ')')
            return true;
        return false;
    }

    char type;
    int position;
};

int main() {
    std::string text;
    getline(std::cin, text);

    std::stack <Bracket> opening_brackets_stack;
    for (int position = 0; position < text.length(); ++position) {
        char next = text[position];

        if (next == '(' || next == '[' || next == '{') {
        	Bracket B(next,position+1);
        	opening_brackets_stack.push(B);
        }

        if (next == ')' || next == ']' || next == '}') {
            if(opening_brackets_stack.empty()){
                std::cout<<position+1;
                return 0;
            }
        	Bracket B=opening_brackets_stack.top();
        	if(B.Matchc(next)){
        		opening_brackets_stack.pop();
        	}
	        else{
	        	std::cout<<position+1;
	        	return 0;
	        }
	    }
    }
    if(!opening_brackets_stack.empty()){
    	Bracket B=opening_brackets_stack.top();
    	std::cout<<B.position;
	}
	else
		std::cout<<"Success";
    return 0;
}
