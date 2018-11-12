// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    // write your code in C++14 (g++ 6.2.0)

int numberofoccurrences = 0 ;
vector <int> alreadychecked;
unsigned int i=0;


for ( i=0;i<A.size();i++)
{

 for(unsigned int j=0;j<A.size();j++)
 {
     

 
 if(A[i]==A[j])
 {
  numberofoccurrences++;

 }

}

cout<<"number of occurences for "<<A[i]<<" is "<<numberofoccurrences<<endl;

 if(numberofoccurrences%2==1)
 return A[i];
 
 numberofoccurrences=0;
    
}

return A[A.size()-1];

}



