#include <stack>
#include <string>
#include <iostream>

void stackStr(std::stack<std::string> stackd) {
    std::string input;
    std::cin >> input;
    
    while(true) {
    if(input == "pop") {
        stackd.pop();
    }
    else if(input == "top") {
        std::cout << stackd.top() << std::endl;
    }
    else if(input == "push") {
        std::string stck;
        std::cin >> stck;
        stackd.push(stck);
        std::cout << "stack: added: " << stck << std::endl;
    }
    else if(input == "stack") {
        auto x = stackd;
        while(!x.empty()) {
            std::cout << x.top() << std::endl;
        }   
    }
    else {
            std::cout << "command dont found" << std::endl;
    }
}
}
void stackDouble(std::stack<double> st) {
    std::string input;
    std::cin >> input;
    
    while(true) {
    if(input == "pop") {
        st.pop();
    }
    else if(input == "top") {
        std::cout << st.top() << std::endl;
    }
    else if(input == "push") {
        double stck;
        std::cin >> stck;
        st.push(stck);
        std::cout << "stack: added: " << stck << std::endl;
    }
    else if(input == "stack") {
        auto x = st;
        while(!x.empty()) {
            std::cout << x.top() << std::endl;
        }   
    }
    else {
            std::cout << "command dont found" << std::endl;
    }
}
}
void stackInt(std::stack<int> st) {
    std::string input;
    std::cin >> input;
    
    while(true) {
    if(input == "pop") {
        st.pop();
    }
    else if(input == "top") {
        std::cout << st.top() << std::endl;
    }
    else if(input == "push") {
        int stck;
        std::cin >> stck;
        st.push(stck);
        std::cout << "stack: added: " << stck << std::endl;
    }
    else if(input == "stack") {
        auto x = st;
        while(!x.empty()) {
            std::cout << x.top() << std::endl;
        }   
    }
    else {
            std::cout << "command dont found" << std::endl;
    }
}
}

void stack() {
    std::string input;
    std::getline(std::cin, input);

    if(input == "make stack str") {
        std::stack<std::string> stack;
        stackStr(stack);
    }
    else if(input == "make stack int") {
        std::stack<int> stack;
    }
    else if(input == "make stack double") {
        std::stack<double> stack;
        stackDouble(stack);
    }

}

int main() {
    stack();
}