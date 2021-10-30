#include <iostream> 
#include <stack> 
using namespace std; 
int main() 
{ 
    stack<int> intStack; 
    
    intStack.push(16); 
    intStack.push(8); 
    intStack.push(20); 
    intStack.push(3); 
    cout << "Line 11: The top element of intStack: "
        << intStack.top() << endl; 
    intStack.pop(); 
    cout << "Line 13: After the pop operation, the "
        << " top element of intStack: "
        << intStack.top() << endl; 
    cout << "Line 14: intStack elements: "; 
    while (!intStack.empty()) 
    { 
        cout << intStack.top() << " "; 
        intStack.pop(); 
    } 
    cout << endl; 
    return 0; 
}
