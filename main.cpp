#include <iostream>

using namespace std;

// This function receives a couple of whole numbers and returns them after swapping their values
void exchange(int & x, int & y)
{
    // declare a variable that holds whole numbers
    int temp;
    // assign to temp the value of one of the parameters
    temp = x;
    x=y;
    // assign to the other parameter the value of temp
    y = temp;
}

int main()
{
// declare variables that hold whole numbers
    int val1, val2;
    cout << "Please enter two whole numbers: ";
    // store the values gotten from the keyboard val1 and val2 respectively
    cin >> val1 >> val2;
    // call the function to exchange their values (pass it val 1 and vale2)
    exchange(val1,val2);
    // display their new content
    cout << "The new content of the variables is " << val1 << " and " << val2 << endl;

    return 0;
}