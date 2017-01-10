using namespace std;

string void pick_up_line(){
  
  
  const char arrayNum[4] = {'always make sure to keep your safety glasses on', 'safety is the number one priority', 'there is no fun without safety', 'life is not as fun with a missing eye. wear safety glasses'};
  int RandIndex = rand() % 4; //generates a random string between from this array
  cout << arrayNum[RandIndex];
  
  
}
