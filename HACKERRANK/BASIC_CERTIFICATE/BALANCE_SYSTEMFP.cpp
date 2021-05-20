#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int size;  
    int total; 
    int index; 
    vector<Node*> children;
    Node(int index, int size)
        : size(size),
          total(size),
          index(index)
    {
    }
};
int caltotal(Node *root)
{
    if (root->children.empty())
        return root->size;
    for (Node *node : root->children)
    {
        root->total += caltotal(node);
    }
    return root->total;
}
void mostBalUtil(Node *root, const int total, int &diff)
{
    if (root == NULL)
        return;
    int d = abs(total - 2 * root->total);
    if (d < diff)
        diff = d;
    for (Node *child : root->children)
        mostBalUtil(child, total, diff);
}
int mostBalPartition(vector<int> parent, vector<int> files_size)
{
    vector<Node *> nodes(parent.size());
    Node *root = NULL;
    for (int i = 0; i < parent.size(); ++i)
    {
        Node *node = new Node(i, files_size[i]);
        nodes[i] = node;
        if (parent[i] != -1)
        {
            nodes[parent[i]]->children.push_back(node);
        }
        else
        {
            root = node;
        }
    }
    int total = caltotal(root);
    int diff = total;
    mostBalUtil(root, total, diff);
    return diff;
}
int main()
{
    int parent_count;
    cin >> parent_count;
    vector<int> parent(parent_count);
    for (int i = 0; i < parent_count; i++)
    {
        cin >> parent[i];
    }
    int files_size_count;
    cin >> files_size_count;
    vector<int> files_size(files_size_count);
    for (int i = 0; i < files_size_count; i++)
    {
        cin >> files_size[i];
    }
    int result = mostBalPartition(parent, files_size);
    cout << result << "\n";
    return 0;
}