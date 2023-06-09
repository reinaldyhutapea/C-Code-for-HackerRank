# include <iostream>

using std::cout;
using std::endl;

int findFactorial(int number);

int main()
{
    cout << "The factorial of 4 is " << findFactorial(4) << endl;
    return 0;
}

int findFactorial(int number)
{
    if(number == 0)
    return 1;
    else
    return number * findFactorial(number - 1);
}