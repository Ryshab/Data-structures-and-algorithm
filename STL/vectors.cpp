#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);

    vector<int> v1(5, 100); // to create v1 with {100,100,100,100,100}

    vector<int> v2(v1); // To copy v1 into v2
    vector<int>::iterator it = v.begin();
    it++;

    for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++)
    {
        
        cout<<*(it)<<endl;
    }

    // Alternative for above code with use of auto
    // Auto will choose datatype automatically 
    
    for (auto it = v1.begin(); it != v1.end(); it++)
    {
        
        cout<<*(it)<<endl;
    }

        return 0;
}