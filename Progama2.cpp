 #include <stdio.h>
#include <stdlib.h>

int main() {
	const char *ra[] = { "1", "9", "1", "0", "8", "5", "5", "7", "5" };
	int ra_ [9];
	int i = 0;
	
	while (i < 9){
		ra_[i] = atoi(ra[i]);
		i++;		
	}
	for (i=0; i < 9; i++)  {
			printf("%d\n", ra_[i]);
		
		}
	
	system("pause");
	
	return 0;
}
