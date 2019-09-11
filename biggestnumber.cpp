//Author:
#include<iostream>

int main()
{

  
  int FirstNumber = 0;
  int SecondNumber = 0;
  int biggest = 0;

  

  std::cout<<"Please enter a whole number:\n";
  //get first input using std::cin>a
  std::cin>>FirstNumber;

  std::cout<<"Please enter another whole number:\n";
  //get second input using std::cin>> again with a second variabla
  std::cin>>SecondNumber;

  //determine if first or second is bigger and store that in a third variable
   if(FirstNumber > SecondNumber)
   {
           biggest = FirstNumber;
   
 
   
  }
   else
  {
    biggest = SecondNumber;

  }

  
   
           //if

  



  std::cout<<"Of those two numbers, the biggest is: ";
  //print out the variable representing the biggest numbea
  std::cout<<biggest;


  std::cout<<std::endl<<"Thank you for playing.\n";
  
  return 0;
}
