#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
    start:
    char arr[3][3] = {{' ',' ',' '},{' ',' ',' '},{' ',' ',' '}};
    int counter = 1;
    while(!0)
    {
        system("cls");
        cout << "     |     |     \n";
        cout << "  " << arr[0][0] <<"  |" << "  " << arr[0][1] <<"  |" << "  " << arr[0][2] <<"  \n";
        cout << "_____|_____|_____\n";
        cout << "     |     |     \n";
        cout << "  " << arr[1][0] <<"  |" << "  " << arr[1][1] <<"  |" << "  " << arr[1][2] <<"  \n";
        cout << "_____|_____|_____\n";
        cout << "     |     |     \n";
        cout << "  " << arr[2][0] <<"  |" << "  " << arr[2][1] <<"  |" << "  " << arr[2][2] <<"  \n";
        cout << "     |     |     \n";
        
        if (counter%2==1)
        {  
            counter ++;
            int x, y;
            cout << "PLAYER X, ENTER YOUR COORDINATES\n";
            cout << "row(0-2):\n";
            cin >> x;
            cout << "column(0-2):\n";
            cin >> y;
            if (x>=0 && x<=2 && y>=0 && y<=2 && arr[x][y]==' ')
                arr[x][y] = 'X';
            else
                {
                    cout << "WARNING! USE UNPOPULATED SLOTS ONLY AND KEEP THE COORDINATES IN RANGE\n";
                    cout << "PLAYER X, ENTER YOUR COORDINATES\n";
                    cout << "row(0-2):\n";
                    cin >> x;
                    cout << "column(0-2):\n";
                    cin >> y;
                    if (x>=0 && x<=2 && y>=0 && y<=2 && arr[x][y]==' ')
                        arr[x][y] = 'X';
                };


            system("cls");
            cout << "     |     |     \n";
            cout << "  " << arr[0][0] <<"  |" << "  " << arr[0][1] <<"  |" << "  " << arr[0][2] <<"  \n";
            cout << "_____|_____|_____\n";
            cout << "     |     |     \n";
            cout << "  " << arr[1][0] <<"  |" << "  " << arr[1][1] <<"  |" << "  " << arr[1][2] <<"  \n";
            cout << "_____|_____|_____\n";
            cout << "     |     |     \n";
            cout << "  " << arr[2][0] <<"  |" << "  " << arr[2][1] <<"  |" << "  " << arr[2][2] <<"  \n";
            cout << "     |     |     \n";

            if ((arr[0][0]==arr[0][1] && arr[0][1]=='X' && arr[0][1]==arr[0][2]) ||
                (arr[1][0]==arr[1][1] && arr[1][1]=='X' && arr[1][1]==arr[1][2]) ||
                (arr[2][0]==arr[2][1] && arr[2][1]=='X' && arr[2][1]==arr[2][2]) ||
                (arr[0][0]==arr[1][0] && arr[1][0]=='X' && arr[1][0]==arr[2][0]) ||
                (arr[0][1]==arr[1][1] && arr[1][1]=='X' && arr[1][1]==arr[2][1]) ||
                (arr[0][2]==arr[1][2] && arr[1][2]=='X' && arr[1][2]==arr[2][2]) ||
                (arr[0][0]==arr[1][1] && arr[1][1]=='X' && arr[1][1]==arr[2][2]) ||
                (arr[0][2]==arr[1][1] && arr[1][1]=='X' && arr[1][1]==arr[2][0]) )
                {
                    cout << "PLAYER X WINS\n";
                    Sleep(3000);
                    system("cls");
                    goto start;

                }
            else if (arr[0][0]!=' ' &&
                     arr[0][1]!=' ' &&
                     arr[0][2]!=' ' &&
                     arr[1][0]!=' ' &&
                     arr[1][1]!=' ' &&
                     arr[1][2]!=' ' &&
                     arr[2][0]!=' ' &&
                     arr[2][1]!=' ' &&
                     arr[2][2]!=' ')
                     {
                        cout << "NOBODY WINS\n";
                        Sleep(3000);
                        goto start;

                     };
        };
        if (counter%2==0)
        {
            counter ++;
            int x, y;
            cout << "PLAYER O, ENTER YOUR COORDINATES\n";
            cout << "row(0-2):\n";
            cin >> x;
            cout << "column(0-2):\n";
            cin >> y;
            if (x>=0 && x<=2 && y>=0 && y<=2 && arr[x][y]==' ')
                arr[x][y] = 'O';
            else
                {
                    cout << "WARNING! USE UNPOPULATED SLOTS ONLY AND KEEP THE COORDINATES IN RANGE\n";
                    cout << "PLAYER O, ENTER YOUR COORDINATES\n";
                    cout << "row(0-2):\n";
                    cin >> x;
                    cout << "column(0-2):\n";
                    cin >> y;
                    if (x>=0 && x<=2 && y>=0 && y<=2 && arr[x][y]==' ')
                        arr[x][y] = 'O';
                };

            system("cls");
            cout << "     |     |     \n";
            cout << "  " << arr[0][0] <<"  |" << "  " << arr[0][1] <<"  |" << "  " << arr[0][2] <<"  \n";
            cout << "_____|_____|_____\n";
            cout << "     |     |     \n";
            cout << "  " << arr[1][0] <<"  |" << "  " << arr[1][1] <<"  |" << "  " << arr[1][2] <<"  \n";
            cout << "_____|_____|_____\n";
            cout << "     |     |     \n";
            cout << "  " << arr[2][0] <<"  |" << "  " << arr[2][1] <<"  |" << "  " << arr[2][2] <<"  \n";
            cout << "     |     |     \n";

            if ((arr[0][0]==arr[0][1] && arr[0][1]=='O' && arr[0][1]==arr[0][2]) ||
                (arr[1][0]==arr[1][1] && arr[1][1]=='O' && arr[1][1]==arr[1][2]) ||
                (arr[2][0]==arr[2][1] && arr[2][1]=='O' && arr[2][1]==arr[2][2]) ||
                (arr[0][0]==arr[1][0] && arr[1][0]=='O' && arr[1][0]==arr[2][0]) ||
                (arr[0][1]==arr[1][1] && arr[1][1]=='O' && arr[1][1]==arr[2][1]) ||
                (arr[0][2]==arr[1][2] && arr[1][2]=='O' && arr[1][2]==arr[2][2]) ||
                (arr[0][0]==arr[1][1] && arr[1][1]=='O' && arr[1][1]==arr[2][2]) ||
                (arr[0][2]==arr[1][1] && arr[1][1]=='O' && arr[1][1]==arr[2][0]) )
                {
                    cout << "PLAYER O WINS\n";
                    Sleep(3000);
                    system("cls");
                    goto start;

                }
            else if (arr[0][0]!=' ' &&
                     arr[0][1]!=' ' &&
                     arr[0][2]!=' ' &&
                     arr[1][0]!=' ' &&
                     arr[1][1]!=' ' &&
                     arr[1][2]!=' ' &&
                     arr[2][0]!=' ' &&
                     arr[2][1]!=' ' &&
                     arr[2][2]!=' ')
                     {
                        cout << "NOBODY WINS\n";
                        Sleep(3000);
                        goto start;

                     };
        };




    };





    

    return 0;
};