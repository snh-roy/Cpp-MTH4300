// do-while loop is a variant of while loop. 
// This loop will execute the code block once, before checking if the condition is true, then it will repeat the loop as long as the condition is true.

#include <iostream>
using namespace std;

//for loop version
int main() {
    int sum = 1; 

    for (int i = 0; i <= 100; ++i) {
        if (i % 4 == 0)
            sum += 2;
        else if (i % 4 == 1)
            sum -= 6;
        else if (i % 4 == 2)
            sum *= 3;
        else if (i % 4 == 3)
            sum /= 2;
    }
    cout << sum << endl;
    return 0;
}
//do-while loop version

int main(){
    int sum = 1;
    int i = 0;

    do {
        if (i % 4 == 0)
            sum += 2;

        else if (i%4 ==1)
            sum -= 6;

        else if (i%4 == 2)
            sum *= 3;

        else if (i % 4 == 3)
            sum /= 2;

        ++i;
    } while (i <= 100);
    
    cout << sum << endl; 
    return 0;
}