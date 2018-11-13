

int solution(int N) {
    // write your code in C++14 (g++ 6.2.0)
    
    int Remainder = 0;
    int binarygap=0;
    bool prev = false;
    int counter=0;
    bool isfirstremainder=false;
    while (N!=0)
    
    {
        Remainder = N%2;
        if(Remainder == 0 && prev == true && isfirstremainder==true )
        
        {
          counter++;
          prev=true;   
        }
        
       else if (Remainder == 0 && prev == false && isfirstremainder ==true )
        
        {
            counter =1;
            prev= true;
        }
        
        else if (Remainder==1)
        
         {
           
           if(binarygap<counter)
           binarygap=counter; 
            prev=false;
            isfirstremainder=true; 
         }
         
        N=N/2;   
    }

     return binarygap;   
}
        
        
      
