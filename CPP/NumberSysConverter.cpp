#include <iostream>
#include <string.h>

using namespace std;

class NumberSys
{
    int num;
    int convert[32];
    char hexconvert[];

public:
    int Decimaltobinary(int num)
    {
        int a = 0;

        while (num >= 1)
        {
            convert[a] = num % 2;
            num = num / 2;

            if (num >= 1)
            {
                a++;
            }
        }

        for (int j = a; j >= 0; j--)
        {
            cout << convert[j];
        }
    }

    int Decimaltooctal(int num)
    {
        int a = 0;

        while (num >= 1)
        {
            convert[a] = num % 8;
            num = num / 8;

            if (num >= 1)
            {
                a++;
            }
        }

        for (int j = a; j >= 0; j--)
        {
            cout << convert[j];
        }
    }

    void Decimaltohexadecimal(int num)
    {
        int a = 0, temp = 0;

        while (num >= 1)
        {
            temp = num % 16;
            num = num / 16;
            if (temp < 10)
            {
                hexconvert[a] = '0' + temp;
            }

            else
            {
                hexconvert[a] = 'A' + temp - 10;
            }
            a++;
        }

        for (int j = a; j >= 0; j--)
        {
            cout << hexconvert[j];
        }
        cout << endl;
    }
};

int main()
{
    int dec, ch;

    NumberSys ob;

    do
    {
        cout << "\n\nEnter the decimal number:" << endl;
        cin >> dec;

        do
        {
            cout << "\n\nChose the preferred conversion:\n"
                 << endl;
            cout << "1. Decimal to binary" << endl;
            cout << "2. Decimal to octal" << endl;
            cout << "3. Decimal to hexadecimal" << endl;
            cout << "4. Choose different number" << endl;
            cout << "5. Exit" << endl;

            cin >> ch;

            cout << endl;

            switch (ch)
            {
            case 1:
                ob.Decimaltobinary(dec);
                break;

            case 2:
                ob.Decimaltooctal(dec);
                break;

            case 3:
                ob.Decimaltohexadecimal(dec);
                break;
            }
        } while (ch < 5);
    } while (ch < 6);
}