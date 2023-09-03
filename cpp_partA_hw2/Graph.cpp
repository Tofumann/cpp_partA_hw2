// Homework 2: Implementing Dijkstra's Algorithm

#pragma once
#include <iostream>
#include <vector>
#include <string>
#include"Graph.h"

using namespace std;
#define INF 999999;

Graph::Graph() {
    int node_number = 50;
    this->con_matrix = new float* [node_number];
    for (int i = 0; i < node_number; i++) {
        this->con_matrix[i] = new float[node_number];
        for (int j = 0; j < node_number; j++) {
            this->con_matrix[i][j] = INF;
        }
    }
    this->vertex_num = node_number;
    this->edge_num = 0;
}

Graph::Graph(int node_number) {
    this->con_matrix = new float* [node_number];
    for (int i = 0; i < node_number; i++) {
        this->con_matrix[i] = new float[node_number];
        for (int j = 0; j < node_number; j++) {
            this->con_matrix[i][j] = INF;
        }
    }
    this->vertex_num = node_number;
    this->edge_num = 0;
}

int Graph::V(Graph G) {
    return this->vertex_num;
}

int Graph::E(Graph G) {
    return this->edge_num;
}

bool Graph::adjacent(Graph G, const int x, const int y) {
    if (this->con_matrix[x][y] == INF)
        return false;
    else
        return true;
}

vector<int>Graph::neighbors(Graph G, const int x) {
    vector<int> neigh_vector;
    for (int i = 0; i < this->vertex_num; i++) {
        if (this->con_matrix[x][i] != INF) {

        }
    }
}