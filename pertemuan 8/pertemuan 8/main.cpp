#include <iostream>
#include <vector>
using namespace std;

int findsmallEven(const vector<int>&numbers, int& smallEvenIndex){
    int smallEven = -1;
    smallEvenIndex = -1;

    for (int i=0; i < numbers.size(); i++){
        if (numbers[i] % 2 == 0){
            if(smallEvenIndex == -1 || numbers[i] < numbers[smallEvenIndex]){
                smallEven = numbers[i];
                smallEvenIndex= i;
            }
        }
    }
    return smallEven;
}
bool isOdd(int number){
return number % 2 !=0;
}

int main()
{
    vector<int> numbers {6,7,4,3,2};
    int smallEvenIndex = -1;
    int smallEven = findsmallEven(numbers, smallEvenIndex);

    cout << "Nilai genap terkecil :" << smallEven << endl;
    cout<< "Index :" << smallEvenIndex << endl;

    int numberToTest = 9;
    if (isOdd(numberToTest)){
            cout << numberToTest << " adalah bilangan ganjil"<< endl;
    }else{
            cout << numberToTest << " bukan bilangan ganjil" << endl;
    }
    return 0;
}
