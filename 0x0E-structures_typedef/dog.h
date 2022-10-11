#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that returns a structure values
 * struct: used to create a structure function in c
 * Return: 0
 */

struct User
{
	char *name;
	char *email;
	int age;
};

struct User *new_user(char *name, char *email, int age)
{
	struct User *user;

	user = malloc(sizeof(struct user));
	if (user == NULL)
		return (NULL);
	user->name = name;
	user->email = email;
	user->age = age;

	return user;
}
int main()
{
	struct user *user;

	user = new_user("foo", "foo|foo.bar", 98);
	if (user == NULL)
		return (1);
	printf("user %s created !\n", user->name);
	printf("His email is: %s\n", user->email);
	printf("And he is %d years old\n", user->age);

	return 0;
}
