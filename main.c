#include <stdio.h>
#include <stdlib.h>
#include "trading.h"
#include <stdint.h>
#include <assert.h>

void test_empty() {
    Queue q1 = queue_new(5);
    Queue *q = &q1;
    assert(queue_empty(q));
}
void test_buy() {
    Queue q1 = queue_new(5);
    Queue *q = &q1;
    QueueResult res;

    q = buy(q,"amazon","22-12-2020",1200, 10, &res);
    q = buy(q,"flipkart","22-12-2020",2500, 20, &res);
    q = buy(q,"phonepe","22-12-2020",1500, 30, &res);
    q = buy(q,"myntra","22-12-2020",500, 40, &res);
    q = buy(q,"gpay","22-12-2020",1100, 10, &res);
    assert(queue_length(q) == 5);
    assert(q1.d[0].prize==1200);
    assert(queue_full(q));
}

void test_lookup()
{
    Queue q1 = queue_new(5);
    Queue *q = &q1;
    QueueResult res;

    q = add_share(q,"delivary","22-12-2020",1200, 10, &res);
    q = add_share(q,"google","22-12-2020",2500, 20, &res);
    q = add_share(q,"dell","22-12-2020",1500, 30, &res);
    q = add_share(q,"facebook","22-12-2020",500, 40, &res);
    q = add_share(q,"instagram","22-12-2020",1100, 10, &res);
    assert(lookup(q,"google"));
}

int main()
{
    printf("Hello world!\n");
    test_empty();
    test_add_share();
    test_lookup();
    return 0;
}
