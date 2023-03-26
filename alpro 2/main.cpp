#include <iostream> //Sherard Varasya A11.2022.14450 A11.4212
using namespace std;

int getMax(int a, int b) {
    if (a > b)
        return a;
    else
        return b;
}

int getMin(int a, int b) {
    if (a < b)
        return a;
    else
        return b;
}

int getMaxOfArray(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

int getMinOfArray(int arr[], int n) {
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}

bool isEven(int a) {
    return a % 2 == 0;
}

bool isOdd(int a) {
    return a % 2 == 1;
}

bool isFactor(int a, int b) {
    return b % a == 0;
}

int searchArray(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

bool isFound(int arr[], int n, int key) {
    return searchArray(arr, n, key) != -1;
}

int getSumOfEven(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (isEven(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

int getSumOfOdd(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (isOdd(arr[i])) {
            sum += arr[i];
        }
    }
    return sum;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int num;
    int a;
    int b;

    cout << "Masukkan Bilangan 1 : " << endl;
    cin >> a;
    cout << "Masukkan Bilangan 2 : " << endl;
    cin >> b;
    cout << "Maximum : " << getMax(a, b)<< endl;
    cout << "Minimum : " << getMin(a,b) << endl;
    cout << "Array : " << "{1,2,3,4,5}" << endl;
    cout << "Maximum array : " << getMaxOfArray(arr, n) << endl;
    cout << "Minimum array : " << getMinOfArray(arr, n) << endl;
    cout << "Masukkan num : ";
    cin >> num;
    cout << "Is " << num << " even? " << boolalpha << isEven(num) << endl;
    cout << "Is " << num << " odd? " << boolalpha << isOdd(num) << endl;

    cout << "Is " << num << " a factor of " << n << "? "
         << boolalpha << isFactor(num, n) << endl;

    cout << num << " is found at index " << searchArray(arr, n, num)
         << " of the array." << endl;

    cout << "Is " << num << " found in the array? "
         << boolalpha << isFound(arr, n, num) << endl;

    cout << "Sum of even numbers in array : " << getSumOfEven(arr, n) << endl;
    cout << "Sum of odd numbers in array : " << getSumOfOdd(arr, n) << endl;

    return 0;
}
