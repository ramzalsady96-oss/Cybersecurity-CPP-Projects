#include <iostream>
#include <string>

using namespace std;

class PasswordChecker
{
private:
    string password;

public:
    void setPassword()
    {
        cout << "Enter password: ";
        cin >> password;
    }

    void checkStrength()
    {
        bool hasUpper = false;
        bool hasLower = false;
        bool hasDigit = false;
        bool hasSymbol = false;

        int length = password.length();

        for (char c : password)
        {
            if (c >= 'A' && c <= 'Z')
                hasUpper = true;

            else if (c >= 'a' && c <= 'z')
                hasLower = true;

            else if (c >= '0' && c <= '9')
                hasDigit = true;

            else
                hasSymbol = true;
        }

        int score = 0;

        if (length >= 8) score++;
        if (hasUpper) score++;
        if (hasLower) score++;
        if (hasDigit) score++;
        if (hasSymbol) score++;

        cout << "\n=============================\n";
        cout << " Password Analysis Result";
        cout << "\n=============================\n";

        cout << "Score: " << score << "/5\n";

        cout << "Strength: ";

        if (score <= 2)
            cout << "WEAK";
        else if (score <= 4)
            cout << "MEDIUM";
        else
            cout << "STRONG";

        cout << "\n\nMissing Requirements:\n";

        bool complete = true;

        if (length < 8)
        {
            cout << "- Password should be at least 8 characters.\n";
            complete = false;
        }

        if (!hasUpper)
        {
            cout << "- Missing uppercase letter.\n";
            complete = false;
        }

        if (!hasLower)
        {
            cout << "- Missing lowercase letter.\n";
            complete = false;
        }

        if (!hasDigit)
        {
            cout << "- Missing number.\n";
            complete = false;
        }

        if (!hasSymbol)
        {
            cout << "- Missing special character.\n";
            complete = false;
        }

        if (complete)
        {
            cout << "None. Your password meets all basic requirements.\n";
        }

        cout << "=============================\n";
    }
};

int main()
{
    PasswordChecker checker;

    checker.setPassword();
    checker.checkStrength();

    return 0;
}