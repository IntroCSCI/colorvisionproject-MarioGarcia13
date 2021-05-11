//Author: Mario Garcia
#include <iostream>
#include <fstream>
#include <string>
#include "colorvision.h"


using namespace std;
string convertCSS (string &);
void readColors (string);

int main()
{
  string filename;
  int colorNum;

  Colors color1{"color1{ color:#D81B60;}\n"};
  Colors color2{"color2{ color:#1E88E5;}\n"};
  Colors color3{"color3{ color:#FFC107;}\n"};
  Colors color4{"color4{ color:#004D40;}\n"};
  Colors color5{"color5{ color:#73FFE4;}\n"};
  

  do
  {
    cout << "How many colors do you need? (2-5)\n";
   cin >> colorNum;
  }
  while(colorNum != 2 && colorNum != 3 && colorNum != 4 && colorNum != 5);

  cout << "What would you like to name this file?\n";
  cin >> filename;

  convertCSS(filename);

  // Create a text file
  ofstream MyWriteFile(filename);
  
  // Decide how many colors are to be saved
  if(colorNum == 2)
  {
    MyWriteFile << color1.display() << color2.display();
  }

  else if (colorNum ==3)
  {
    MyWriteFile << color1.display() << color2.display() << color3.display();
  }

  else if (colorNum ==4)
  {
    MyWriteFile << color1.display() << color2.display() << color3.display() << color4.display();
  }

  else if (colorNum ==5)
  {
    MyWriteFile << color1.display() << color2.display() << color3.display() << color4.display() << color5.display();
  }
 
  MyWriteFile.close();

  cout << "The " << colorNum << " colors requested have been saved to " << filename;
}

string convertCSS (string & newName)
{
  newName = newName + ".css";
  return newName;
}

void readColors (string colors)
{
  string myText;
  ifstream MyReadFile(colors);
  while(getline(MyReadFile,myText))
  {
    cout << myText;
  }
  MyReadFile.close();
}
