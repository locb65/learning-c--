#include <iostream>
using namespace std;

// Hello World Function

// int main() {
//     cout << "Hello World! \n";
//     cout << "I am learning C++";
//     return 0;
// }

// Variables

// Need to declare type followed by var name and value

// int main() {
//     int myNum = 10;
//     cout << myNum;
// } 

// adding variables

// int main() {
//     int x = 15;
//     int y = 24;
//     int sum = x + y;
//     cout << sum;

// }

// declaring multiple vars

// int main() {
//     int x = 5, y = 10, z = 25;
//     cout << x + y + z;
// }

// or 

// int main() {
//     int x, y, z;
//     x = y = z = 50;

//     cout << x + y + z;
// }

// int main() {
//     const int myNum = 15;
//     cout << myNum;

// }

// ask for input

// int main() {
//     int x;
//     cout << "Type a number: ";
//     cin >> x;
//     cout << "Your number is: " << x;
// }

int main() {
    int x, y;
    int sum;
    string question1 = "Type a number: ";
    string question2 = "Type another number: ";
    cout << question1;
    cin >> x;
    cout << question2;
    cin >> y;
    sum = x + y;
    cout << "The Sum of the two numbers picked is: " << sum;
}