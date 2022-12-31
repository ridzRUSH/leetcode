
#####################################################
                  66. Plus One
#####################################################

Here we are making our solution in o(1) as space complexity 
& O(N + N) == O(N) as the time complexity 

# 
    We are adding a carry as 1 in the last element 
    and storing it in temp so we can generate carry  & sum  from it

# 
     We put the remainder of temp by 10  in vector on same place
      and the quotient of temp divided by 10 in carry
      
#
    Afrer iterating it n times (size of the array )
       it is possible that still we need to add carry (in case of 999)
       so we put a condition after the  end of loop that
        if carry is remaning then  we will insert the carry in front of the vector 
        
#
    we return the same vector
 
 
 ######################################################################################
        
        
        
    string addBinary(string a, string b) {
       int sizea=a.size();
       int sizeb=b.size(),i=0,carry=0;
       string ans="";
        while(i<sizea || i<sizeb|| carry!=0){

            int x=0;
            if(i<sizea && a[sizea -1-i]=='1'){
                x=1;
            }
            
            int y=0;
            if(i<sizeb && b[sizeb -1-i]=='1'){
                y=1;
            }
            ans=to_string((x+y+carry)%2)+ans;
            carry=(x+y+carry)/2;
            i++;
        }
        return ans;
    }
    


#######################################################################################
