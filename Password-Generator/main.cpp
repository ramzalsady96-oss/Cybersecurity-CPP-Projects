#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

class PasswordGenerator
{
private:
    string username;
    string symbols = "!@#$%^&*";
    string numbers = "0123456789";

public:

    void setUsername()
    {
        cout << "Enter username: ";
        cin >> username;
    }

    string generatePassword()
    {
        string password = username;

        // نضيف أرقام ورموز بشكل عشوائي
        for (int i = 0; i < 4; i++)
        {
            int numIndex = rand() % numbers.length();
            int symIndex = rand() % symbols.length();

            password += numbers[numIndex];
            password += symbols[symIndex];
        }

        return password;
    }

    void showPassword()
    {
        cout << "Generated Strong Password: "
             << generatePassword() << endl;
    }
};

int main()
{
    srand(time(0));

    PasswordGenerator p;

    p.setUsername();
    p.showPassword();

    return 0;
}
