/*
this is a new idea but it does not work has multiple issues 
I am keeping this as a backup only
*/


vector<int> solution(int N, vector<int> &A) {
    
    vector <int> counter;
    counter.assign(N,0);
    int max= 0;
    int last_max=0;  // last max is the effective max value on which the N value was exceeded
    int  index_max=0;
for (unsigned int i =0; i<A.size();i++)
{
    if(A[i]<=N)
    {
        counter [A[i]-1]++;
      if (max< counter [A[i]-1] )
      {
          max=  counter [A[i]-1];
          index_max=i;
      }  
      else 
      {
          last_max=max;
      }
    }
}  

counter.assign(N,last_max);

for (unsigned int i = max; i<A.size();i++)

{
    counter [A[i]-1]++;
}

return counter;
    
}
