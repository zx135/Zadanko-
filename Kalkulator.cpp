//To jest plik na którym bedziemy działać
#include <iostream>
using namespace std;

int main()
{
    char znak;
    float l1, l2;

    cout << "Enter operator either + or - or * or /: ";
    cin >> znak;

    cout << "Enter two operands: ";
    cin >> l1 >> l2;

    switch(znak)
    {
        case '+':
            cout << l1+l2;
            break;

        case '-':
            cout << l1 - l2;
            break;
        default:
            cout << "Błędny znak operacji";
            break;

        

    }

    return 0;
}