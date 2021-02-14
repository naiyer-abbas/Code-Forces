#include <bits/stdc++.h>
using namespace std;

#define ll long long int
#define pb push_back
#define mp make_pair
#define fast ios_base :: sync_with_stdio(0);    cin.tie(0);     cout.tie(0);

int visited [100001] = {};

class Node
{
public:
    int data;
    Node* l_child = NULL;
    Node* r_child = NULL;
};

class Tree
{

public:
     Node* root = new Node;
     void createTree(int n, int m);
     int postorder(Node *p);
     int postorder() {  return postorder(root); }
};

void Tree ::  createTree(int n, int m)
    {
        Node * p;
        Node *t;
        Node *r;
        queue <Node*> q;
        root -> data = n;
        q.emplace(root);

        while(q.empty() == false)
        {
            p = q.front();
            q.pop();


            t = new Node;
            t -> data = p -> data * 2;

            if(visited[t -> data] == 0 && t -> data <= 2 * m && t -> data > 0)
            {
                q.emplace(t);
                p -> l_child = t;
                visited[t -> data] = 1;
            }

            else
            {
                p -> l_child = NULL;
            }

            r = new Node;
            r -> data = p -> data - 1;

            if(r -> data > 0 && r-> data <= m * 2 && visited[r -> data] == 0)
            {
                p -> r_child = r;
                q.emplace(r);
                visited[r -> data] = 1;
            }

            else
            {
               p -> r_child = NULL;
            }

            if(t -> data == m || r -> data == m)
            {
                break;
            }
        }
    }

    int Tree :: postorder(Node *p)
  {
      int a, b;
      if(p)
      {
         a =  postorder(p -> l_child);
         b = postorder(p-> r_child);
          if(a > b)
          {
              return a + 1;
          }

          else
          {
              return b + 1;
          }
      }
      return 0;
  }


int x = 0;

int solve(int, int);


int main()
{
    fast;
    int n, m;
    cin >> n >> m;

    if(m < n)
    {
        cout << (n - m);
        return 0;
    }

    if(m == n)
    {
        cout << 0;
        return 0;
    }
    Tree t1;
    t1.createTree(n, m);
    cout << t1.postorder() - 1;
}


