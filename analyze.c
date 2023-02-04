#include "analyze.h"
#include <stdio.h>
#include <stdlib.h>

// You can add other functions if you want to perform
// other calculations independent of these functions.

double vendor_col1[CAPACITY] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
double vendor_col2[CAPACITY] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
double vendor_col3[CAPACITY] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};


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