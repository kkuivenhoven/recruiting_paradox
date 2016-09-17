#include <iostream>
using namespace std;
#include <string>

int bulls = 0;
int cows = 0;

string p1;
string p2;

int i=0;
int bull_count = 0;
int cow_count = 0;
 
string play;
 
int main()
{
   play = "Y";
   while(play == "Y")
   {
      cout << "Player 1: The word: " << endl;
      cin >> p1;
 
      cout << "Player 2: The guess: " << endl;
      cin >> p2;
 
      while(i<p1.length())
      {
         for(int j=0; j<p2.length(); j++)
         {
            if(p1[i]==p2[j])
            {
                bull_count++;
                // cout << "bulls" << endl; 
             }
             i++;
          }
       }
 
      for(int z=0; z<p1.length(); z++)
      {
         for(int k=p2.length(); k>=0; k--)
         {
            if(z!=k)
            {
               if(p1[z]==p2[k])
               {
                  cow_count++;
                 // cout << "cows" << endl;
             }
          }
       }
    }
    cout << "bulls - " << bull_count << ", cows - " << cow_count << endl;
    cout << "Play again? [Y/N]" << endl;
    cin >> play;
    bull_count = 0;
    cow_count = 0;
    i=0;
  }
 
  if(play == "N")
  {
      cout << "Good Bye!" << endl;
  }

  return 0;
}










