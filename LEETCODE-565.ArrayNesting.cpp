//============================================================================
// Name        : ArrayNesting.cpp
// Author      : Sidhant Chadha
// Version     :
// Copyright   : 
// Description : Array Nesting World in C++, Ansi-style
//============================================================================

     int arrayNesting(vector<int>& V) {
         unordered_set<int>S;
         int c=S.size();

         for(int i=V[0];i<V.size();){

             if(S.find(i)==S.end()){
                 S.insert(i);
                 i=V[i];
             }
             else {
                 c=S.size();
                 break;
             }

         }
         return c;
     }
