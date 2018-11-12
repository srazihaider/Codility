// you can use includes, for example:

//#include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

vector<int> solution(vector<int> &A, int K) {
    // write your code in C++14 (g++ 6.2.0)
    
 vector<int> returnvector;
 int counter=0;
 
if (A.size()==0 || A.size()==1 || K==0 ||A.size()==K )
return A;


if(A.size()<=K)
K=K%A.size();


int dividing_line = A.size() - K;

for(int i = dividing_line; i<A.size();i++ )

{
    returnvector.push_back(A[i]) ;
     counter++;
}



for (int i = 0; i<dividing_line; i++)

{

    returnvector.push_back(A[i]);

}
    
return returnvector;

    
}
