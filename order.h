
#ifndef __order_h_
#define __order_h_

#include <string>
#include <vector>
#include "operation.h"

struct order_s {
    int                 order_id;       //номер заказа
    string              bprint_str;     //чертёжный шифр
    int                 product_count;  //количество единиц в заказе
    int                 shop_id;        //номер цеха
    vector<operation_s> operations;     //
};

#endif