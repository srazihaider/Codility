// I have used Gauss's method to calculated the sum of the series of consective integers
// Gauss_sum = (N)(N+1)/2
// The logic here is to calculate the expected sum ( Gauss's sum) and also calculate the given sum
// The difference between the two will be the missing number 


int solution(vector<int> &A) {
 
    // write your code in C++14 (g++ 6.2.0)
    
    
    int sum=0;
    
 for (unsigned int i=0 ; i<A.size();i++)
 {   
    sum= sum+ A[i];
 }
 
 int gauss_sum= (A.size()+2)*(A.size()+1)/2;
 
 return gauss_sum-sum;
 
 
 
}
