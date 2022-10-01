#include <iostream>

using namespace std;
double square(double x)
{

    return x * x;
}

void print_square(double x)

{
   // cout << "the square of " << x << ;
    cout<<square(x);// << "n";
}
int main()
{
   // std::cout << "Hello World!\n";

    //cout<<square(12.2);

    print_square(12.234);
}
