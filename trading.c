#include <assert.h>
#include "trading.h"
#include <stdint.h>
#include <stdlib.h>
#include <stdio.h>

Queue queue_one(int32_t size)
{
    queue company1 ={0,0,0,{null}};
    return company1;
}
int32_t queue_full (Queue *q){
    assert(q!= null);
    return (q->count == que->size);

}

int32_t queue_empty (Queue *q){
    assert(q!=null);
    return (q->count ==0);
}

Queue* queue_add(Queue *q,char name[],int32_t date[],int32_t price,int32_t quantity,Result *result)
{
    assert(q!= null);
    if(que->count <q->size){
            q->data[q->rear]=el'
            q->rear =(q1->rear +1) % q->size;
            ++q1->count;
            result->status=ok;
            }else{
            result->status=full_queue;
            }
    return q;
}

Queue* queue_delete(Queue *q, Result *res){
    assert( q != NULL );

    if (q->count != 0){
        res->data = q->data[q->front];
        q->front = (q->front+1)%q->size;
        --q->count;
        res->status = QUEUE_OK;
    }else{
        res->status = QUEUE_EMPTY;
    }
    return q;
}

int32_t queue_length(Queue *q){
    assert( q != NULL );
    return q->count;
}

Queue* add_share(Queue *q, TradingQ share, QueueResult *res)
{
if(q->count==Q_LEN)
{
    q=queue_delete(q,res);
}
else{
    q=queue_add(q,share,res);
}


Queue* look_up(Queue* q,TradingQ share)
{
    assert(q!=NULL);
    for(i=q->front;i<=Q_LEN;i++)
    {
      if(q->share->name==share->name)
        break;



   }
   return i;
}
Queue* topup(Queue* q,TradingQ share,int quantity)
{
assert(q!=NULL);
for(i=q->front;i<=Q_LEN;i++)
{
    if(q->share->name==share->name)
        q->share->quantity=q->share->quantity+quantity;
}
return i;
}
