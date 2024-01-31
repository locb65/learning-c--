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

// int main() {
//     int x, y;
//     int sum;

//     string question1 = "Type a number: ";
//     string question2 = "Type another number: ";

//     cout << question1;
//     cin >> x;
//     cout << question2;
//     cin >> y;
//     sum = x + y;

//     cout << "The Sum of the two numbers picked is: " << sum;
// }

// operators

// +	Addition	Adds together two values	x + y	
// -	Subtraction	Subtracts one value from another	x - y	
// *	Multiplication	Multiplies two values	x * y	
// /	Division	Divides one value by another	x / y	
// %	Modulus	Returns the division remainder	x % y	
// ++	Increment	Increases the value of a variable by 1	++x	
// --	Decrement	Decreases the value of a variable by 1	--x

// =	x = 5	x = 5	
// +=	x += 3	x = x + 3	
// -=	x -= 3	x = x - 3	
// *=	x *= 3	x = x * 3	
// /=	x /= 3	x = x / 3	
// %=	x %= 3	x = x % 3	
// &=	x &= 3	x = x & 3	
// |=	x |= 3	x = x | 3	
// ^=	x ^= 3	x = x ^ 3	
// >>=	x >>= 3	x = x >> 3	
// <<=	x <<= 3	x = x << 3



// int main() {
//     int x = 100 + 50;
//     int y = x + 250;
//     int z = x + y + 200;
//     cout << z;
// }

// int main() {
//     int x = 10;
//     x += 5;
//     cout << x;
// }

// comparison

// int main() {
//     int x = 5;
//     int y = 10;
//     cout << (x < y);
// }

// logical operators

// && 	Logical and	Returns true if both statements are true	x < 5 &&  x < 10	
// || 	Logical or	Returns true if one of the statements is true	x < 5 || x < 4	
// !	Logical not	Reverse the result, returns false if the result is true	!(x < 5 && x < 10)


// Conditionals if...else

// Use if to specify a block of code to be executed, if a specified condition is true
// Use else to specify a block of code to be executed, if the same condition is false
// Use else if to specify a new condition to test, if the first condition is false
// Use switch to specify many alternative blocks of code to be executed

// int main() {
//     int x = 10;
//     int y = 20;
//     if ( x > y) {
//         cout << "x is greater than y";
//     }
//     else {
//            cout << "y is greater than x";
//         }
// }


// int main() {
//     int weight = 150;
//     if (weight < 100) {
//         cout << "You are underweight";
//     }
//     else if (weight > 200) {
//         cout << "You are overweight";
//     }
//     else {
//         cout << "You are at a healthy weight"; 
//     }
// }
 
// Switch case

// int main () {
//     int day = 3;
//     switch (day) {
//         case 1:
//             cout << "Monday";
//             break;
//         case 2:
//             cout << "Tuesday";
//             break;
//         case 3:
//             cout << "Wednesday";
//             break;
//         case 4:
//             cout << "Thursday";
//             break;
//         case 5: 
//             cout << "Friday";
//             break;
//         case 6:
//             cout << "Saturday";
//             break;
//         case 7:
//             cout << "Sunday";
//             break;
//     }
// }

// While loops

int main() {
    int i = 0;
    while (i < 69) {
        cout << i << "\n";
        i++;
    }
}