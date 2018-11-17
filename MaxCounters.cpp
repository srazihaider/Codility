/*
This is not the final solution , it has performance issues. 77% result
*/


vector<int> solution(int N, vector<int> &A) {
    
    vector <int> counter;
    counter.assign(N,0);
    int max= 0;
    
    
for (unsigned int i =0; i<A.size();i++)

{
    if(A[i]<=N)
    {
        counter [A[i]-1]++;
      
      if (max< counter [A[i]-1] )
          max=  counter [A[i]-1];
    }
    else
    counter.assign(N,max);
}    
   return counter; 
}
