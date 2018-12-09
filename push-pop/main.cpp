#include <iostream>
using namespace std;

#define SIZE 5

class stack{

    char stck[SIZE];

    int tos;

    public:
        stack();
        void push(char ch);
        char pop();
        int length();
};

stack::stack(){
    tos = 0;
}

void stack::push(char ch){
    if(tos == SIZE) {
        cout << "tos is full";
        return;
    }
    stck[tos] = ch; 
    tos++;
}

char stack::pop(){
    if(tos < 0) {
        cout << "tos is empty";
        return 0;
    }
    tos--;
    return stck[tos];
}

int stack::length(){
    int i = 0;
    while(stck[i]){
        i++;
    }
    return i;
}

int main(){
    stack s1;
    int i;

    s1.push('a');
    s1.push('b');
    s1.push('c');
    s1.push('d');
    s1.push('e');
    s1.push('f');

    for(i = 0; i < s1.length(); i++){
        cout << s1.pop() << ".";
    }
}
