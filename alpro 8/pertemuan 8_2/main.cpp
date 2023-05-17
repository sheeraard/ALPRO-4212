#include <iostream>
#include <vector>

using namespace std;

//BubbleSort

void bubbleSort(vector<int>& arr){
   int n = arr.size();
   bool swapped;

   for(int i=0;i < n - 1; i++){
    swapped = false;

    for(int j = 0;j < n - i - 1;j++){
        if(arr[j] < arr[j + 1]){
            swap(arr[j], arr[j+1]);
            swapped = true;
            }
        }

    if (!swapped){
        break;
        }
    }
}

// Exchange Sort

void exchangeSort(vector<int>& arr){
    int n = arr.size();

    for(int i=0;i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
        if (arr[i] < arr[j]){
            swap(arr[i], arr[j]);
            }
        }
    }
}

//Cetak Array

void printArray(vector<int>& arr) {
for (int i=0;i < arr.size(); i++){
    cout << arr[i] << "";
    }
    cout << endl;
}
int main(){
    vector<int> A = {1, 1, 2, 3, 4, 5};

    //Bubble Sort
    cout << "Bubble Sort : " << endl;
    cout << "Sebelum pengurutan : ";
    printArray(A);
    bubbleSort(A);
    cout << "Setelah pengurutan : ";
    printArray(A);
    cout<<endl;

    //Exchange Sort
    vector<int> B= {1, 1, 2, 3, 4, 5};
    cout << "Exchange Sort : "<< endl;
    cout << "Sebelum pengurutan : ";
    printArray(B);
    exchangeSort(B);
    cout << "Setelah pengurutan : ";
    printArray(B);

    return 0;
}
