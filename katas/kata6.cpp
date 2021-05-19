#include <iostream>

using namespace std;

int* whereCanIPark (char parkinglot[6][6], string vehicle, int outerLength, int innerLength, int spot[]) {
  for (int i = 0; i < outerLength; i++) {
    for (int j = 0; j < innerLength; j++) {
      if (vehicle == "motorcycle") {
        if (parkinglot[i][j] == 'M' || parkinglot[i][j] == 'S' || parkinglot[i][j] == 'R') {
          spot[0] = i;
          spot[1] = j;
          return spot;
        }
      } else if (vehicle == "small") {
        if (parkinglot[i][j] == 'S' || parkinglot[i][j] == 'R') {
          spot[0] = i;
          spot[1] = j;
          return spot;
        }
      } else if (vehicle == "regular") {
        if (parkinglot[i][j] == 'R') {
          spot[0] = i;
          spot[1] = j;
          return spot;
        }
      }  
    }
  }
  return spot;
}
// There are three kinds of possible vehicles: regular cars, small cars, and motorcycles.
// Regular cars can only park in R spots.
// Small cars can park in R or S spots.
// Motorcycles can park in R, S, or M spots.
// In the array of parking spots, spots are written in both lower-case and upper-case. 
// An upper-case letter means that the particular spot is AVAILABLE, while lower-case letters mean that the spot is UNAVAILABLE.
int main ()
{
  int spot[2] = {-1, -1};

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

  spot[0] = -1;
  spot[1] = -1;
  int *spotOne = whereCanIPark(lotOne, "regular", 6, 6, spot); 
  spotOne[0] == -1 ? cout << "false" << endl : cout << spotOne[1] << ',' << spotOne[0] << endl;
  
  char lotTwo[6][6] = {
    //COLUMNS ARE X
    // 0    1    2    3 
    {'M', 'M', 'M', 'M'}, //0 ROWS ARE Y
    {'M', 's', 'M', 'M'}, //1
    {'M', 'M', 'M', 'M'}, //2
    {'M', 'M', 'r', 'M'}, //3
  };

  spot[0] = -1;
  spot[1] = -1;
  int *spotTwo = whereCanIPark(lotTwo, "small", 4, 4, spot); 
  spotTwo[0] == -1 ? cout << "false" << endl : cout << spotTwo[1] << ',' << spotTwo[0] << endl;

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

  int *spotThree = whereCanIPark(lotThree, "motorcycle", 6, 6, spot); 
  spotThree[0] == -1 ? cout << "false" << endl : cout << spotThree[1] << ',' << spotThree[0] << endl;
   
  return 0;
}