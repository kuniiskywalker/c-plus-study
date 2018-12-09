#include <iostream>
using namespace std;

class stack{

    char stck[5];

    int tos;

    public:
        stack();
        void push(char ch);
        char pop();
};

stack::stack(){
    tos = 0;
}

void stack::push(char ch){
    stck[tos] = ch; 
    tos++;
}

char stack::pop(){
    tos--;
    return stck[tos];
}

int main(){
    stack s1;
    char ch;

    s1.push('x');
    ch = s1.pop();

    cout << ch << ".";
}
