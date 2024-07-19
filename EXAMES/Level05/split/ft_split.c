#include <stdio.h>
#include <stdlib.h>

int   sspace(char c)
{
	return (c == ' ' || c == '\t' || c == '\n');
}

int count_word(char *str)
{
	int is_word = 0;
	int len = 0;
	int i = 0;
	while (str[i])
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			is_word = 0;
		}
		if (is_word == 0)
		{
			len++;
			is_word = 1;
		}
		i++;
	}
	return (len);
}

char *copy_word(char *str, int length) {
    char *word = (char *)malloc(sizeof(char) * (length + 1));
    if (!word) {
        return NULL;
    }
    int i = 0; 
    while (i < length)
    {
        word[i] = str[i];
	i++;
    }
    word[length] = '\0';
    return word;
}

char **ft_split(char *str) {
    int word_count = count_word(str);
    char **result = (char **)malloc(sizeof(char *) * (word_count + 1));
    if (!result) {
        return NULL; // Handle memory allocation failure
    }

    int word_index = 0;
    while (*str)
    {
        while (sspace(*str)) 
	{
            str++;
        }
        if (*str)
	{
            char *start = str;
            int length = 0;
            while (*str && !sspace(*str)) 
	    {
                length++;
                str++;
            }
            result[word_index] = copy_word(start, length);
            if (!result[word_index]) {
                // Handle memory allocation failure, free previously allocated memory
                int i = 0; 
		while (i < word_index) 
	       	{
                    free(result[i]);
		    i++;
                }
                free(result);
                return NULL;
            }
            word_index++;
        }
    }
    result[word_index] = NULL;
    return result;
}

int main() 
{
    char str[] = "He\two";
    char **words = ft_split(str);

    if (words) {
        for (int i = 0; words[i] != NULL; i++) {
            printf("Word %d: %s\n", i + 1, words[i]);
            free(words[i]); // Free each word
        }
        free(words); // Free the array of pointers
    }

    return 0;
}
