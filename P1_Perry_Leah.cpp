#include <stdio.h>
#include <iostream>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

using namespace std;

int main (int arg, char *argv[]){
  int pid;
  int id[4];
  for(int j = 1; j <4; j++){ 
  for(int i = 1; i < 4; i++){
     if((id[i]=fork()) == -1){
	cout << "error!" << endl;
	exit(-1);
      }//end if error
     else if(id[i] == 0){
      printf("PID: %u", getpid());
      char *paramList[] = {argv[i], NULL};
      execv(argv[i], paramList);
      exit(0);
     }//end else if
  }//end for
  }//end outer for
	cout <<"In parent" <<endl;
	int status;
	for(int m = 0; m <9; m++){
        pid = wait(&status);
        cout << "pid: " << pid << "; Child exit status: " << status << endl;
	}//end for
  return 0;
}//end main
