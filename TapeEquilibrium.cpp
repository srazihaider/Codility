// Total_Sum = 0 Σ P-1 ( A[x] ) +  P Σ N-1  (A[x])
// So 0 Σ P-1 ( A[x] ) = Total_Sum - P Σ N-1  (A[x])   --> (eq. A.1)

// As difference = abs (P Σ N-1  (A[x]) - 0 Σ P-1 ( A[x] ))

// using eq. A.1 difference becomes abs( P Σ N-1  (A[x]) - {  Total_Sum - P Σ N-1  (A[x])  } )

// which is equal to abs( 2*P Σ N-1  (A[x]) - Total_Sum )

int solution(vector<int> &A) {
    
    vector <int> Psum;
    int Total_Sum=0;
    
    for (unsigned int i=0;i<A.size();i++)
    {
        
    Total_Sum += A[i];    
    Psum.push_back(Total_Sum);

    }

  int min=0;
  
  for(unsigned int i=0;i<A.size()-1;i++)
  
  {
  if(i==0)
  min = abs(2*Psum[i] - Total_Sum);
  
  else  if (abs(2*Psum[i] - Total_Sum) < min)
  
    min= abs(2*Psum[i] - Total_Sum);
    
  }    
  return min;     
    
    
}
