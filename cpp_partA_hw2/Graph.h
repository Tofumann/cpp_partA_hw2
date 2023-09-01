#pragma once

#include<iostream>
#include<vector>
#include<string>
#include<map>
#include<random>

using namespace std;

class Graph {

public:
    Graph();
    Graph(int node_number);
    int V(Graph G);
    int E(Graph G);


private:
    //choose connectivity matrices to represent
    float** con_matrix;

    int vertex_num;
    int edge_num;

    std::map<int, char> node_maps;

};


   