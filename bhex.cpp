#include <string>
#include <vector>
#include <stack>
#include <iostream>
#include <sstream>




int main( int argc, char* argv[] )
{
    std::stack<unsigned char> bytes;
    if (argc > 2 ) {
        std::cout << "Too many arguments. Usage: bhex 'hexstring'" << std::endl;
        return -1;
    } else 
        if (argc < 2) {
            std::cout << "Too few arguments. Usage: bhex 'hexstring'" << std::endl;
            return -1;
        }

    std::string   hex = argv[1];
    if (hex.length() % 2 != 0 ) 
    {
        std::cout << "It only works with even srings. Usage: bhex 'hexstring'" << std::endl;
        return -1;
    }
  for (unsigned int i = 0; i < hex.length(); i += 2) {
    std::string byteString = hex.substr(i, 2);
    unsigned char byte = (unsigned char) strtol(byteString.c_str(), NULL, 16);
    bytes.push(byte);
  }

  std::cout << "original:"<< hex << std::endl;
  std::cout << "bhex    :";

  while ( !bytes.empty() )
  {
      std::cout << std::hex << int(bytes.top());
      bytes.pop();
  }
  std::cout << std::endl;

  return 0;
}
