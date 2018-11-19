// Copyright [year] <Copyright Owner>
#include <random>
#include <utility>
#include <vector>
#include <algorithm>
#include "../../data_structures/include/adjacency_list.h"
#include "../../data_structures/include/csr.h"
#include "../../data_structures/include/matching.h"

Matching hard_matching(const AL& graph) {
    Matching matching;
    int size = graph.n;
    std::vector <int> ed(size);
    for (int i = 0; i < size; i++) {
        ed[i] = i;
    }
    std::random_device rd;
    std::mt19937 g(rd());
    std::shuffle(ed.begin(), ed.end(), g);
    std::copy(ed.begin(), ed.end(), ed.begin());
    std::vector<int>al_id(size);
    for (int i = 0; i < size; i++) {
        al_id[i] = i + 1;
    }
    for (unsigned i = 0; i < graph.edges.size(); i++) {
        int v = ed[i];
        int max_len = 0, e = -1;
        if (al_id[v] > 0) {
            for (unsigned j = 0; j < graph.edges[v].size(); j++) {
                int to = graph.edges[v][j].first,
                    len = graph.edges[v][j].second;
                if (len > max_len && al_id[to] > 0) {
                    max_len = len;
                    e = to;
                }
            }
            if (e != -1) {
                al_id[v] = 0, al_id[e] = 0;
                matching.edge_b.push_back(v);
                matching.edge_e.push_back(e);
                ++matching.n;
            }
        }
    }
    return matching;
}