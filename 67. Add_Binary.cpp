/*

#############################################
        67. Add Binary
#############################################

 * we use the function to put our numerical value into string "" to string()""
 * we can save the sum as sum of the values present at the same position from ending and then summing
   up with carry and taking out reminder by  2  this way we get sum 
   
 * if we divide the the sum + carry by 2 we get the carry
 
 */
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
