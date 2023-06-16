#include <iostream>

using namespace std;

int main ()

{
    string username = " admin " ;
    string password = " password " ;
    int attempts = 3;

    while (attempts > 0)
        {
            string inputUsername, inputPassword;

            cout << " Enter username: " ;
            cin >> inputUsername;

            cout << " Enter password: " ;
            cin >> inputPassword;

            if (inputUsername == username && inputPassword == password)
                {
                    cout << " Login successful " ;
                    break;
                }
                else
                    {
                        attempts--;
                        cout << " Incorrect username or password. Attempts left: " << attempts << endl;
                    }
        }
    
    if (attempts == 0)
        {
            cout << " Login failed " ;
        }

    return 0;
}
