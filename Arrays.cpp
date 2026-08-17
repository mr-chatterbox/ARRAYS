#include<iostream>
using namespace std;

int main(){

    int num[15];

    cout << num[10] << endl;

    int second[3] = {5,7,11};
    
    cout << "Value at 2nd index is " << second[2] << endl;

    int third[15] = {2,7};

    int n = 15;

    for (int i = 0; i<n; i++){

        cout << third[i] << " ";
    }
        cout << endl;
    int fourth[10] = {0};
    n = 10;

    for (int i = 0; i<n; i++){

        cout << fourth[i] << " ";
    }
            cout << endl;
    int fifth[10] = {1};
    n = 10;

    for (int i = 0; i<n; i++){

        cout << fifth[i] << " ";
    }

return 0;

}