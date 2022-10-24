#include <iostream>
using namespace std;

int GCD(int a, int b){
    if(b == 0)
    {
        return a;
    }

    return GCD(b, a % b);
}

int main()
{
    int a , b;
    cout << "Enter number a & b : ";
    cin >> a >> b;

    cout << "GCD(" << a << " , " << b << ") = " << GCD(a, b) << endl;
    return 0;
}
