#include"list.h"
#include<stdio.h>

define_list(int);
define_list(double);

void display(list(int)* list)
{
    list_node_int* temp = list->head;
    for(int i = 0; i < size(list); ++i)
    {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    list(int)* a;list(double)* b;
    a = new_list(int, 3, 10);
    b= new_list(double, 3, 10);
    //printf("front: %d size: %d\n", front(a), size(a));
    display(a);
    push_front(a, 20);
    push_back(a, 30);
    display(a);
}