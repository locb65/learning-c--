#include <iostream>

using namespace std;



char square[10] = {'o','1','2','3','4','5','6','7','8','9'};

// Function to return game status and check blocks

int checkwin() {
    if (square[1] == square[2] && square[2] == square[3])
    {
        return 1;
    }
    else if (square[4] == square[5] && square[5] == square[6])
    {
        return 1;
    }
    else if (square[7] == square[8] && square[8] == square[9])
    {
        return 1;
    }
    else if (square[1] ==square[4] && square[4] == square[7])
    {
        return 1;
    }
    else if (square[2] == square[5] && square[5] == square[8])
    {
        return 1;
    }
    else if (square[3] == square[6] && square[6] == square[9])
    {
        return 1;
    }
    else if (square[1] == square[5] && square[5] == square[9])
    {
        return 1;
    }
    else if (square[3] == square[5] && square[5] == square[7])
    {
        return 1;
    }
    else if (square[1] != '1' && square[2]!= '2' && square[3]!= '3' 
                && square[4]!='4' && square[5]!='5' && square[6]!='6' 
                && square[7]!='7' && square[8]!='8' && square[9]!='9') {
                    return 0;
    }
    else {
        return 1;
    }
}   

// function to display board with player choices in game state
void board() {
system("cls");
cout << "   | " << square[1] << " | " << square[2] << " | " << square[3] << endl;
cout << "---+---+---" << endl;
cout << "   | " << square[4] << " | " << square[5] << " | " << square[6] << endl;
cout << "---+---+---" << endl;
cout << "   | " << square[7] << " | " << square[8] << " | " << square[9] << endl;
}

int main() {
    board();
}