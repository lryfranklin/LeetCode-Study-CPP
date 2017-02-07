/**
 * Definition for undirected graph.
 * struct UndirectedGraphNode {
 *     int label;
 *     vector<UndirectedGraphNode *> neighbors;
 *     UndirectedGraphNode(int x) : label(x) {};
 * };
 */
class Solution {
public:
    UndirectedGraphNode *cloneGraph(UndirectedGraphNode *node) {
        unordered_map<int, UndirectedGraphNode*> m;
        return clone(node, m);
    }
    UndirectedGraphNode *clone(UndirectedGraphNode *node, unordered_map<int, UndirectedGraphNode*> &m){
        if (!node) return node;
        if (m.count(node->label) != 0) return m[node->label];
        UndirectedGraphNode *temp = new UndirectedGraphNode(node->label);
        m[node->label] = temp;
        for (int i = 0 ; i < node->neighbors.size() ; i++){
            (temp->neighbors).push_back(clone(node->neighbors[i], m));
        }
        return temp;
    }
};