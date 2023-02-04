#include "analyze.h"
#include <stdio.h>
#include <stdlib.h>

// You can add other functions if you want to perform
// other calculations independent of these functions.

double vendor_col1[CAPACITY] = { 0.022727272727273, 0.007575757575758, -0.003787878787879, -0.011363636363636, -0.015151515151515, -0.015151515151515, -0.011363636363636, -0.003787878787879, 0.007575757575758, 0.022727272727273 };
double vendor_col2[CAPACITY] = { 0.259090909090909, 0.110606060606061, -0.003787878787879, -0.084090909090909, -0.130303030303030, -0.142424242424242, -0.120454545454545, -0.064393939393939, 0.025757575757576, 0.150000000000000 };
double vendor_col3[CAPACITY] = { 0.618181818181818, 0.381818181818182, 0.190909090909091, 0.045454545454545, -0.054545454545455, -0.109090909090909, -0.118181818181818, -0.081818181818182, 0, 0.127272727272727 };


void data_init( data_t *p_this, double step_size ) {
    // vendor matrix
    // initialize indexes variables, step_size is only for sin
    p_this->front = 0;
    p_this->rear = 0;
}

// You may not need this if you do not have a dynamically
// allocated array.
void data_destroy( data_t *p_this ) {
    // Your implementation here...
}

void data_append( data_t *p_this, double new_value ) {
    // Your implementation here...
    // enqueue
    if (size(p_this) <= CAPACITY - 1) {
        p_this->entries_[p_this->rear] = new_value;
        p_this->rear = (p_this->rear + 1) % CAPACITY;
    }
}

double data_current( data_t *p_this ) {
    // Your implementation here...
    return 0.0;
}

double data_next( data_t *p_this ) {
    // Your implementation here...
    return 0.0;
}

int size(data_t *p_this) {
    return (CAPACITY - p_this->front + p_this->rear) % CAPACITY;
}