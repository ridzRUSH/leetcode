#############################################################################
                           290 -> WOrd Pattern 
#############################################################################
 
 In this question we need to tell either the charactor match to the same string
 
 basically one one function 
 
 #prog
      we use two hash map , one for string another for char .. with int in both map
			
			use of Stl func.. to break the string into seperate word ( strinstream _NAME_(Pass the string ))
			
				
			i as a iterator to count the np of words 
			
			run the loop unttil we put all the element in the unordered map 
			       BREAK CONDITION 
						       if size of pattern == no of words 
									     means there are more words than charact SO BREAK
											 
									  and if both HASH dosn't match the value 
											  means the mapping is not amttching
												     SO BREAK
										
					  RETURN STATMENT 
						     CHeCK NO. of words == NO of char 
								 return 
											// if both  are same then string and char are uniquely mattched
											
#############################################################################
											
 bool wordPattern(string pattern, string s) {
       unordered_map<char,int> a;
       unordered_map<string,int> b;
       istringstream it(s);
       string word;
       int i=0,size = pattern.size();
       for(word;it>>word;i++){
           if(i==size || a[pattern[i]]!= b[word] ){
               return false;
           }
           else{
               a[pattern[i]]=b[word]=i+2;
           }
       } 
       return size==i;
    }

#############################################################################
