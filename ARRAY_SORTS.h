#pragma once

#include <iostream>
#include <vector>
#include <random>
#include <chrono>
#include <algorithm>
#include <memory>
#include <thread>
#include <future>
using namespace std;

int random_generator(vector<int> seed);
void print_multithread(string n);

const size_t VECTOR_SIZE = 2000;


void quick_sort(vector<int>& v);
void quick_sort_heap(vector<int>* v);
unique_ptr<vector<int>> quick_sort_multithreading(unique_ptr<vector<int>> v);
void quick_sort_prim(int* v, size_t size);





