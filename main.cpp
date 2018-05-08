#include <iostream>

using namespace std;

int Factorial(int);

int main()
{
    int intFactorial = -1;
    int intArg = -1;
    int intSentinel = -1;

    do{
        system("cls");
        cout << "Enter factorial to compute:\t";
        cin >> intArg;
        cout << endl << "Computing " << intArg << "!" << endl;
        intFactorial = Factorial(intArg);
        cout << "\t" << intArg << "! = " << intFactorial << endl;
        cout << endl << "Enter 0 to terminate. Any other number to continue: \t";
        cin >> intSentinel;
    } while(intSentinel != 0);


    return 0;
}

int Factorial(int n){
    int m = -1;

    if(n < 0) return -1;
    if(n == 0) return 1;

    m = n*Factorial(n-1);

    return m;
}
