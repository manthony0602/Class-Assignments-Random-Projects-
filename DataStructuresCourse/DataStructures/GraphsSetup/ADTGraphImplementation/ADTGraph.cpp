#include "Graph.h"
#include "QueType.h"
#include "StackType.h"
#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
using namespace std;

// Implementation file for Graph ADT
/* Implementation file holds the member function definitions that are in the class */

template<class VertexType>
GraphType<VertexType>::GraphType(){
  // Arrays of size 50 are dynamically allocated for marks and vertices
  // numVertices is set to 0 - maxVertices is set to 50
  numVertices = 0;
  maxVertices = 50;
  vertices = new VertexType[50];
  marks = new bool[50];
};


template<class VertexType>
GraphType<VertexType>::GraphType(int maxV){
  // Arrays of size maxV are dynamically allocated for marks and vertices
  // numVertices is set to 0 - maxVertices is set to maxV
  numVertices = 0;
  maxVertices = maxV;
  vertices = new VertexType[50];
  marks = new bool[50];
}


template<class VertexType>
GraphType<VertexType>::~GraphType(){
  // Arrays for vertices and marks have been deallocated
  delete [] vertices;
  delete [] marks;
}


template<class VertexType>
void GraphType<VertexType>::AddVertex(VertexType vertex){
  // Vertex had been stored in vertices
  // Correspoding row nad column of edges have been set to NULL
  // numVertices has been incremented
  vertices[numVertices] = vertex;
  for (int i = 0; i < numVertices; i++){
    edges[numVertices][i] = NULL;
    edges[i][numVertices] = NULL;
  }
  numVertices++;
}


// Helper function for AddEdge, GetWeight, and GetToVertices
template<class VertexType>
int IndexIs(VertexType* vertices, VertexType vertex){
  // Returns the index of the vertex in vertices
  int index = 0;

  while (vertex != vertex[index]){
    index++;
    return index;
  }
}


template<class VertexType>
void GraphType<VertexType>::AddEdge(VertexType fromVertex, VertexType toVertex, int weight){
  // Edge (fromVetex, toVertex) is stored in edges
  int row, col;

  row = IndexIs(vertices, fromVertex);
  col = IndexIs(vertices, toVertex);
  edges[row][col] = weight;
}


template<class VertexType>
int GraphType<VertexType>::GetWeight(VertexType fromVertex, VertexType toVertex){
  // Edge (fromVetex, toVertex) is stored in edges
  int row, col;

  row = IndexIs(vertices, fromVertex);
  col = IndexIs(vertices, toVertex);
  return edges[row][col];
}


// Function currently isnt working because it wont read the template for class QueType
template<class VertexType> 
void GraphType<VertexType>::GetToVertices(VertexType vertex, QueType<VertexType>& adjVertices){
  // Returns a queue of vertices adjacnet from vertex
  int fromIndex, toIndex;

  fromIndex = IndexIs(vertices, vertex);
  for (toIndex = 0; toIndex < numVertices; toIndex++){
    if (edges[fromIndex][toIndex] != 0){
      adjVertices.Enqueue(vertices[toIndex]);
    }
  }
}


template<class VertexType>
void GraphType<VertexType>::DepthFirstSearch(GraphType<VertexType> graph, VertexType startVertex, VertexType endVertex){

  StackType<VertexType> stack;
  QueType<VertexType> vertexQ;
  
  bool found = false;
  VertexType vertex;
  VertexType item;

  graph.ClearMarks();
  stack.Push(startVertex);

  do{
    stack.Pop(vertex)
    if (vertex == endVertex){
      cout << vertex;
      found = true;
    }
    else{
      if (!graph.IsMarked(vertex)){
        graph.MarkVertex(vertex);
        cout << vertex;
        graph.GetToVertices(vertex, VertexQ);

        while (!vertexQ.IsEmpty()){
          vertexQ.Dequeue(item);
          if (!graph.isMarked(item)){
            stack.Push(item)
          }
        }
      }
    }
  } while (!stack.IsEmpty() && !found);
  
  if (!found){
    cout << "Path not found.\n"; 
  }
}


template<class VertexType>
void BreadthFirstSearch(GraphType<VertexType> graph, VertexType startVertex, VertexType endVertex){

  QueType<VertexType> queue;
  QueType<VertexType> vertexQ;

  bool found = false;
  VertexType vertex;
  VertexType item;

  graph.ClearMarks();
  queue.Dequeue(vertex);

  do{
    queue.Dequeue(vertex);
    if (vertex == endVertex){
      cout << vertex;
      found = true;
    }
    else{
      if (!graph.IsMarked(vertex)){
        graph.MarkVertex(vertex);
        cout << vertex;
        graph.GetToVertices(vertex, vertexQ);

        while (!vertexQ.IsEmpty()){
          vertexQ.Dequeue(item);
          if (!graph.IsMarked(item)){
            queue.Enqueue(item);
          }
        }
      }
    }
  } while (!queue.IsEmpty() && !found);

  if (!found){
    cout << "Path is not found.\n";
  }
}