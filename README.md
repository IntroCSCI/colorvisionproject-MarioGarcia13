# ColorVision Pallete Generator

## Description

This program asks the user for 2 or 3 colors and saves the 2 or 3 colors into the file they want to save it to. 
### v0.2 Updates

This program asks the user how many colors they want from 2-5 and then asks for what they want to name the file. The file is then changed to a .css file where the colors the user asked for are stored. 

### v1.0 Updates

This program asks the user how many colors they want from 2-5 and then asks for what they want to name the file. The file is then changed to a .css file where the colors the user asked for are stored. 


## Developer

Mario Garcia

## Example

To run the program, give the following commands:

```
g++ --std=c++11 *.cpp -o cvp
./cvp
```

Here is an example of the program running:

```
How many colors do you need? (2-5)
2
What would you like to name this file?
Test
The 2 colors requested have been saved to Test.css

```

## C++ Guide

### Variables and Data Types

I have used a string called filename to obtain the file name that the user wants to to save the file as. 
I also have used an Int variable called colorNum to obtain the amount of colors the user wants to be saved to their file, this number is then used to decide how many colors are going to be saved with if statements. 

### Console Input and Output

I used cout to give the user instructions. then cin to recieve the amount of colors the user wants and what they want to name the file. 

### Decisions

I used if statements that would decide how many colors get saved into the file from a range of 2 to 5. 

### Iteration

I used Iteration in the begining to restrict what the user may type in for the amount of colors they need. The cout statement will repeat as long as the user does not enter 2,3,4, or 5.


### File Input and Output

I used fstream to create text files and after the file is created, 2-5 colors get written into the file. Then the file is closed. 

### Arrays/Vectors

I implemented an Array that stores the colors. The array is then called and gives the colors when the user gives the amount of colors they want. 

### Functions

There are 2 functions that I used in this project. 

The first function was used to convert the filename given by the user into a .css so that the file that we create becomes a .css file. I did this while using a string return type and by using a string in the parameters. This is an example of pass by reference.  

The second funtion was used to read out the colors that were written into the .css file. I did this by using a void return type and a string in the parameters. This is an example of pass by value. 

### Classes

I implemented the color class to help write the colors into a .css file. I did this by creating a function within the public class called string display();.
