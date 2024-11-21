#include <iostream>
#include <vector>
#include <unordered_map>


struct Edge{
    int neighbor; // Vertices known by an integer key
    double weight;
};

using Graph = std::unordered_map<int, std::vector<Edge> >;

int main(){
    std::cout << "";
}