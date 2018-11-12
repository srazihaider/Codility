// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

bool isbroken = false ;
unsigned int i=0;


for ( i=0;i<A.size()-1;i++)
{
    

    
 for(unsigned int j=1;j<A.size();j++)
 {
     
  if(i==j)
  j++;
 
 if(A[i]==A[j])
 {
  isbroken=true;
  break;
 }
 else
 {
 
 isbroken=false;
 
 }
}

if(isbroken == false)
{
    
     
      return A[i];

}

    
}


return A[A.size()-1];


}



