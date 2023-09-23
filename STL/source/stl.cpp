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

int main()
{
    // array
    cout << "array: ";

    std::array<int,4> arrayExample = {0};

    for(auto& a : arrayExample)
    {
        cout << endl << a;

        //lets check if "a" is a copy or original of array cells 
        a = 3;
    }

    for(auto i = arrayExample.begin(); i < arrayExample.end(); i++)
    {
        cout << endl << *(i);
    }

    // set
    cout << endl << endl << "set: ";

    std::set<int> setExample;

    setExample.emplace(4);
    setExample.emplace(1);
    setExample.emplace(3);
    setExample.emplace(2);
    setExample.emplace(1);      //there is already "1" in set, so it shouldn't be added

    for(auto a : setExample)
    {
        cout << endl << a;
    }

    auto foundInSet = setExample.find(6);

    if(setExample.end() == foundInSet)
    {
        cout << endl << "number 6 was not found in set";
    }

    // vector
    cout << endl << endl << "vector: ";

    std::vector<unsigned long> vectorExample;

    vectorExample.push_back(1u);
    vectorExample.push_back(3u);
    vectorExample.push_back(2u);    //{1, 3, 2}
    vectorExample.emplace(vectorExample.begin(), 3u);  //{3, 1, 3, 2}
    vectorExample.emplace_back(5u);
    
    for(auto a : vectorExample)
    {
        cout << endl << a;
    }

    // vectorExample.clear();

    // if(vectorExample.empty())
    // {
    //     cout << endl << "vector is emtpy, but I'm curious what is it's last element's value: " << vectorExample.back();
    // }

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
    cout << endl << endl << "queue:";

    std::queue<int> queueExample;


    //list
    cout << endl << endl << "list:";

    //stack
    cout << endl << endl << "stack:";

    // algorithms
    cout << endl << endl << "algorithms: ";

    cout << endl;

    return 0;
}