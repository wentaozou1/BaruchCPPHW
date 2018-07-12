// PrintArticle.cpp
//
// @author Xinyuan Zhang
// @version 1.0 07/11/18

#include <stdio.h>
#include <string.h>

#ifndef LENGTH
#define LENGTH 20
#endif

struct Article
{
	int ar_number;
	int quantity;
	char description[LENGTH + 1];
};

void main()
{
	struct Article article;
	void Print(struct Article* p_article);
	article.ar_number = 520;
	article.quantity = 1314;
	strcpy_s(article.description, "I love Lewei Wang");
	Print(&article);
}

void Print(struct Article* p_article)
{
	printf("Article number: %d\n", (*p_article).number);
	printf("Quantity: %d\n", (*p_article).quantity);
	printf("Desciption: %s\n", (*p_article).description);
}
