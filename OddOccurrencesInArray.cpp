// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    int max=0;
    
    for(unsigned int i=0;i<A.size();i++)
    {
        if(max<A[i]);
        max=A[i];
    }
    

    
    
    
    std::vector<int> Hashtable(max+1, 0);
    
    
    
    for(unsigned int i = 0; i<A.size();i++)
    {
        
        Hashtable[A[i]]= Hashtable[A[i]]+1;
        
    }
    

    
    
    for(int i=0;i<=max;i++)
    {
        
   
     
     
     if(Hashtable[i]%2 ==1)
     return i;
        
      
    }
    
    
    return 0;
    
    
    
}
