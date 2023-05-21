#include <iostream>
#include<ostream>

struct Node
{
	int data;
	Node* left;
	Node* right;
	Node(int data, Node* left = nullptr, Node* right = nullptr) : data(data), left(left), right(right) {};
	~Node() {};
};

class BTree
{
private:
	Node* root;
	void Insert(Node* &root, Node* node)
	{
		if (root == nullptr)
		{
			root = node;
			return;
		}
		if (root->data == node->data)
		{
			return;
		}
		if (root->data > node->data)
		{
			Insert(root->left, node);
		}
		if (root->data < node->data)
		{
			Insert(root->right, node);
		}
	}

	Node*& GetNode(Node*& root, int element)
	{
		if ((root == nullptr) || (root->data == element))
		{
			return root;
		}
		if (root->data > element)
		{
			return GetNode(root->left, element);
		}
		if (root->data < element)
		{
			return GetNode(root->right, element);
		}
	}

	Node* Extract(Node* &node)
	{
		Node* temp = node;

		if ((node->left == nullptr) && (node->right == nullptr))
		{
			node = nullptr;
		}
		else
		{
			if (node->left == nullptr)
			{
				node = node->right;
			}
			if (node->right == nullptr)
			{
				node = node->left;
			}
			else if (node->left->right == nullptr)
			{
				node->left->right = node->right;
				node = node->left;
			}
			else if (node->right->left == nullptr)
			{
				node->right->left = node->left;
				node = node->right;
			}
			else if ((node->left != nullptr) && (node->right != nullptr))
			{
				Node* tnode = node->right;
				while (tnode->left->left != nullptr)
				{
					tnode = tnode->left;
				}
				Node* nnode = Extract(tnode->left);
				nnode->left = node->left;
				nnode->right = node->right;
				node = nnode;
			}
		}
		temp->left = nullptr;
		temp->right = nullptr;
		return temp;
	}

public:
	BTree() : root(nullptr) {};

	void Add(int data)
	{
		Insert(root, new Node(data));
	}

	void Remove(int data)
	{
		Node* &node = GetNode(root, data);
		if (Contains(data))
		{
			Node* extracted = Extract(node);
			delete extracted;
		}
	}

	bool Contains(int data)
	{
		return(GetNode(root, data) != nullptr);
	}

	void Print(std::ostream& stream, Node*& root, int depth = 0)
	{
		if (root == nullptr)
		{
			return;
		}
		Print(stream, root->left, depth + 1);
		for (int i = 0; i < depth; ++i)
		{
			std::cout << "\t";
		}
		stream << root->data << std::endl;
		Print(stream, root->right, depth + 1);
	}

	friend std::ostream& operator<<(std::ostream& stream, BTree& tree)
	{
		stream << "__________________" << std::endl;
		if (tree.root == nullptr)
		{
			stream << "Empty Tree" << std::endl;
		}
		else
		{
			tree.Print(stream, tree.root);
		}
		stream << "__________________" << std::endl;
		return stream;
	}

};

int main(int argc, char* argv[])
{
	BTree tree;

	tree.Add(10);
	tree.Add(8);
	tree.Add(11);
	tree.Add(7);
	tree.Add(6);
	tree.Add(12);
	tree.Add(18);
	tree.Add(14);
	tree.Add(17);
	tree.Add(9);
	tree.Add(4);
	tree.Add(2);
	tree.Add(1);
	tree.Add(3);
	tree.Add(16);
	tree.Add(13);

	std::cout << tree << std::endl;

	tree.Remove(6);

	std::cout << tree << std::endl;

	tree.Remove(8);

	std::cout << tree << std::endl;

	return EXIT_SUCCESS;
}