#include "S-Linked_List.h"
#include "XML_parsed_elems.h"

#include <stdio.h>
#include <string.h>

int main(int argc, char** argv[])
{
    struct Node* head = NULL;

    //int a[] = { 10, 15, 64, 34, 76, 43, 22, 34 };

    //int len = sizeof(a) / sizeof(a[0]);

    //for (int i = 0; i < len; i++)
    //    insertFirst(&head, a[i]);

    //display(head);

    //deleteFirst(&head);
    //deleteFirst(&head);

    

    //char* source = 
    //printf("main %s\n", head);

    read_file_ascii("List_Of_Elements.xml", &head);

    display(head);
    

    //printf("%s\n", source);
    //free(source);


    return 0;
}