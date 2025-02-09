#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

int main()
{
    list<int> numbers = {50,70,10,20,30,40};
    list<int>::iterator it = find(numbers.begin(), numbers.end(),90);

    if(it != numbers.end()){
        cout << "Element found: " << *it << endl;
    }
    else{
        cout << "Element not found" << endl;
    }

    return 0;
}