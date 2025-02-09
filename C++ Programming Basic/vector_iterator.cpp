#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector <int> numbers = {1,2,3,4,5};

    cout << "Vector elements: ";
    for(vector<int>::iterator it = numbers.begin();it != numbers.end(); ++it){

        cout << *it << " ";
    }
    cout << endl;


    return 0;
}