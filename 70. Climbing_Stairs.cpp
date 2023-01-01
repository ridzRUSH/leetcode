###############################################################
                 70. Climbing Stairs
################################################################

# 
  simply we write the program of fabonachi no ......
  it will return desired result ..
  
  
  
  
#################################################################
   
  int climbStairs(int n) {
        int num1=0,num2=1,num3;
       for(int i=0;i<n;i++){
           num3=num1+num2;
           num1=num2;
           num2=num3;
       }
       return num3;
    }


################################################################
