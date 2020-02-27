/* Dr. Tyson McMillan
   Chet Lockwood
   26 Feb 2020
   IDE: Repl.it
   Program to practice passing a struct by point (*)
*/

#include <iostream>
#include <string>
using namespace std;

//Structures *****************************************************************
struct car
{
  string Make;
  string Model;
  int Year;
  string Color;
};

//Function Definitions ********************************************************
void printCar(car *c)
{
  int i = 0;
  cout << "Which car do you want info for (1,2, or 3)\n";
  cin >> i;
  i--;
  cout << "\nCar details: " << endl;
  cout << "Make - " << c[i].Make << endl;
  cout << "Model - " << c[i].Model << endl;
  cout << "Year - " << c[i].Year << endl;
  //set the color variable based upon the year, and print it
  (c[i].Year > 2010) ? cout << "Color - Green" : cout << "Color - Red";
}

//Main Function ***************************************************************
int main() 
{
  //Declare an array of the struct
  car carInfo[3];

  carInfo[0].Make = "Hyundai";
  carInfo[0].Model = "Genesis";
  carInfo[0].Year = 2016;
  carInfo[0].Color = "";

  carInfo[1].Make = "GMC";
  carInfo[1].Model = "Yukon";
  carInfo[1].Year = 1975;
  carInfo[1].Color = "";

  carInfo[2].Make = "Toyota";
  carInfo[2].Model = "MR2";
  carInfo[2].Year = 1997;
  carInfo[2].Color = "";

  printCar(carInfo);

  return 0;
}