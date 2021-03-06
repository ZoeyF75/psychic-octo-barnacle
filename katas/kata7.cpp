#include <iostream>

using namespace std;

string checkAir(string samples[], double threshold, double numOfSamples) {
  double numOfPolluted = 0;
  for (int i = 0; i < numOfSamples; i++) {
    if (samples[i] == "dirty") {
      numOfPolluted++;
    }
  }
  double percentage = numOfPolluted / numOfSamples;
  return percentage >= threshold ? "dirty" : "clean";
}

int main ()
{
  string sampleOne[10] = {"clean", "clean", "dirty", "clean", "dirty", "clean", "clean", "dirty", "clean", "dirty"};
  cout << checkAir(sampleOne, 0.3, 10) << endl; //Polluted

  string sampleTwo[5] = {"dirty", "dirty", "dirty", "dirty", "clean"};
  cout << checkAir(sampleTwo, 0.25, 5) << endl; //Polluted

  string sampleThree[7] = {"clean", "dirty", "clean", "dirty", "clean", "dirty", "clean"};
  cout << checkAir(sampleThree, 0.9, 7) << endl; //Clean

  return 0;
}