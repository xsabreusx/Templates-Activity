
#include <iostream>
using namespace std;

/*
Write a function template named max_two that finds the largest value among two numbers.
Write a function template named max_three that finds the largest value among three numbers.
Write a function template named swap that exchanges the values of two parameters.
*/

template <typename T>
T max_two (T M, T N) {

    if (M > N) return M;
    else return N;
}

template<typename T, typename U, typename V>
T max_three(T a, U b, V c){
    if (a > b && a > c)
    {
        return a;
    }
    else if ( b > a && b > c)
    {
        return b;
    }
    else return c;
}

template <typename T>
void swapT(T &a, T &b)
{
    T temp = 0;


    cout << "\nFirst value: " << a;
    cout << "\nSecond value: " << b;

    temp = a;
    a = b;
    b = temp;

    cout << "\nFirst value: " << a;
    cout << "\nSecond value: " << b;

}


int main(){

    int a = 3;
    int b = 5;

    cout << "\nTemplate Exercise Running.";
    cout << "\nMax two results: " << max_two (5.6, 6.7);
    cout << "\nMax three results: " << max_three(5.83, 5, 7.1);
    cout << "\nSwap function test: "; 
    swapT(a, b);

}