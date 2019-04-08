#include<iostream>
#include<stdio.h>
using namespace std;

struct Point{
	int x, y;
};

#define mx 15
int n, w[5], cost[mx], mat[mx][mx], node_cnt;
int queue[mx], queue_front, queue_rear, queue_size, queue_capacity = 15;
Point wh_start[5], wh_end[5], nodes[15];

void queue_reset()
{
	queue_front = 0;
	queue_rear = 0;
	queue_size = 0;
}

bool isempty()
{
	if (queue_size == 0)
		return true;
	else
		return false;
}

void enqueue(int start)
{
	if (queue_size == queue_capacity)
		return;
	queue[queue_rear] = start;
	queue_rear = (queue_rear + 1) % queue_capacity;
	queue_size++;
}

int dequeue()
{
	if (isempty())
    {
        return 0;
    }
	int temp = queue[queue_front];
	queue_front = (queue_front + 1) % queue_capacity;
	queue_size--;
	return temp;
}

void bfs_reset()
{
	queue_reset();
	for (int i = 0; i < 15; i++)
	{
		cost[i] = 3000;
	}
}

void bfs(int start)
{
    bfs_reset();
    enqueue(start);
    cost[start]=0;
    while(!isempty())
    {
        int u = dequeue();
        for(int v=0;v<2*n+2;v++)
        {
            if(cost[v]>cost[u]+mat[u][v])
            {
                enqueue(v);
                cost[v]=cost[u]+mat[u][v];
            }
        }
    }
}

void calculate_cost(int i,int j)
{
    Point a = nodes[i];
    Point b = nodes[j];

    int cost=abs(a.x-b.x)+abs(a.y-b.y);
    mat[i][j]=cost;
    mat[j][i]=cost;
}

void add_node(Point p) 
{
    nodes[node_cnt] = p;
    node_cnt++;
}

int main()
{
	int test;
    Point strt_point, end_point;
	cin >> test;
	for (int t = 1; t <= test; t++)
	{
        node_cnt = 0;
		cin >> n;
		cin >> strt_point.x >> strt_point.y >> end_point.x >> end_point.y;
		for (int i = 0; i < n; i++)
		{
			cin >> wh_start[i].x >> wh_start[i].y >> wh_end[i].x >> wh_end[i].y >> w[i];
		}

        // insert every important point in nodes array
        add_node(strt_point);
        add_node(end_point);
        for(int i = 0; i < n; i++) 
        {
            add_node(wh_start[i]);
            add_node(wh_end[i]);
        }

        // calculate manhaton distance
        for(int i = 0; i < node_cnt; i++)
        {
            for(int j = 0; j < node_cnt; j++)
            {
                calculate_cost(i, j);
            }
        }

        // update cost for worm hole
        for(int i = 0; i < n; i++)
        {
            int strt_node_i = 2*i+2;
            int end_node_i = 2*i+3;
            mat[strt_node_i][end_node_i] = w[i];
        }

        bfs(0);
		cout << "#" << t << " " << cost[1] << endl;
	}
    system("pause");
	return 0;
}

/*
3
0
0 0 60 60
1
0 0 2 0
1 0 1 2 5
5
0 0 9 9
1 1 4 4 2
2 1 3 2 4
4 5 7 8 5
5 6 8 7 6
8 8 9 9 5
*/