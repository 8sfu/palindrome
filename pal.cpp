
#include <iostream>
#include <cstring>

using namespace std;

int main(){
  cout << "Enter a word or phrase with at most 80 characters." << endl;
  char input[81];
  cin.clear();
  cin.get(input, 81);
  //cout << endl << input << endl;

  int length = 0;
  char concatInput[81];
  int i = 0;
  while(input[i] != '\0'){
    if(input[i] > 47 && input[i] < 58){
      concatInput[length] = input[i];
      i++;
      //cout << "char " << concatInput[length] << " added at " << i << endl;
    }
    else if(input[i] > 64 && input[i] < 91){
      concatInput[length] = input[i]+32;
      i++;
      //cout << "char " << concatInput[length] << " added at " << i << endl;
      length++;
    }
    else if(input[i] > 96 && input[i] < 123){
      concatInput[length] = input[i];
      i++;
      //cout << "char " << concatInput[length] << " added at " << i << endl;
      length++;
    } else {
      i++;
    }
  }
  //cout << concatInput << endl;
  char finalInput[length+1];
  char reverseInput[length+1];
  for (int i = -1; i < length+1; i++){
    finalInput[i]=concatInput[i];
    reverseInput[i]=concatInput[length-1-i];
    //cout << concatInput[i] << " / " << finalInput[i] << " / " << reverseInput[i] << " / " << i+1 << " / " << length << endl;
  }
  //cout << finalInput << '.' << endl;
  //cout << reverseInput << '.' << endl;
  if(strcmp(reverseInput,finalInput) == 0){
    cout << endl << "Palindrome" << endl;
  } else {
    cout << endl << "Not a palindrome" << endl;
  }
  return 0;
}
