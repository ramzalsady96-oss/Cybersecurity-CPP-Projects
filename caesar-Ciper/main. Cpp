#include <iostream>
#include <string>
using namespace std;

class CaesarCipher
{
private:
    int key;

public:
    // Constructor
    CaesarCipher(int k)
    {
        key = k;
    }

    // دالة التشفير
    string encrypt(string text)
    {
        string result = "";

        for (int i = 0; i < text.length(); i++)
        {
            char ch = text[i];

            if (isupper(ch))
                result += char((ch - 'A' + key) % 26 + 'A');

            else if (islower(ch))
                result += char((ch - 'a' + key) % 26 + 'a');

            else
                result += ch;
        }

        return result;
    }

    // دالة فك التشفير
    string decrypt(string text)
    {
        string result = "";

        for (int i = 0; i < text.length(); i++)
        {
            char ch = text[i];

            if (isupper(ch))
                result += char((ch - 'A' - key + 26) % 26 + 'A');

            else if (islower(ch))
                result += char((ch - 'a' - key + 26) % 26 + 'a');

            else
                result += ch;
        }

        return result;
    }
};

int main()
{
    string message;
    int key, choice;

    cout << "===== Caesar Cipher (OOP) =====" << endl;
    cout << "1. Encrypt" << endl;
    cout << "2. Decrypt" << endl;
    cout << "Choose: ";
    cin >> choice;

    cin.ignore();

    cout << "Enter message: ";
    getline(cin, message);

    cout << "Enter key: ";
    cin >> key;

    // إنشاء كائن من الكلاس
    CaesarCipher cipher(key);

    if (choice == 1)
        cout << "Encrypted Text: " << cipher.encrypt(message);

    else if (choice == 2)
        cout << "Decrypted Text: " << cipher.decrypt(message);

    else
        cout << "Invalid choice!";

    return 0;
}