#include <iostream>
using namespace std;

int main()
{

    int array[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(array) / sizeof(array[0]);

    double median;
    if (n % 2 == 0) {
        median = (array[n / 2 - 1] + array[n / 2]) / 2.0;
    }
    else {
        median = array[n / 2];
    }

    cout << "Median of the Array: " << median << endl;

    return 0;
}