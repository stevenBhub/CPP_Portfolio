/*
#include <iostream>
using namespace std;

void FindNumber(int number, int lowVal, int highVal) {
   int midVal;

   midVal = (highVal + lowVal) / 2;
   cout << number;
   cout << " ";
   cout << midVal;0

   if (number == midVal) {
      cout << " s" << endl;
   }
   else {
      if (number < midVal) {
         cout << " t" << endl;
         FindNumber(number, lowVal, midVal);
      }
      else {
         cout << " u" << endl;
         FindNumber(number, midVal + 1, highVal);
      }
   }
}

int main() {
   int number;

   cin >> number;
   FindNumber(number, 0, 16);
   
   return 0;
}

#include <iostream>
using namespace std;

void FindNumber(int number, int lowVal, int highVal) {
   int midVal;

   midVal = (highVal + lowVal) / 2;
   cout << number;
   cout << " ";
   cout << midVal;

   if (number == midVal) {
      cout << " h" << endl;
   }
   else {
      if (number < midVal) {
         cout << " i" << endl;
         FindNumber(number, lowVal, midVal);
      }
      else {
         cout << " j" << endl;
         FindNumber(number, midVal + 1, highVal);
      }
   }
}

int main() {
   int number;

   cin >> number;
   FindNumber(number, 0, 14);
   
   return 0;
}
*/
#include <iostream>
using namespace std;

void FindNumber(int number, int lowVal, int highVal) {
   int midVal;

   midVal = (highVal + lowVal) / 2;
   cout << number;
   cout << " ";
   cout << midVal;

   if (number == midVal) {
      cout << " i" << endl;
   }
   else {
      if (number < midVal) {
         cout << " j" << endl;
         FindNumber(number, lowVal, midVal);
      }
      else {
         cout << " k" << endl;
         FindNumber(number, midVal + 1, highVal);
      }
   }
}

int main() {
   int number;

   cin >> number;
   FindNumber(number, 0, 8);
   
   return 0;
}