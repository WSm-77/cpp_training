#include <iostream>
#include <array>
#include <set>
#include <vector>
#include <map>
#include <utility>
#include <algorithm>
#include <iterator>
#include <string>
#include <queue>
#include <list>
#include <stack>

using std::cout;
using std::endl;

template <typename structure>
void print_structure(structure & str){
    for (auto &a : str){
        cout << a << endl;
    }
    cout << endl;
}

int main()
{
    // array
    cout << "array (original): ";

    std::array<int,4> arrayExample = {0};

    for(auto& a : arrayExample)
    {
        cout << endl << a;

        //lets check if "a" is a copy or original of array cells
        a = 3;
    }

    cout << endl << endl << "array (after changes): ";

    for(auto i = arrayExample.begin(); i < arrayExample.end(); i++)
    {
        cout << endl << *(i);
    }

    // set
    cout << endl << endl << "set:\n";

    std::set<int> setExample;

    setExample.emplace(4);
    setExample.emplace(1);
    setExample.emplace(3);
    setExample.emplace(2);
    setExample.emplace(1);      //there is already "1" in set, so it shouldn't be added

    print_structure<std::set<int>>(setExample);

    auto foundInSet = setExample.find(6);

    if(setExample.end() == foundInSet)
    {
        cout << endl << "number 6 was not found in set";
    }

    if (setExample.count(4))
    {
        cout << "\n4 is already in set" << endl;
    }
    else{
        cout << "ther is no 4 in set" << endl;
    }

    cout << "lets erase every element between 2 and 4..." << endl;
    setExample.erase(setExample.find(2), setExample.find(4));

    cout << "Set after erasing:"<<endl;

    print_structure(setExample);

    // vector
    cout << endl << endl << "vector:\n";

    std::vector<unsigned long> vectorExample;

    vectorExample.push_back(1u);
    vectorExample.push_back(3u);
    vectorExample.push_back(2u);    //{1, 3, 2}
    vectorExample.emplace(vectorExample.begin(), 3u);  //{3, 1, 3, 2}
    vectorExample.emplace_back(5u);

    print_structure(vectorExample);

    // map
    cout << endl << endl << "map: ";

    std::map <std::string, int> mapExample;     //name as key and age as value

    mapExample.emplace("Pawel", 15);
    mapExample.emplace("Anna", 12);
    mapExample.emplace("Tomek", 11);

    for(auto a : mapExample)
    {
        cout << endl << "name: " << a.first << ", " << a.second << " yo";
    }

    // pair
    cout << endl << endl << "pair: ";

    std::pair<int, bool> pairExample[] =
    {
        {1, true},
        {2, true},
        {1, false}
    };

    for(auto a : pairExample)
    {
        cout << endl << std::boolalpha << "first: " << a.first << ", second: " << a.second;     //using boolaplha to display booleans as "true" or "false"
    }

    //queue
    cout << endl << endl << "queue:" << endl;

    std::queue<int> queueExample;

    queueExample.push(4);
    queueExample.push(2);
    queueExample.push(1);
    queueExample.push(7);

    while (!queueExample.empty()){
        auto firstInQueue = queueExample.front();
        queueExample.pop();
        cout << firstInQueue << endl;
    }

    //list
    cout << endl << endl << "list:";

    std::list<int> listExample;

    //stack
    cout << endl << endl << "stack:" << endl;

    std::stack<double> stackExample;

    stackExample.push(3.14);
    stackExample.push(2.72);
    stackExample.push(1.62);
    stackExample.push(0.0);

    while (!stackExample.empty()){
        cout << stackExample.top() << endl;
        stackExample.pop();
    }

    // algorithms
    cout << endl << endl << "algorithms: " << endl;

    // sorting

    cout << endl << "before sorting:" << endl;
    print_structure(vectorExample);

    std::sort(vectorExample.begin(), vectorExample.end());

    cout << endl << "after sorting (ascending):" << endl;
    print_structure(vectorExample);

    std::sort(vectorExample.begin(), vectorExample.end(), std::greater<unsigned long>());

    cout << endl << "after sorting (descending):" << endl;
    print_structure(vectorExample);

    return 0;
}
