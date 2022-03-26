#include<iostream>
#include<fstream>
using namespace std;

int main() {
   ifstream in_file("./handBook/IO.cpp", ios::binary);
   in_file.seekg(0, ios::end);
   int file_size = in_file.tellg();
   cout<<"Size of the file is"<<" "<< file_size<<" "<<"(B)bytes\n";
   float fsINkB = 1024/file_size;
   cout<<"Size of the file is"<<" "<< fsINkB<<" "<<"(kB)kiloBytes\n";
}