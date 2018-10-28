/*
we have 256 numbers in acsii table. Now, which enconding we apply depends on us. 
For eg encoding could be  = > int(decimal form), hex, char etc. 
If we have a char variable it can be treated as 1 byte integar whiule passing that in the index of array"
Since, strings internally implement itself as a char we can apply this!
"

//Program counts the number of occurences 
#include <iostream>
#include <string>
using namespace std;

int main() {
  int arr[255] = {0};
  string s = "gh6375@^*(&%$#>m6745268jbg!!dfffffffff";
  
  for(int i = 0; i < s.length(); i++ ){
    ++arr[s[i]];
  }

  for(int i = 0; i < 256; i++){
    cout << "Count of " << (char)i << " is " << arr[i] << endl;
  }

  return 0;

}
