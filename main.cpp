#include <iostream>
#include <functional>

int main(int argc, char const *argv[])
{
	  std::cout << "Hello World!" << std::endl << "wtf" << std::endl << "Test :" << argc << std::endl;
	  //std::cout << "Test :" << argc << std::endl;
	  //std::cout << argv[0] << std::endl;
	  for ( int i = 0; i<argc; i++)
	  {

	  		  std::cout << argv[i] << std::endl;
	  }
	  std::cout << "lalala" << std::endl;

	return 0;
}