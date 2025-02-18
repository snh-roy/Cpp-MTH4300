// switch-case is another conditional structure that may or may not execute certain statements.
// The switch-case statement evaluates an expression, then compares it to the values in the case statements.
//Instead of if-else, switch-case to make the code more readable and efficient.

#include <iostream>
using namespace std;

//if-else version

int main() {
    int month;
    cin >> month;

    if (month==4 || month==6 || month==9 || month==11)
        std::cout << "The month has 30 days\n";
    else if(month==1 || month==3 || month==5 || month==7 || month==8 || month==10 || month==12)
        std::cout << "The month has 31 days\n";
    else if
        std::cout << "The month has either 28 days or 29 days\n";
    else
        std::cout << "Don't know that month\n";
    
    return 0;
}


//switch-case version

int main(){
    cin >> month;
    switch(month) {
        case 4:
        case 6:
        case 9:
        case 11:
            std::cout << "The month has 30 days\n";
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            std::cout << "The month has 31 days\n";
            break;
        case 2:
            std::cout << "The month has either 28 days or 29 days\n";
            break;
        default:
            std::cout << "Don't know that month\n";
    return 0;
    }
}