#include <iostream>
#include <algorithm>
#include <memory>
#include <string>
#include <vector>
#include 
#include "street.h"

#define endl "\n"


typedef pair<int, int> Pair;

// Represent a graph object

class streetGraph{
public:
    vector<vector<Pair>> adjList;

    StreetGraph(vector<Street> const &streets, int N)
    {
        // resizing vector to hold n element in vector<pair>
        adjList.resize(N);

        for (auto &street: streets)
        {
            int src = street.src;
            int dest = street.dest;
            int weight = street.weight;

            
            adjList[src].push_back(make_pair(dest, weight));
        }
    }

using namespace std;

  int main()
{
    vector<Edge> edges =
            {
                    // `(x, y, w)` —> edge from `x` to `y` having weight `w`
                    { 0, 1, 6 }, { 1, 2, 7 }, { 2, 0, 5 }, { 2, 1, 4 },
                    { 3, 2, 10 }, { 5, 4, 1 }, { 4, 5, 3 }
            };
    
     int N = 6;

  
    Graph graph(edges, N);


    printGraph(graph, N);

   

    return 0;
}
