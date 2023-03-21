#include <stdlib.h>
#include <stdio.h>

typedef struct node {
    int data;
    struct node *next;
} node;

typedef struct list {
    node *head;
    node *tail;
} list;

void init(list *l) {
    l->head = NULL;
    l->tail = NULL;
}

void append(list *l, int data) {
    node *n = malloc(sizeof(node));
    n->data = data;
    n->next = NULL;

    if (l->head == NULL) {
        l->head = n;
        l->tail = n;
    } else {
        l->tail->next = n;
        l->tail = n;
    }
}

//clear list
void clear(list *l) {
    node *n = l->head;
    while (n != NULL) {
        node *next = n->next;
        free(n);
        n = next;
    }
    l->head = NULL;
    l->tail = NULL;
}

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
    size_t i;
    size_t j;
    size_t k;

    i = 0;
    j = 0;
    k = 0;
    while (dst[i] != '\0')
        i++;
    while (src[j] != '\0')
        j++;
    if (size <= i)
        j += size;
    else
        j += i;
    while (src[k] != '\0' && i + 1 < size)
    {
        dst[i] = src[k];
        i++;
        k++;
    }
    dst[i] = '\0';
    return (j);
}

int main() {
    //print 1 2 3 4.. in a list
    list l;
    init(&l);
    for (int i = 0; i < 10; i++) {
        append(&l, i);
    }
    node *n = l.head;
    while (n != NULL) {
        printf("%d ", n->data);
        n = n->next;
    }
}