#include <stdio.h>
#include <iostream>
#include <unistd.h>

using namespace std;

int main (int arg, char *argv[]){
  int pid = getpid();
  sleep((pid%10)*3+5);
  cout << "In child: " << getpid() << endl;
  return 0;
}
