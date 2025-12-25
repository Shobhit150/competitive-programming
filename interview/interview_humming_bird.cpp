#include<iostream>
#include<vector>
#include<unordered_set>
#include <climits>
using namespace std;

int dfs(vector<vector<int>> &graph, vector<int> &infection) {
    int n = graph.size();

    unordered_set<int> set;
    for(int &num: infection) {
        set.insert(num);
    }
    
    int maxi = 0;
    int idx = INT_MAX;
    for(int &num: infection) {
        int count = 0;
        for(int i=0;i<n;i++) {
            if(graph[num][i] == 1) {
                if(!set.count(i)) {
                    count++;
                }
            }
        }
        if(count > maxi || (count == maxi && num < idx)) {
            idx = num;
            maxi = count;
        }
    }
    return idx;
}