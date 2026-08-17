#include <iostream>
using namespace std;

void printArray (int arr[] , int size){

    cout << "Printing the array" << endl;

    for (int i = 0 ; i<size ; i++){

        cout << arr[i] << " ";
    }
}
int main(){

    int num[15] = {2,7};
    int n = 15;
    printArray (num , 15);

    int name[10] = {0};
    n = 10;
    printArray(name , 10);

return 0;

}