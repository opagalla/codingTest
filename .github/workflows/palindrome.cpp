#include <iostream>
#include <bits/stdc++.h>
#include <sstream>

using namespace std;

bool isPalindrome(string str)
{
  int l=0, h = str.length();
  for(int i=0;i<h;i++)
     str[i]=tolower(str[i]);
  while (l <=h) {
     if (!(str[l] >= 'a' && str[l] <= 'z'))
       l++;
     else if (!(str[h] >= 'a' && str[h] <= 'z'))
       h--;
     else if (str[l] == str[h])
      l++, h--;
     else
      return false;  
  }
  return true;
}

int reverseDigits(int num)
{
  int rev_num =0;
  while (num>0) {
    rev_num = rev_num *10 + num % 10;
    num = num/10;
  }
  return rev_num;
}

int isStringNumeric(char *num) {
  int i=0;
  while (*(num+i)) {
    if(*(num+i) >= '0' && *(num+i) <= '9')
       i++;
    else
       return 0;
  }
  return 1;
}

int main() {
//string str = "Step on no pets";
string str = "1891";
//string str = "Dad";

char *str1 = new char[str.size()+1];
std::copy(str.begin(),str.end(), str1);

if(isStringNumeric(str1)) {
cout<<"its a number"<<endl;
stringstream numbstream(str1);
int x=0;
numbstream >>x;
int rev_n = reverseDigits(x);
if(rev_n == x) {
cout<<"Number is palindrome";
}
else { cout<<"Number is not palindrome";}

} else {

if (isPalindrome(str)) {
cout<<"word/phrase is palindrome";

} else {
cout<<"word/phrase is NOT palindrome";

}


}
return 0;
}
