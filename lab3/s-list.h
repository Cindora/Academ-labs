typedef struct node Node;

typedef struct list List;

List * makelist();
void add(int data, List * list);
void delete(int data, List * list);
void display(List * list);
void destroy(List * list);