#include "libft.h"
#include <stdio.h>
#include <ctype.h>
#include <strings.h>
#include <string.h>
#include <bsd/string.h>


char add(unsigned int plus,char c)
{
	c = c + 1;
	return (c);
}


int main()
{
	printf("Test of LIBFT\n");

	printf("------------------------------------------\n");
 
	printf("isalpha with 5 : %d \n", isalpha(53));
	printf("isalpha with a : %d \n", isalpha(97));
	printf("ft_isalpha with 5: %d \n", ft_isalpha(53));
	printf("ft_isalpha with a: %d \n ", ft_isalpha(97));
 
	printf("------------------------------------------\n");
 
	printf("isdigit with 5 : %d \n", isdigit(53));
	printf("isdigit with a : %d \n", isdigit(97));
	printf("ft_isdigit with 5 : %d \n", ft_isdigit(53));
	printf("ft_isdigit with a : %d \n", ft_isdigit(97));

	printf("------------------------------------------\n");

	printf("isalnum with ! : %d \n", isalnum('!'));
	printf("isalnum with a : %d \n", isalnum('a'));
	printf("ft_isalnum with ! : %d \n", ft_isalnum('!'));
	printf("ft_isalnum with a : %d \n", ft_isalnum('a'));

	printf("------------------------------------------\n");

	printf("isascii 200 : %d \n", __isascii(200));
	printf("isascii 150 : %d \n", __isascii(90));
	printf("ft_isascci 200 : %d \n", ft_isascii(200));
	printf("ft_isascci 150 : %d \n", ft_isascii(90));

	printf("------------------------------------------\n");

	printf("isprint with nl : %d \n", isprint('\n'));
	printf("isprint with 5 : %d \n", isprint(53));
	printf("ft_isprint with nl : %d \n", ft_isprint('\n'));
	printf("ft_isprint with 5 : %d \n", ft_isprint(53));

	printf("------------------------------------------\n");

	printf("strlen  hello : %d \n", (int) strlen("hello"));
	printf("ft_strlen  hello : %d \n", ft_strlen("hello"));
	
	printf("------------------------------------------\n");

	printf("MEMSET Test, reset hello string to 55555 \n");
	char s3[6] = "hello";
	char s4[6] = "hello";
	printf("memset : %s \n", (char *) memset(s3, '5', 5));
	printf("ft_memset : %s \n",(char *) ft_memset(s4, '5', 5));

	printf("------------------------------------------\n");

	printf("BZERO test avec hello\n");
	char s5[6] = "hello";
	char s6[6] = "hello";

	bzero(s5, 5);
	ft_bzero(s6, 5);
	printf("bzero : %s \n", s5);  
	printf("ft_zero : %s \n", s6);

	printf("------------------------------------------\n");
	
	 /* printf("Test MEMCPY\n");
	char *src = "helloyarars";
	char dest1[8];
	char dest2[8];
	printf("memcpy  copy 6 : %s \n", (char *) memcpy(dest1, src, 6));
	printf("memcpy  copy 6 : %s \n", (char *) memcpy(NULL, src, 6));
	printf("ft_memcpy copy 6 : %s \n", (char *)memcpy(dest2, src, 6));
	printf("ft_memcpy copy 6 : %s \n", (char *)memcpy(NULL, src, 6)); */


	printf("------------------------------------------\n");

	char src2[50] = "Overlapingsucks";
	char src3[50] = "Overlapingsucks";
	char dst1[50];
	char dst2[50];

	printf("memmove : %s \n", (char *) memmove(src2  + 3, src2, 10));
	printf("memmove : %s \n", (char *) memmove(src2, src2 + 5 , 10));
	printf("memmove : %s \n", (char *) memmove(dst1, src2, 10));

	printf("ft_memmove : %s \n", (char *) ft_memmove(src3 + 3, src3, 10));
	printf("ft_memmove : %s \n", (char *) ft_memmove(src3, src3 + 5, 10));
	printf("ft_memmove : %s \n", (char *) ft_memmove(dst2, src3, 10));

	printf("------------------------------------------\n");

	char str1[50] = "I copy that string";
	char str2[50];

	printf("strlcpy : %ld\n", strlcpy(str2, str1, 15));
	printf("ft_strlcpy : %ld\n", ft_strlcpy(str2, str1, 15));
	
	printf("------------------------------------------\n");

	char str3[50] = "I concatanate ";
	char str4[50] = "those strings";

	printf("strlcat : %ld \n", strlcat(str3, str4, 7));
	printf("strlcat : %ld \n", strlcat(str3, str4, 7));

	printf("------------------------------------------\n");

	printf("toupper a: %c\n ", toupper('a'));
	printf("ft_toupper a : %c\n", ft_toupper('a'));

	printf("------------------------------------------\n");

	printf("tolower A : %c \n", tolower('A'));
	printf("ft_tolower A : %c \n", ft_tolower('A'));
	
	printf("------------------------------------------\n");

	char *tosearch = "You should have this";
	char c1 = 't';

	printf("strchr : %s \n",  strchr(tosearch, c1));
	printf("ft_strchr : %s \n", ft_strchr(tosearch, c1));

	printf("------------------------------------------\n");

	char c2 = 'o';

	printf("strrchr : %s \n", strrchr(tosearch, c2));
	printf("ft_strrchr : %s \n", ft_strrchr(tosearch, c2));

	printf("------------------------------------------\n");

	char *to_compare1 ="You got the same string";
	char *to_compare2 = "You got the same charactere";
	int nbcompare = -1;

	printf ("strncmp : %d \n", strncmp(to_compare1, to_compare2, nbcompare));
	printf ("strncmp : %d \n", strncmp(to_compare1, to_compare2, 0));
	printf ("strncmp : %d \n", strncmp(to_compare1, to_compare2, 25));
	printf ("ft_strncmp : %d \n", ft_strncmp(to_compare1, to_compare2, nbcompare));
	printf ("ft_strncmp : %d \n", ft_strncmp(to_compare1, to_compare2, 0));
	printf ("ft_strncmp : %d \n", ft_strncmp(to_compare1, to_compare2, 25));

	printf("------------------------------------------\n");

	printf("memchr : %p \n", memchr(tosearch, c2, 5));
	printf("memchr : %p \n", memchr(tosearch, c2, 0));
	

	printf("ft_memchr : %p \n", ft_memchr(tosearch, c2, 5));
	printf("ft_memchr : %p \n", ft_memchr(tosearch, c2, 0));


	printf("------------------------------------------\n");

	printf("memcpr : %d \n", memcmp(to_compare1,to_compare2, 50));
	printf("memcpr : %d \n", memcmp(to_compare1,to_compare2, 0));
	
	printf("ft_memcpr : %d \n", ft_memcmp(to_compare1,to_compare2, 50));
	printf("ft_memcpr : %d \n", ft_memcmp(to_compare1,to_compare2, 0));

	printf("------------------------------------------\n");

	char *big = "look for the first occurrence";
	char *little = "occurrence";
	int lookfor = 12;

	printf("strnstr : %s \n", strnstr(big, little, lookfor));
	printf("strnstr : %s \n", strnstr(big, little, 0));

	printf("ft_strnstr : %s \n", ft_strnstr(big, little, lookfor));
	printf("ft_strnstr : %s \n", ft_strnstr(big, little, 0));


	printf("------------------------------------------\n");

	printf("atoi : %d \n", atoi("10"));
	printf("atoi : %d \n", atoi("-10"));
	printf("atoi : %d \n", atoi("+10"));
	printf("atoi : %d \n", atoi("0"));
	printf("atoi : %d \n", atoi("-5a"));

	printf("ft_atoi : %d \n", ft_atoi("10"));
	printf("ft_atoi : %d \n", ft_atoi("-10"));
	printf("ft_atoi : %d \n", ft_atoi("+10"));
	printf("ft_atoi : %d \n", ft_atoi("0"));
	printf("ft_atoi : %d \n", ft_atoi("-5a"));

	printf("------------------------------------------\n");

	//CALLOC

	printf("------------------------------------------\n");

	char *toduplicate = "hello !";

	printf("strdup : %s \n", strdup(toduplicate));
	printf("ft_strdup : %s \n", ft_strdup(toduplicate));

	printf("------------------------------------------\n");

	/*char *s = "You got passed the substr test";

    printf("ft_substr : %s \n", ft_substr(s, 0, 50));
	printf("ft_substr : %s \n", ft_substr(s, 60, 0));
	printf("ft_substr : %s \n", ft_substr(s, 60, 50));
	printf("ft_substr : %s \n", ft_substr(NULL, 10, 50));*/

	printf("------------------------------------------\n");

	char *st1 = "You ve got those ";
	char *st2 = "strings concatenated";
	char *st3 = NULL;

	printf("strjoin : %s \n", ft_strjoin(st1, st2));
	printf("strjoin : %s \n", ft_strjoin(st3, st2));
	printf("strjoin : %s \n", ft_strjoin(st1, st3));
	printf("strjoin : %s \n", ft_strjoin(NULL, NULL));
	
	printf("------------------------------------------\n");

	char *strofstrtrim = "qwertyasdfghqwertyuioplqwerty";
	char *charset = "qwerty";

	printf("res : %s\n", ft_strtrim(strofstrtrim, charset));	
	printf("res : %s\n", ft_strtrim(NULL, charset));
	printf("res : %s\n", ft_strtrim(strofstrtrim, NULL));

	printf("------------------------------------------\n");

	char *to_split = "   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ";
	char char_split = ' ';
	char **splitted;
	int exist = 0;
	splitted = ft_split(to_split,char_split);
	while (splitted[exist])
	{
		printf("%s\n", splitted[exist]);
		exist++;
	}

/*
	splitted = ft_split(to_split, 'z');
	while (splitted)
		printf("%s\n", *splitted++); 

	splitted = ft_split(NULL, 'z');
	while (splitted)
		printf("%s\n", *splitted++); */

	printf("------------------------------------------\n");

	printf("itoa 10 : %s\n",ft_itoa(10));
	printf("itoa -10 : %s\n",ft_itoa(-10));
	printf("itoa -10 : %s\n",ft_itoa(0));

	printf("------------------------------------------\n");

	char *mapistr = "abcdef";

	printf("ft_strmapi add +1 ,to each char : %s\n", ft_strmapi(mapistr, &add));

	printf("------------------------------------------\n");
	printf("------------------------------------------\n");
	printf("------------------------------------------\n");
	printf("------------------------------------------\n");
	printf("------------------------------------------\n");
	printf("------------------------------------------\n");
	printf("------------------------------------------\n");
	printf("------------------------------------------\n");
	printf("------------------------------------------\n");
	printf("------------------------------------------\n");

	printf("-------------------FIN--------------------\n"); 

	return (0);
}