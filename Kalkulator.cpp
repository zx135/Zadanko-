//To jest plik na którym bedziemy działać
#include <iostream>
using namespace std;

int main()
{
    char znak;
    float l1, l2;

    cout << "Podaj znak + lub - lub * lub /: ";
    cin >> znak;

    cout << "Podaj dwie zmienne:  ";
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

        case '*':
            cout << l1 * l2;
            break;
        

    }

    return 0;
}