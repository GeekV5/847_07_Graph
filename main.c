//第 7 章 图
#include <stdio.h>
#define maxSize 100
//邻接矩阵的结构定义 Start
typedef struct
{
    int no;    //顶点编号
    char info; //顶点其他信息，这里默认是char型，这一句在一般题目中很少用到，因此题目不做特殊要求的话可以不写
}VertexType;   //顶点类型

typedef struct  //图的定义
{
    int edges[maxSize][maxSize];
    //邻接矩阵定义，如果是有权图，则在此句中将int改为float
    int n,e;                 //分别为顶点数和边数
    VertexType vex[maxSize]; //存放结点信息
}MGraph; //图的邻接矩阵类型
//邻接矩阵的结构定义 End

//邻接表的存储结构定义 Start
typedef struct ArcNode
{
    int adjvex;    //该边所指向的结点的位置
    struct ArcNode *nextarc; //指向下一条边的指针
    int info;                //该边的相关信息（如权值），这一句用得不多，题目不做特殊要求可以不写
}ArcNode;

typedef struct
{
    char data;           //顶点信息
    ArcNode *firstarc;   //指向第一条边的指针
}VNode;

typedef struct
{
    VNode adjlist[maxSize];    //邻接表
    int n,e;                   //顶点数和边数
}AGraph;                       //图的邻接表类型

//邻接表的存储结构定义 End

int main() {
    printf("Hello, World!\n");
    return 0;
}