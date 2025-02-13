#include <cmath>
#include <cstdlib>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include "QueType.h"
#ifndef Graph_H
#define Graph_H
using namespace std;

// Specification file for NumberList class
/* Specification file holds the actual class */

template <class VertexType> 
class GraphType {
private:
  int numVertices;
  int maxVertices;
  VertexType* vertices;
  int edges[50][50];
  bool* marks;

public:
  // Default Constructor
  GraphType();
  // Constructor
  GraphType(int maxV);
  // Destructor
  ~GraphType();

  // Graph Operations - member functions
  void MakeEmpty();
  bool isEmpty();
  bool isFull();

  void AddVertex(VertexType);
  void AddEdge(VertexType, VertexType, int);

  void GetToVertices(VertexType, QueType<VertexType>);

  void DepthFirstSearch(GraphType<VertexType>, VertexType, VertexType);
  void BreadthFirstSearch(GraphType<VertexType>, VertexType, VertexType);

  int GetWeight(VertexType, VertexType);
  //void GetToVertices(VertexType, QueType<VertexType>&);

  void ClearMarks();
  void MarkVertex(VertexType);
  bool isMarked(VertexType);
};
#endif