#include "Graph.h"
using namespace std;


int main()
{
    setlocale(LC_ALL, "RUS");

    Graph g;

    string user1 = "Катя";
    string user2 = "Дима";
    string user3 = "Давид";
    string user4 = "Леша";
    string user5 = "Никита";
    string user6 = "Эмиль";
    string user7 = "Артем";
    string user8 = "Саша";
    string user9 = "Маша";

    g.add_user(user1);
    g.add_user(user2);
    g.add_user(user3);
    g.add_user(user4);
    g.add_user(user5);
    g.add_user(user6);
    g.add_user(user7);
    g.add_user(user8);
    g.add_user(user9);

    cout << "Пользователи: " << endl;
    g.print_users();


    g.add_friends(user1, user5);
    g.add_friends(user5, user2);
    g.add_friends(user2, user6);
    g.add_friends(user6, user8);
    g.add_friends(user6, user3);
    g.add_friends(user6, user9);
    g.add_friends(user3, user4);
    g.add_friends(user4, user7);
    g.add_friends(user7, user9);

    cout << endl<< "Матрица дружбы:" << endl;
    g.print_matrix();

    cout << endl<<"Матрица знакомств:" << endl;
    g.find_min_distance();

    return 0;
}