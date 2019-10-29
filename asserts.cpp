#include <cassert>
#include <iostream>
#include <string.h> 
using namespace std;

int main()
{
  char foo[10];
  char bar[10];

  cout << "foo? ";
  cin >> foo;

  assert(strlen(foo) < 10);
  cout << "yay\n";

  memcpy(bar, foo, strlen(foo));
  cout << bar;
	return 0;
}
