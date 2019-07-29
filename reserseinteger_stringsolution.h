#include<iostream>
#include<math.h>
using namespace std;
class Solution {
public:
    int reverse(long int x) {
    int negative_flag = 0;
    if (x<0)
    {
        negative_flag = 1;
        x = x*-1;
    }
        
    string string_integer = to_string(x);
	string reverse_integer = string_integer;
	
	long int sum = 0;
	for(int i = 0; i<string_integer.size();i++)
	{
		reverse_integer[i] = string_integer[string_integer.size()-i-1];
		int myint = (int)(reverse_integer[i])-48;
		sum += myint*pow(10,string_integer.size()-i-1);
	}
		
    if( negative_flag == 1 && sum > 2147483648)
	return 0;
	if ( negative_flag == 0 && sum > 2147483647)
	    return 0;
	if(negative_flag == 0 )        
        return (int) sum;
    if(negative_flag ==1)        
        return (int) sum*-1;
        
    else 
        return 0;
	
    }
};
