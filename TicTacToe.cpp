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
                && square[7]!='7' && square[8]!='8' && square[9]!='9') 
    {
        return 0;
    }
    else {
        return -1;
    }
}   

// function to display board with player choices in game state
void board() {
    system("cls");
    cout << "\n\n\tTic Tac Toe\n\n";

    cout << "Player 1(x) | Player 2(O)\n\n";
    cout << endl;

    // Drawing board
    cout << "   |   |   " << endl;
    cout << " " << square[1] << " | " << square[2] << " | " << square[3] << " " << endl;
    cout << "   |   |   " << endl;
    cout << "-----------" << endl;
    cout << "   |   |   " << endl;
    cout << " " << square[4] << " | " << square[5] << " | " << square[6] << " " << endl;
    cout << "   |   |   " << endl;
    cout << "-----------" << endl;
    cout << "   |   |   " << endl;
    cout << " " << square[7] << " | " << square[8] << " | " << square[9] << " " << endl;
    cout << "   |   |   " << endl;


}

int main() {
    int player = 1, i, choice;

    char mark;

    do
    {
        board();
        player=(player%2)?1:2;
        // Player input
        cout << "Player " << player << ", enter a number ";
        // assign input to choice variable
        cin >> choice;
        // conditional for X or O based on player number
        mark = (player == 1) ? 'X' : 'O';


        // assigning player choice and mark to square[choice]
        if (choice ==1 && square[1]=='1') {
            square[1] = mark;
        }
        else if (choice == 2 && square[2]=='2') {
            square[2] = mark;
        }
        else if (choice == 3 && square[3]=='3') {
            square[3] = mark;
        }
        else if (choice == 4 && square[4]=='4') {
            square[4] = mark;
        }
        else if (choice == 5 && square[5]=='5') {
            square[5] = mark;
        }
        else if (choice == 6 && square[6]=='6') {
            square[6] = mark;
        }
        else if (choice == 7 && square[7]=='7') {
            square[7] = mark;
        }
        else if (choice == 8 && square[8]=='8') {
            square[8] = mark;
        }
        else if (choice == 9 && square[9]=='9') {
            square[9] = mark;
        }
        else {
            cout << "Invalid Move " ;

            player--;
            cin.ignore();
            cin.get();
        }
        i = checkwin();
        player++;
    }
    // Game Outcome
    while (i == -1);
    board();
    if(i == 1) {
        cout <<"\aCongratulations! Player " << --player << " wins!" << endl;
    }
    else {
        cout <<"\aGame is a Tie!";
    }
    cin.ignore();
    cin.get();
    return 0;
    

}