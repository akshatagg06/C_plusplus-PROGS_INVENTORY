/*
Piyush enters the park with strength S. 
The park is filled with some obstacles denoted by ‘.’ , 
some magical beans denoted by ‘*’ and some blockades denoted as ‘#’. 
If he encounters an obstacle (.) , strength decreases by 2. 
If he encounters a magic bean (' * ') , his strength increases by 5. 
Piyush can only walk row wise, so he starts from left of a row and moves towards right 
and he does this for every row. However when he encounters a blockade (#) , 
he cannot go any further in his current row and 
simply jumps to the start of a new line without losing any strength.
Piyush requires a strength of 1 for every step.
His strength should always be greater than K while traversing 
or else Piyush will get lost. Assume that Piyush can shift immediately 
from last of one row to the start of next one without loss of any strength, 
help out Piyush to escape the park. His escape is successful if he is able to return home with atleast K strength.

Sample Input
4 4 5 20
. . * .
. # . .
* * . .
. # * *

Sample Output
Yes
13
*/
#include<iostream>
using namespace std;

int main() {
  int r, c, s, k;
  cin >> r >> c >> k >> s;

  char a[100][100];

  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      cin >> a[i][j];
    }
  }
  
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < c; j++) {
      if (s >= k) {
        if (a[i][j] == '.') {
          s = s - 2;
        } if (a[i][j] == '*') {
          s = s + 5;
        } if (a[i][j] == '#') {
          break;
        } if (j<c-1) {
          s--;
        }
      }
    }
  }

  if (s >= k) {
    cout << "Yes" << endl << s;
  } else {
    cout << "No";
  }

  return 0;
}