#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
  srand(time(0));
  int number = rand()%100+1;
  for(int i=0;i<10;i++){
    int guess;
    cout<<"enter the number from 1 to 100"<<endl;
    cin>>guess;
    if(number==guess){
      cout<<"you guess the right number"<<endl;
      return 0;
    }
    else if(guess<number){
      cout<<"too low , try again"<<endl;
    }
    else{
      cout<<"too high , try again"<<endl;
    }
  }
  cout<<"you lost the game"<<endl;
  return 0;
}
