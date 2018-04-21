#include<stdio.h>
/*función multiplica
...
*/
int multiplica_(int multndo, int multdor){
  int producto = 0;
  if (multdor > 0)
    if (multdor & 1)
      producto = multndo + multiplica_(multndo, multdor - 1);
    else
      producto = multiplica_(multndo << 1, multdor >> 1);
  return producto;
}

int main () {
	int m=multiplica_(10,15);
	printf("%d\n", m);
	return 0;
}
