
type operation_s = {
    op_number       : number;
    op_str          : string;
    time_value      : number;
}

type order_s = {
    order_id        : number;
    bprint_str      : string;
    product_count   : number;
    shop_id         : number;
    operations      : Array<operation_s>; 
}