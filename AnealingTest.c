#include <stdio.h>
#include <stdlib.h>

void printmap(int **map, int mapsize)
{
	int x;
	int y;
	for (y=0; y < mapsize; y++)
	{
		for(x = 0; x < mapsize; x++)
		{
			printf("%d", map[y][x]);
		}
		printf("\n");
	}
}
	

int main(int argc, char **argv)
{
	//generates mapsize and seed
	int seed;
	int mapsize;
	if (argc > 1)
		mapsize = atoi(argv[1]);
	else
		mapsize = 100;
	if (argc > 2)
		seed = atoi(argv[2]);
	else
		seed = rand();
	printf("The seed is %d.\n", seed);
	srand(seed);
	
	//generates map;
	int x;
	int y;
	int map[mapsize][mapsize];
	for (y=0; y < mapsize; y++)
	{
		for(x = 0; x < mapsize; x++)
		{
			map[y][x] = rand()%2;
		}
	}
	printf("Random Map:\n");
	//printmap(map, mapsize);
	for (y=0; y < mapsize; y++)
	{
		for(x = 0; x < mapsize; x++)
		{
			printf("%d", map[y][x]);
		}
		printf("\n");
	}
	//Anneals map
	int counter;
	for (y=1; y < mapsize-1; y++)
	{
		for(x = 1; x < mapsize - 1; x++)
		{
			counter = 0;
			if (map[y][x] == 1)
				counter +=1;
			if (map[y][x+1] == 1)
				counter +=1;
			if (map[y][x-1] == 1)
				counter +=1;
			if (map[y+1][x] == 1)
				counter +=1;
			if (map[y+1][x+1] == 1)
				counter +=1;
			if (map[y+1][x-1] == 1)
				counter +=1;
			if (map[y-1][x] == 1)
				counter +=1;
			if (map[y-1][x+1] == 1)
				counter +=1;
			if (map[y-1][x-1] == 1)
				counter +=1;
			if (counter >= 5)
				map[y][x] = 1;
			else
				map[y][x] = 0;
		}
	}
	printf("\nAnealed Map:\n");
	//printmap(map, mapsize);
	for (y=0; y < mapsize; y++)
	{
		for(x = 0; x < mapsize; x++)
		{
			printf("%d", map[y][x]);
		}
		printf("\n");
	}
	

	return 0;
}

	
		
		
