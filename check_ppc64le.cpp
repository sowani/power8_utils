// check if ppc64le.
#include <iostream>
using namespace std;

int main (void)
{
#if defined(__PPC64__) && defined (__LITTLE_ENDIAN__)
#warning "building for ppc64le"
  cout << "on ppc64le" << endl;
#else
#warning "not building for ppc64le"
  cout << "not on ppc64le" << endl;
#endif /* PPC64 && LITTLE_ENDIAN */
}
