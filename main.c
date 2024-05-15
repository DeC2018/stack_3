#include <stdio.h>

typedef int Data;

#define N 8
typedef struct {
    Data a[N];
    unsigned int n;
} Stack;

void print(Stack * st)
{
    for(unsigned int i = 0; i < st->n; i++)
        printf("%d ", st->a[i]);
    printf("\n");
}

void init(Stack * st) {
    st->n = 0;
}

void push(Stack * st, Data data) {
    st->a[st->n] = data;
    st->n ++;
}

Data pop(Stack * st) {
    return st->a[-- st->n];
}

int main()
{
    Stack stack;
    Stack * st = &stack;

    init(st);
    print(st);


    push(st, 5);
    print(st);      // 5
    push(st, 17);
    print(st);      // 5 17
    push(st, -3);
    print(st);      // 5 17 -3



    Data d;
    d = pop(st);    // pop -3: 5 17
    printf("pop %d: ", d);
    print(st);

    d = pop(st);    // pop 17: 5
    printf("pop %d: ", d);
    print(st);

    d = pop(st);    // pop 5:
    printf("pop %d: ", d);
    print(st);

    return 0;
}
