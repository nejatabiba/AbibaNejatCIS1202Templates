// Nejat Abiba
// CIS 1202 800
// April 22, 2024


#include <iostream>

using namespace std;

int half(const int num);
template <class T> T half(const T& num);

int main()
{
    double a = 7.0;
    float b = 5.0f;
    int c = 3;

    cout << half(a) << endl;
    cout << half(b) << endl;
    cout << half(c) << endl;

}

template <class T> T half(const T& num) {
    return num / 2;
}

int half(const int num) {
    double result = static_cast<double>(num)/2;
    return round(result);
}