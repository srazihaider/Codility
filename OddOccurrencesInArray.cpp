// you can use includes, for example:
// #include <algorithm>

#include <unordered_map>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    std::unordered_map <int,int> myHashtable;

    
    for(unsigned int i = 0;i<A.size();i++)
    {
        if (myHashtable.find(A[i])==myHashtable.end())
            myHashtable[A[i]]=1;
        else
            myHashtable[A[i]]=myHashtable[A[i]]+1;
    
    }
    
    
    for (auto x : myHashtable) 
     if (x.second%2==1)
     return x.first;
    
    
    
    
    
}
