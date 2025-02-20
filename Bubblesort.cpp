#include <iostream>
#include <vector>
using namespace std;

int main() {

   vector<int> numSort = {6,5,4,3,2,1};
   int temp;
   bool flag;
   int i;

  while(flag == false)
   {
      flag = true;
      for (i =0; i < numSort.size()-1;i++){
         if(numSort.at(i) > numSort.at(i+1)){
            temp = numSort.at(i);
            numSort.at(i) = numSort.at(i+1);
           numSort.at(i+1) = temp;
            for(int g=0; g < numSort.size(); g++){
                  cout << numSort.at(g) << ' ';
           }//end for loop
           flag = false;
           cout << endl;
         }//end if
      }//end forloop
    
   }//end while loop
 cout << "whileLoopEnd";
}
