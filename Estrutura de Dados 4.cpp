#include <stdio.h>
//Função malloc (Memory Allocation)//
void* malloc(size_t size);
//Função calloc (Contiguous Allocation)
void* calloc(size_t num_elements, size_t size_of_each_element);
//Função free//
void free(void* ptr);