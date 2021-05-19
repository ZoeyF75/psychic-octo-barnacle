#include <iostream>

using namespace std;

int* whereCanIPark (char parkinglot[6][6], string vehicle) {
  
}

// There are three kinds of possible vehicles: regular cars, small cars, and motorcycles.
// Regular cars can only park in R spots.
// Small cars can park in R or S spots.
// Motorcycles can park in R, S, or M spots.
// In the array of parking spots, spots are written in both lower-case and upper-case. 
// An upper-case letter means that the particular spot is AVAILABLE, while lower-case letters mean that the spot is UNAVAILABLE.
int main ()
{
  char lotOne[6][6] = {
    //COLUMNS ARE X
    // 0    1    2    3    4    5
    {'s', 's', 's', 'S', 'R', 'M'}, //0 ROWS ARE Y
    {'s', 'M', 's', 'S', 'r', 'M'}, //1
    {'s', 'M', 's', 'S', 'r', 'm'}, //2
    {'S', 'r', 's', 'm', 'r', 'M'}, //3
    {'S', 'r', 's', 'm', 'r', 'M'}, //4
    {'S', 'r', 'S', 'M', 'M', 'S'}  //5
  };

  cout << whereCanIPark(lotOne, "regular") << endl; 
  
  char lotTwo[6][6] = {
    //COLUMNS ARE X
    // 0    1    2    3 
    {'M', 'M', 'M', 'M'}, //0 ROWS ARE Y
    {'M', 's', 'M', 'M'}, //1
    {'M', 'M', 'M', 'M'}, //2
    {'M', 'M', 'r', 'M'}, //3
  };

  cout << whereCanIPark(lotTwo, "small") << endl; 

  char lotThree[6][6] = {
    //COLUMNS ARE X
    // 0    1    2    3    4    5
    {'s', 's', 's', 's', 's', 's'}, //0 ROWS ARE Y
    {'s', 'm', 's', 'S', 'r', 's'}, //1
    {'s', 'm', 's', 'S', 'r', 's'}, //2
    {'S', 'r', 's', 'm', 'r', 's'}, //3
    {'S', 'r', 's', 'm', 'R', 's'}, //4
    {'S', 'r', 'S', 'M', 'm', 'S'}  //5
  };

  cout << whereCanIPark(lotThree, "motorcycle") << endl; 
   
  return 0;
}