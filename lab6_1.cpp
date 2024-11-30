#include <iostream>

using namespace std;

int main()
{
    int Num = 0;
    int EvenNum = 0;
    int OddNum = 0;

    while (true)
    {
        cout << "Enter an integer: ";
        cin >> Num;
        if (Num == 0)
        {
            break;
        }
        if (Num % 2 == 0)
        {
            EvenNum++;
        }
        else
        {
            OddNum++;
        }
    }
    cout << "Number of even numbers = " << EvenNum << "\n";
    cout << "Number of odd numbers = " << OddNum << "\n";
    return 0;
}