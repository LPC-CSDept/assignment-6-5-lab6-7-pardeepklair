//

#include <iomanip>
#include <iostream>
using namespace std;

// complete two functions
// swap() ; to swap all three values like (a, b, c) to (c, a, b)
//              This function will use swaptwo().

// swaptwo() ; to swap two values (a, b) to (b, a)


void getinput(int &n1, int &n2) {
    cout << "Enter Number 1: " << endl;
    cin >> n1;
    cout << "Enter Number 2: " << endl;
    cin >> n2;

}

void swap(int &n1, int &n2) {
    int temp_val;
    n1 = temp_val;
    n2 = n1;
    n2 = temp_val;

}


void getinput(int &n1, int &n2, int &n3) {
    cout << "Enter Number 1: " << endl;
    cin >> n1;
    cout << "Enter Number 2: " << endl;
    cin >> n2;
    cout << "Enter Number 3: " << endl;
    cin >> n3;   

}

void swap(int &n1, int &n2, int &n3) {
    n1 = n1 + n2 + n3;

    n2 = n1 - (n2+n3);
    n3 = n1 - (n2+n3);
    n1 = n1 - (n2+n3);   

}