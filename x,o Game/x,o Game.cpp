#include <iostream>
using namespace std;

int main()
{

    char game[3][3] = { {'1','2','3'},{'4','5','6'},{'7','8','9'} };
    int place;

    for (int i = 0; i <= 8; i++)
    {
        // output

        cout << "     |     |     \n";
        cout << "  " << game[0][0] << "  |  " << game[0][1] << "  |  " << game[0][2] << endl;
        cout << "_____|_____|_____\n";
        cout << "     |     |     \n";
        cout << "  " << game[1][0] << "  |  " << game[1][1] << "  |  " << game[1][2] << endl;
        cout << "_____|_____|_____\n";
        cout << "     |     |     \n";
        cout << "  " << game[2][0] << "  |  " << game[2][1] << "  |  " << game[2][2] << endl;
        cout << "     |     |     \n";
        cout << "enter the number you want to play\n";
        
        cin >> place;

        // input

        if (place == 1)
        {
            cout << "( o ) or  ( x )\n";
            cin >> game[0][0];
        }
        else if (place == 2)
        {
            cout << "( o ) or  ( x )\n";
            cin >> game[0][1];
        }
        else if (place == 3)
        {
            cout << "( o ) or  ( x )\n";
            cin >> game[0][2];
        }
        else if (place == 4)
        {
            cout << "( o ) or  ( x )\n";
            cin >> game[1][0];
        }
        else if (place == 5)
        {
            cout << "( o ) or  ( x )\n";
            cin >> game[1][1];
        }
        else if (place == 6)
        {
            cout << "( o ) or  ( x )\n";
            cin >> game[1][2];
        }
        else if (place == 7)
        {
            cout << "( o ) or  ( x )\n";
            cin >> game[2][0];
        }
        else if (place == 8)
        {
            cout << "( o ) or  ( x )\n";
            cin >> game[2][1];
        }
        else if (place == 9)
        {
            cout << "( o ) or  ( x )\n";
            cin >> game[2][2];
        }
        else
        {
            cout << "the number you input is not correct\n";
        }

        // checking

        if (game[0][0] == 'x' && game[0][1] == 'x' && game[0][2] == 'x')
        {
            cout << "x is winne\n";

            break;
        }
        else if (game[1][0] == 'x' && game[1][1] == 'x' && game[1][2] == 'x')
        {
            cout << "x is winne\n";
            break;
        }
        else if (game[2][0] == 'x' && game[2][1] == 'x' && game[2][2] == 'x')
        {
            cout << "x is winne\n";
            break;
        }
        else if (game[2][0] == 'x' && game[1][1] == 'x' && game[0][2] == 'x')
        {
            cout << "x is winne\n";
            break;
        }
        else if (game[0][0] == 'x' && game[1][1] == 'x' && game[2][2] == 'x')
        {
            cout << "x is winne\n";
            break;
        }
        else if (game[0][2] == 'x' && game[1][2] == 'x' && game[2][2] == 'x')
        {
            cout << "x is winne\n";
            break;
        }
        else if (game[0][1] == 'x' && game[1][1] == 'x' && game[2][1] == 'x')
        {
            cout << "x is winne\n";
            break;
        }
        else if (game[0][0] == 'x' && game[1][0] == 'x' && game[2][0] == 'x')
        {
            cout << "x is winne\n";
            break;
        }///////////////////////////////////////////////////////////////////////
        else if (game[0][0] == 'o' && game[0][1] == 'o' && game[0][2] == 'o')
        {
            cout << "o is winne\n";
            break;
        }
        else if (game[1][0] == 'o' && game[1][1] == 'o' && game[1][2] == 'o')
        {
            cout << "o is winne\n";
            break;
        }
        else if (game[2][0] == 'o' && game[2][1] == 'o' && game[2][2] == 'o')
        {
            cout << "o is winne\n";
            break;
        }
        else if (game[2][0] == 'o' && game[1][1] == 'o' && game[0][2] == 'o')
        {
            cout << "o is winne\n";
            break;
        }
        else if (game[0][0] == 'o' && game[1][1] == 'o' && game[2][2] == 'o')
        {
            cout << "o is winne\n";
            break;
        }
        else if (game[0][2] == 'o' && game[1][2] == 'o' && game[2][2] == 'o')
        {
            cout << "o is winne\n";
            break;
        }
        else if (game[0][1] == 'o' && game[1][1] == 'o' && game[2][1] == 'o')
        {
            cout << "o is winne\n";
            break;
        }
        else if (game[0][0] == 'o' && game[1][0] == 'o' && game[2][0] == 'o')
        {
            cout << "o is winne\n";
            break;
        }
        else if (i == 7)
        {
            cout << "they are equal in the game\n";
            break;
        }
    }
}