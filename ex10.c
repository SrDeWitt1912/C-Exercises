#include <stdio.h>

int main(int argc, char *argv[])
{
	int i = 0;

	// let's make our own array of strings
	char *states[] =
	{
		"California", "Oregon",
		"Washington", "Texas", "New York"
	};

	int num_states = sizeof(states);

	for (i = 0; i < num_states; i++)
	{
		printf("state %d: %s\n", i, states[i]);
	}

	return 0;
}
