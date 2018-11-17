
vector<int> solution(int N, vector<int> &A) {
    
    vector <int> counter;
    counter.assign(N,0);
    int max= 0;
    int last_max=0;  // last max is the effective max value on which the N value was exceeded
    
for (unsigned int i =0; i<A.size();i++)
{
    if(A[i]<=N)
    {
        if(counter [A[i]-1]<last_max)
        {
        counter [A[i]-1]= last_max+1;
       
        }
        else
        counter [A[i]-1]++;
      
      if (max< counter [A[i]-1] )
      {
          max=  counter [A[i]-1];
      }
       
    }
      else 
      {
          last_max=max;
      }
}  

for (unsigned int i = 0; i<counter.size();i++)

{
    counter [i]= std::max(last_max,counter[i]);
}

return counter;
    
}
