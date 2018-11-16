*/

The major confusion in this algorithm is that although the permutation is said to be a non-duplicated sequence of numbers,
there is no guarentee that the input will also be a without duplications. 

Hence to remove the duplication I have used a set where the worst case insertion function is Order Log (N)

once that is done the accumulate function is used to add the sum of the set which I assume is order N log N as each look up is log(N)
and N lookups should be order NlogN

final comparison between Gauss's sum and the accumulated sum is O(1)

hence the worst case should be O(Nlog N)



/*



#include <set>
#include<numeric>

int solution(vector<int> &A) {
    
    set<int> myset;
    int sum=0;
   
   
   
    for(auto itr : A)
    {
        myset.insert(itr);
      
        
    }
     
   sum= std::accumulate(myset.begin(), myset.end(),0 );
  
    int N= A.size();
    int Gauss_sum= N*(N+1)/2;

    if(sum==Gauss_sum)
    return 1;
    else
    return 0;
    
    
    
    
    
    
    
}
