//Author: Muhammad Ali
//Lab# 14
//Check Directed Path

#include <iostream>
#include <queue>
#include "graph.h"

using namespace std;
using namespace main_savitch_15;

template <class Item>
bool path(graph<Item>& g, size_t start, size_t end) {
        bool marked[g.MAXIMUM];
        set<size_t> connections;
        set<size_t>::iterator it;
        queue<size_t> vertex_queue;
        assert(start < g.size( ));
        fill_n(marked, g.size( ), false);
        marked[start] = true;
        if (start == end) {return false;}
        vertex_queue.push(start);
        do
        {
            connections = g.neighbors(vertex_queue.front( ));
            vertex_queue.pop( );
            for (it = connections.begin( ); it != connections.end( ); ++it)
            {
                if (!marked[*it])
                {
                    marked[*it] = true;
                    if (end == *it ) {
                        return true;
                    }
                    vertex_queue.push(*it);
                }
            }
        }
        while (!vertex_queue.empty( ));
    return false;
}

int main() {
    graph<string> *g1 = new graph<string>();
    g1->add_vertex("Seattle"); //0
    g1->add_vertex("San Francisco"); //1
    g1->add_vertex("Los Angeles"); //2
    g1->add_vertex("Denver"); //3
    g1->add_vertex("Kansas City"); //4
    g1->add_vertex("Chicago"); //5
    g1->add_vertex("Boston"); //6
    g1->add_vertex("New York"); //7
    g1->add_vertex("Costa Rica"); //8
    g1->add_edge(0,5);g1->add_edge(0,3);g1->add_edge(0,1);
    g1->add_edge(1,3);g1->add_edge(1,2);
    g1->add_edge(2,3);g1->add_edge(2,4);
    g1->add_edge(3,5);g1->add_edge(3,4);
    g1->add_edge(4,5);g1->add_edge(4,7);
    g1->add_edge(5,6);g1->add_edge(5,7);
    g1->add_edge(6,7);
    assert(path(*g1, 0, 7));
    assert(!path(*g1, 0, 8));
    cout<<"All Tests Passed!"<<endl;
    return 0;
}