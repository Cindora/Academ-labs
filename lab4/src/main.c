#include "bmp.h"
#include "stdio.h"
#include "stdlib.h"
#include "string.h"

int cut_rotate(int argc, char** argv)
{
	if (argc != 7)
		return 1;

	char* filein = argv[1];
	char* fileout = argv[2];
	int y = atoi(argv[3]), x = atoi(argv[4]), w = atoi(argv[5]), h = atoi(argv[6]);

	int flag = 0;
	bmp_t *bmp = (bmp_t*)calloc(1, sizeof(bmp_t)), *cut_bmp = (bmp_t*)calloc(1, sizeof(bmp_t)), *rotate_bmp = (bmp_t*)calloc(1, sizeof(bmp_t));

	if (bmp == NULL || cut_bmp == NULL || rotate_bmp == NULL)
		flag = 2;
	else if (load_bmp(bmp, filein, &x))
		flag = 3;
	else if (cut(bmp, cut_bmp, x, y, w, h))
		flag = 4;
	else if (rotate(cut_bmp, rotate_bmp))
		flag = 5;
	else if (save_bmp(rotate_bmp, fileout))
		flag = 6;

	if (bmp->data != NULL)
		free(bmp->data);
	if (bmp != NULL)
		free(bmp);
	if (cut_bmp->data != NULL)
		free(cut_bmp->data);
	if (cut_bmp != NULL)
		free(cut_bmp);	
	if (rotate_bmp->data != NULL)
		free(rotate_bmp->data);
	if (rotate_bmp != NULL)
		free(rotate_bmp);

	return flag;
}

int main(int argc, char** argv)
{
	if (argc <= 1)
		return -1;
	return cut_rotate(argc, argv);
	
}

