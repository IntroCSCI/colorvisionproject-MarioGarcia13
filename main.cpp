//Author: Mario Garcia
#include <iostream>
#include <fstream>
#include <string>
#include <vector>

using namespace std;
string convertCSS (string &);
void readColors (string);

int main()
{
  string filename;
  int colorNum; //maybe change to string

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
    MyWriteFile << "#D81B60\n #1E88E5";
  }

  else if (colorNum ==3)
  {
    MyWriteFile << "#D81B60\n #1E88E5\n #FFC107";
  }

  else if (colorNum ==4)
  {
    MyWriteFile << "#D81B60\n #1E88E5\n #FFC107\n #004D40";
  }

  else if (colorNum ==5)
  {
    MyWriteFile << "#D81B60\n #1E88E5\n #FFC107\n #004D40\n #73FFE4";
  }
 
  MyWriteFile.close();

  cout << "The colors (";

  readColors(filename);

  cout << ") have been saved to " << filename;
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

