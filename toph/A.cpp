#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

struct Node{
    int node;
    int color;
};

int main(){
    int n, m, a, b, c, t;

    scanf("%d", &t);

    while(t--){
        scanf("%d %d", &n, &m);
        vector<vector<Node>> graph;
        vector<Node> temp_vector;

        for(int i = 0; i < n +2 ; i++){
            graph.push_back(temp_vector);
        }

        for(int i = 0; i<m; i++){
            scanf("%d %d %d", &a, &b, &c);
            Node node;
            node.node = b;
            node.color = c;

            graph[a].push_back(node);

            Node node;
            node.node = a;
            node.color = c;
            graph[b].push_back(node);
        }
    }

    return 0;
}