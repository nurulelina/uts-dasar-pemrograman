#include <iostream>
using namespace std;

int main()
{
    cout<< "================================== " << endl;
    cout<< "         By NURUL ELINA YULIANI    " << endl;
    cout<< "            A2.1900135             " << endl;
    cout<< "===================================" << endl;
    cout<< endl;
    int X;

    cout << "Masukan nilai X : ";
    cin >> X;
    cout << "\n";

    X = (X < 0) ? -X : X;
    cout << "| X | = " << X;
    cout << "\n \n";

    return 0;
}
