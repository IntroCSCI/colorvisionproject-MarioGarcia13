//Author: Mario Garcia
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
  string text ="";
  string colorGen = "pallete.css";
  string filename = "";
  int colorNum = 0 ;
  fstream reader;
  char choice;

  cout << "How many colors do you need? 2 or 3? \n";
  cin >> colorNum;
  do{
    cout << "Where would you like to save the file? \n";
    cin >> filename;
    reader.open(filename, ios::in | ios::out);
     if(reader.is_open () ){
         while(!reader.eof () ){
           
          
        }
      }
      else{
        cout << "that file does not exist. Try again? y/n \n";
        cin >> choice;
      }
  }while(choice == 'y');

  cout << text;






  return 0;
}
