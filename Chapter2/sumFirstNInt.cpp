/** Write a recursive function that will compute the 
 * sum of the first n integers in an array of at least
 * n integers.
 * Hint: Begin with the nth integer.
*/

#include <iostream>
using namespace std;

void sumFirstNInt(int* arr, int size, int& sum) {
    sum += arr[size - 1];
    if(size <= 1) {
        return;
    }

    return sumFirstNInt(arr, size - 1, sum);
}

int main() {
    int arr[10];
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = 0;
    cout << "Please enter up to " << size << " values to the array (-1 to stop): "; 

    int i = 0;
    int input;

    while(i < size && cin >> input && input != -1) {
        arr[i] = input;
        ++i;
    }
    size = i; // set size to actual number of numbers entered.

    cout << "\nGetting the sum of the first " << size << " integers. " << endl;
    sumFirstNInt(arr, size, sum);
    cout << "The sum is: " << sum << endl;
    

    return 0;
}