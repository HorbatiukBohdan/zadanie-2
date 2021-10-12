#include <iostream>
#include <fstream>
using namespace std;
 ofstream MyFile;
  string haslo;
  int main() {
  	cout << "Haslo:";
  	MyFile.open("password.txt");
  	MyFile <<haslo <<"";
  	MyFile.close();
  }

