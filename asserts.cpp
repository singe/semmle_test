#include <cassert>
#include <iostream>
#include <string.h> 
using namespace std;

int main()
{
  char foo[10];
  char bar[10];
  int len;

  cout << "foo? ";
  cin >> foo;

  len = strlen(foo);

  assert(len < 10);
  cout << "yay\n";

  memcpy(bar, foo, len);
  cout << bar;
	return 0;
}
