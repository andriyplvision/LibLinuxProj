#include <stdio.h>
#include <ctype.h>

void lower()
{
	char s[256] = {0};
	printf("\nPlease, enter text to be lowercased:\n");
	scanf("%s", s);
	
	for(int i = 0; s[i]!=0; i++)
	{
		/*I could check it by ASCII value manually but it wasn't demand in the task description
		 */ 
		s[i]=tolower(s[i]);
	}
	printf("\nALL LOWERCASE:\n%s", s);
}
