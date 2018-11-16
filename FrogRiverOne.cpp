/*

The idea for this program is a simple one. I am using a set to detect any kind of duplication of the leaves that might be present.
Moreover I have calculated the Gauss Sum using X*(X+1)/2, the moment the sum of the values inserted in the set becomes equal to the 
Gauss sum it means that all the leaves are in place, and the frog can jump over them to reach its destination.

To calculate the sum with in the Set could have been done by using accumulate but it would have caused it to become an Sqr(N) log N solution
in the worst case which was not a desirable result. 

Instead I used an a simple sum integer to add the values being inserted every time there is no duplication. 



*/



#include<numeric>
#include<set>

int solution(int X, vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)
    
    set<int> myset;
    int sum=0;
    int Gauss_sum= (X)*(X+1)/2;
  
    for (unsigned int i=0;i<A.size();i++)
    {
        
       
        if(myset.insert(A[i]).second == true )  // no duplication -> value inserted
        {
            
            sum+=A[i];
           
            if(sum==Gauss_sum)
            return i;
            
        }
        
    }
    
    return -1;
   
    
}
