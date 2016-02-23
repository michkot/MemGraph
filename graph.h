//
// Created by Michael Holubec on 22.02.16.
//

#ifndef BACHELOR_GRAPH_H
#define BACHELOR_GRAPH_H


#include "graphComponent.h"

enum graph_type {
	std_graph,
	digraph
};

class graph : public graphComponent {
private:
	graph_type type;

public:
	void setType(graph_type value);
	graph_type getType();
};


#endif //BACHELOR_GRAPH_H