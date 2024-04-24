#pragma once
#include "Squirrel.h"

class Node {
public:
	Squirrel squirrel_name;
	Node* left;
	Node* right;

	Node(Squirrel squirrel_name) {
		this->squirrel_name = squirrel_name;
		left = NULL;
		right = NULL;
	}
};
