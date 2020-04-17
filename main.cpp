#include <iostream>

using namespace std;

// name: rose hall
// date: 03.xx.20
// shunting yard algorithm. will take an infix equation and be able to translate it to prefix or postfix using a tree.

// function prototypes

int main() {
  // base variables
  char* eqInput = new char[200];
  char* transInput = new char[8];
  
 
  // instructions on how to input the equation
  cout << "this program is a shunting yard algorithm.\nit will take in an input equation in infix notation, use the algorithm to build a binary node tree, and use that tree to translate to prefix or postfix notation." << endl;

  // prompt for user input
  cout << "please input your equation. please make sure there are spaces between every operator and number.\nexample input: '20 + 4 / 7'\nALWAYS INPUT IN INFIX" << endl;

  // take user input for equation
  cin.getline(eqInput,200);
  
  // parse input into numbers and operators

  // [THIS IS THE SHUNTING YARD ALGORITHM]
  // place numbers into queue, place operators into stack, rearrange them
  // postfix will eventually be in the queue

  // use postfix to build the tree
  
  // while loop start

  // instructions on how to use the translator
  cout << "this is where the instructions for translator use will go." << endl;

  // take input for translation

  // perform translation

  // output translation

  // while loop end, there will be a quit function.


}
