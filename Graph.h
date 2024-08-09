#pragma once
#include<iostream>

#define SIZE 9
#define VERYWEIGHT 10000

using namespace std;

class Graph
{
private:
    int matrix[SIZE][SIZE];          // матрица смежности
    string users[SIZE];         // хранилище вершин
    int usersCount;                  // количество добавленных вершин

    bool FriendshipExists(string u1, string u2);
    int get_user_index(string user);

public:
    Graph();
    void add_user(string user);
    void add_friends(string u1, string u2);
    void find_min_distance();
    void print_users();
    void print_matrix();
};

