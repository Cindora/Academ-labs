#include<stdio.h>
#include<stdlib.h>
#include <string.h>
#include "XML_parser.h"


#define BUF_SIZE 64



void *read_file_ascii(const char *path, struct list *head) {
    FILE* fp = fopen(path, "r");
    if (!fp) {
        printf("Error loading file '%s'\n", path);
        return NULL;
    }

    char* buf = (char*)malloc(sizeof(char) * (BUF_SIZE));

    while (!feof(fp))
    {
        fgets(buf, BUF_SIZE, fp);
        char* splited = strtok(buf, ">");
        if (splited != NULL) {
            splited = strtok(NULL, "<");
            int elem;
            if (splited != NULL)
                if (elem = atoi(splited)) {
                    add(elem, head);
                    //printf("func %s\n", head);
                    //printf("Hi %d\n", elem);
                    ;
                }
        }
    }

    fclose(fp);

    //display(head);
    //return &head;
}
