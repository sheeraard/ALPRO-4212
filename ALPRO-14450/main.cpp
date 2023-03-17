#include <iostream> //SHERARD VARASYA A11.2022.14450
using namespace std;

int Penjumlahan(int a, int b) {
return a+b;
}

int Pengurangan(int a, int b){
return a-b;
}

int Total(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    return total;

}

double rata(int arr[], int size) {
    int total = 0;
    for (int i = 0; i < size; i++) {
        total += arr[i];
    }
    double avg = (double) total / size;
    return avg;
}
int main() {
    int a,b,i;
    int arr[] = {1, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);


    cout << "\nMasukkan Nilai a : "; cin >> a;
    cout << "\nMasukkan Nilai b : "; cin >> b;
    cout << "\nHasil Penjumlahan : " << Penjumlahan(a, b) << endl;
    cout << "\nHasil Pengurangan : " << Pengurangan(a, b) << endl;
    int tot = Total(arr,size);
    double avg = rata(arr, size);
    cout << arr<< endl;
    cout << "\nTotal : " << tot << endl;
    cout << "\nRata-rata : " << avg << endl;

return 0;
}
