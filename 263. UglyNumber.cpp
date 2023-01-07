###########################################################################
                     263 -> Ugly number
###########################################################################

What is ugly No?

Ugly no is one whose prime factor are only 2,3,5 (according to question )

eg : 6=2 x 3
     is a ugly number 
     
     14 = 7 x 2
     is not an ugly number " because it has another prime factor"
     
     
  # program 
  we can divide the no.  with only 2,3 and 5 
  
  if it get divided completly by any prime factor( 2, 3, 5) we further reduce the no . according to prime factor 
  
  if it is not dividible by 2,3, 5 then we break 
  
  in return we check if the no. is 1 means our loop has come to end then exit
  so it return bool 1
  
  if it got break in between then no. is never going to one 
  so it will return bool 0 
  
  
  ###########################################################################
    
    
  bool isUgly(int n) {
  
         // check no. is negative .. so no need to waste time ... say FALSE
        if( n<=0 )
        return false;
        // divide until we reach one or break the loop
        while(n>1){
            if(n%2==0)
            n=n/2;               //if div by 2 then half the no.
            else if(n%3==0)
            n=n/3;               // if div by 3 then make the no. 1/3 of no.
            else if(n%5==0)
            n=n/5;               // if no. is divisible by 5 , make no 1/5 of real one
            else
            break;               // if not div by any  2, 3, 5 then it means it is a non ugly no.
        }
        return (n==1);           // if n==1 means no call to break so the cond. becomme true so return 1
                                   // on break it will return 0 (n never going to 1)
    }
    
    
    
  ###########################################################################
