#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector <int> numbers = {5,7,1,2,3,4};

    sort(numbers.begin(), numbers.end());

    cout << "Vector elements: ";
    for(int num : numbers){

        cout << num << " ";
    }
    cout << endl;


    return 0;
}