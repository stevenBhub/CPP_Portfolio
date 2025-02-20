//============================================================================
// Name        : Steven Bedoll
// Author      : Steven Bedoll
// Version     : A
// Copyright   : Your copyright notice
// Input       : Basic searching examples
// Process     :
// OutPut      :
//============================================================================

#include <fstream>
#include <iostream>
#include <vector>
#include <time.h>

using namespace std;

int Search(vector<int>& testList,int numbersSize, int key) {
   int mid = 0;
   int low = 0;
   int high = numbersSize+1;
   int k;
   //begin for loop print list
   for (k=0; k < 10; k++ ) {
      cout << testList.at(k) << ",g ";
   }//end for loop
   cout << " ,key" << key;
   cout << " ,size" << numbersSize;
   cout << endl;
   
   if (numbersSize == 0) {
      return 0;
      }
   else {
   while (high >= low) {
      mid = (high + low) / 2;
      if (testList.at(mid) < key) {
         low = mid + 1;
      }// end if
      else if (testList.at(mid) > key) {
         high = mid - 1;
      }// end else if
      else {
      cout << " ,mid" << mid << endl; 
         return mid;
         
      }// end else
   }// end while 
   } 
   cout << " ,mid" << mid << endl; 
   return mid; // not found
}




int main() {

////CREATES RANDOM LIST
   vector<int> testList ={23,27,26,33,34,27,45,52,64,76};
   int size = testList.size();
  
   int i = 0;//random generator
   int j = 0;//random generator
   int s = 0;//binarysearch
   int d = 0;//binarysearch   
   int temp = 0;//insertion sort
   int r = 0;//insertion sort
   int p = 0;//insertion sort
   int index = 0;
   int key = 0;
   bool fun = true;
   
   //begin for loop i-j
   //for (int i=0; i < size; i++ ) {
     // testList.push_back( rand() % 100);
  // }//end for loop
   
   //begin for loop print list
   for (int i=0; i < size; i++ ) {
      cout << testList.at(i) << ", ";
   }//end for loop
   cout << endl;
////END CREATS RANDOM LIST 

   for (i = 1; i < size; ++i) {
      j = i;
      key =  testList.at(i);
      // Insert numbers[i] into sorted part
      // stopping once numbers[i] in correct position
      index = Search(testList, i-1, key);
      cout<<"IIIIIIIIIII: "<< i << " " << testList.at(i) << endl;
      while (j > index && testList.at(j)  < testList.at(j-1) ) {
         
         // Swap numbers[j] and numbers[j - 1]
         temp = testList.at(j);
         testList.at(j) =  testList.at(j-1);
         testList.at(j-1) = temp;
         --j;
         cout<<"J: "<< j << " " << testList.at(j) << endl;
         cout<<"INDEX: "<< index << " Value:" << testList.at(index) << endl;
      }//end while loop insertion
   }//end for loop insertion
   //begin for loop print listSearch
   for (int i=0; i < size; i++ ) {
      cout << testList.at(i) << ", ";
   }//end for loop
   cout << endl;

}//end main