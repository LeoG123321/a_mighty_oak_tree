/*
    Leonardo Gonzalez   Week 15
*/

#include <iostream>
#include "Node.h"
using namespace std;

Squirrel create_squirrel(string name);
Node* create_node(string name);

int main()
{
    Node* root = create_node("Ace");
    
    cout << root->squirrel_name.get_name() << endl;

    root->left = create_node("Bob");
    root->right = create_node("Charlie");

    cout << root->left->squirrel_name.get_name() << endl;
    cout << root->right->squirrel_name.get_name() << endl;

    root->left->left = create_node("Daniel");
    root->left->right = create_node("Ethan");
    root->right->left = create_node("Fabian");
    root->right->right = create_node("George");

    cout << root->left->left->squirrel_name.get_name() << endl;
    cout << root->left->right->squirrel_name.get_name() << endl;
    cout << root->right->left->squirrel_name.get_name() << endl;
    cout << root->right->right->squirrel_name.get_name() << endl;

    return 0;
}

Squirrel create_squirrel(string name) {
    Squirrel place_holder(name);
    return place_holder;
}

Node* create_node(string name) {
    Node* place_holder = new Node(create_squirrel(name));
    return place_holder;
}