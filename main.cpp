#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
class tBook 
{
public:
string Name;
string Author;
int Count;
};
int main()
{
tBook book;
book.Name="Protected";
book.Author="Bill Morgan";
book.Count=10;
std::cout<<"book.Name = "<< book.Name<<"\nbook.Author = "<<book.Author<<"\nbook.Count = "<<book.Count<<std::endl;
return 0;
}