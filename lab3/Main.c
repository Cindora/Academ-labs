#include <stdio.h>
#include <stdlib.h>
#include "s-list.h"
#include "XML_parser.h"

int main(void){
    List * list = makelist();

    /*
    add(1, list);
    add(20, list);
    add(2, list);
    add(5, list);
    add(8, list);
    add(9, list);
    add(13, list);
    display(list);
    delete(2, list);
    display(list);
    delete(1, list);
    display(list);
    delete(20, list);
    display(list);
*/

    read_file_ascii("D:\\Academ\\Academ-labs\\lab3\\List_Of_Elements.xml", list);
    display(list);

    return 0;
}
