unsing namespace std;

string void pick_up_line(){
  
  
  const char arrayNum[6] = {'how you doing', 'Mr Steal your girl', 'hey baby are you a battery cause you make me move', 'How do you get the woombas', 'show your cad files', 'hey baby are you the compiler because im the code', };
  int RandIndex = rand() % 6; //generates a random number between 0 and 3
  cout << arrayNum[RandIndex];
  
  
}
