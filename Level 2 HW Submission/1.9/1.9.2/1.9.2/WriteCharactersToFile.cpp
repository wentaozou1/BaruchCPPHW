// WriteCharactersToFile.cpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include <stdio.h>
#include <stdlib.h>

#ifndef MAX_LENGTH
#define MAX_LENGTH 10000
#endif

#ifndef MAX_NAME_LENGTH
#define MAX_NAME_LENGTH 20
#endif

void main()
{
	int char_input;
	int n_count = 0;
	char str[MAX_LENGTH];
	char str_file[MAX_NAME_LENGTH];
	
    //和之前一样，如果运行不了就uncomment下面这行
	//void toFile(char str_file[MAX_NAME_LENGTH], char str[MAX_LENGTH], int n_count);

	printf("Please input a string as file name, ended with .txt");

	gets_s(str_file);
	
	printf("Please input characters. Press ENTER to write characters to the specified file or use CTRL + A to end.\n");

	while ((char_input = getchar()) != 1)
	{
		if (char_input == 10 && n_count > 0)
		{
			WriteToFile(str_file, str, n_count);
            n_count = 0;
			continue;
        }else{
            str[n_count] = char_input;
            n_count++;
        }
	}
	if (n_count > 0)
	{
		toFile(str_file, str, n_count);
	}
	printf("CTRL + A is a correct ending.\n");
}

void toFile(char str_file[MAX_NAME_LENGTH], char str[MAX_LENGTH], int n_count)
{
	FILE* pf;
	errno_t err = fopen_s(&pf, str_file, "a+");

	if (err != 0)
	{
		printf("Error: File cannot be opened.");
		return;
	}
	for (int i = 0; i <= n_count - 1; i++)
	{
		fputc(str[i], pf);
	}

	fputc('\n', pf);

	fclose(pf);
}
