#include <iostream>
#include <queue>
#include <string>
using namespace std;

//Author: Rennie Bevineau

int main() {

  

  //Define the queue
  queue<string> boardingqueue;


  //Add customer names one by one into the queue
  boardingqueue.push("Bonnai");
  boardingqueue.push("Tim");
  boardingqueue.push("Jerry");
  boardingqueue.push("Tom");



  //print the front element
  string frontOfQueue = boardingqueue.front();
  cout << "Front of the queue "; 
  cout << frontOfQueue << endl;



  //print the back element
  string backOfQueue = boardingqueue.back();
  cout << "End of the queue ";
  cout << backOfQueue;


  
}
