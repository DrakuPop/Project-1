#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <vector>
#include <array>
using namespace std;

//FIXME-BOBBY ProductServices Class****************************************************

class ProductService {                           // Info about ProductService
   public:
      void SetName(string serviceName);          // Sets the service name
      void SetPrice(int userPrice);              // Sets the price. Do not include $
      void Print();                              // Prints name and price on one line
   
   private:
      string name;
      int price;
};

//ProductServices End**********************************************************

/*
void ClientDataBase()
{
  vector<string> storeClientInfo;
  string clientWordChange, clientOption, addNewClient;
  int clientSectionModify = 1, i;
  
  //searching for file or creating one. Typed from example project.
  ifstream infile;
  infile.open("Client.txt")
  }
    
*/
int main() {
  int input;
  
    cout << "Hello Team. Let's crush this project." << endl << endl;

    cout << "Enter a number to access files." << endl << "1 - Client's Infomation." << endl << "2 - Sales Representatives." << endl << "3 - Product/Service." << endl <<"4 - Sales." << endl << endl; 
    
    cin >> input;

    if (input==1) {//do something}
      cout << "test 1" << endl;
    return 0;}

    if (input==2) {//do something}
      cout << "test 2" << endl;
    return 0;}

    if (input==3) {//do something}
      cout << "test ProductService" << endl;
      //figure how to comunicate with the files here.
    return 0;}

  

  return 0;
}

