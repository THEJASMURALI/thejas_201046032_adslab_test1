#include<stdint.h>
#include"appconstant.h"

#ifndef TRADING_H_INCLUDED
#define TRADING_H_INCLUDED

typedef struct _shares_ Shares;

struct _shares_ {
    char    name[SHARE_NAME_LEN];
    int32_t date[SHARE_DATE_LEN];
    int32_t price[SHARE_PRICE_LEN];
    int32_t quntity[SHARE_QUANTITY_LEN];
};

typedef struct _queue_ Queue;

struct _queue_ {
    int32_t size;
    int32_t count;
    int32_t rear;
    int32_t front;
    TradingQ share[
};

typedef struct _result_ Result;

struct _result_ {
    TradingQ share;
    int32_t  status_report;
};


Queue queue_one(int32_t size);
int32_t queue_full (Queue *q);
int32_t queue_empty (Queue *q);
Queue* queue_add(Queue *q,char name[],int32_t date[],int32_t price,int32_t quantity,Result *result);
Queue*  queue_delete(Queue *q, Result *res);
int32_t queue_length(Queue *q);
Queue* add_share(Queue *q, TradingQ share, QueueResult *res)
Queue*  look_up (Queue *q, TradingQ share);
Queue* topup(Queue* q,TradingQ share,int quantity);
#endif // TRADING_H_INCLUDED
