#ifndef SHELL_H
#define SHELL_H
#include "system.h"
#include "string.h"
#include "kb.h"
#include "screen.h"
#include "types.h"
#include "util.h"

void launch_shell(int n);
void sum();
void echo();
void sort();
void fill_array(int arr[],int n);
void print_array(int arr[],int n);
void insertion_sort(int arr[],int n,int ordre);
int sum_array(int arr[],int n);
void fibonaci();
int fibo(int n);
int gcd_couple(int a,int b);
void gcd();
void print_matrix(int matrix[][100],int rows,int cols);
void set_background_color();
void multiply();
void help();
#endif
