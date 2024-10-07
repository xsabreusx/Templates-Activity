#include <iostream>
#include <string>
using namespace std;

/*
Write a function template named max_two that finds the largest value among two numbers.
Write a function template named max_three that finds the largest value among three numbers.
Write a function template named swap that exchanges the values of two parameters.
*/

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
    else if ( c > a && c > b)
    {
        return c;
    }
    else return 0;
}



int main(){



}