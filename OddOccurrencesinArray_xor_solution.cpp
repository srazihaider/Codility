int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    int result=0;
    
    
    
    for(unsigned int i=0; i< A.size(); i++)
    
    {
        
    result = result^A[i];    
        
    
        
    }
    
    return result;
    
}
