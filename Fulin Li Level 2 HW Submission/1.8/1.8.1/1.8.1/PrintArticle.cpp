// PrintArticle.cpp
//
// Purpose: Print the contents of a struct called Article.
//
// @author Fulin Li
// @version 1.0 11/02/14

#include <stdio.h>
#include <string.h>

#ifndef LENGTH
#define LENGTH 20
#endif

struct Article
{
	int ar_number; // Article number
	int quantity; // Quantity
	char description[LENGTH + 1]; // Description
};

void main()
{
	struct Article article; // An instance of the "Article" structure.

	// Print the contents of an instance of the "Article" structure.
	// p_article - a pointer to an instance of the "Article" structure.
	void Print(struct Article* p_article);

	// Initialize the contents of article.
	article.ar_number = 520;
	article.quantity = 1314;
	strcpy_s(article.description, "I love Lewei Wang");

	// Print the contents of article.
	Print(&article);
}

void Print(struct Article* p_article)
{
	printf("Article number: %d\n", (*p_article).number);
	printf("Quantity: %d\n", (*p_article).quantity);
	printf("Desciption: %s\n", (*p_article).description);
}
