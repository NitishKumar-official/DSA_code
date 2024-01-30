#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node *Insert_bst(Node *root, int val)
{

    if (root == NULL)
    {
        return new Node(val);
    }
    if (val < root->data)
    {
        root->left = Insert_bst(root->left, val);
    }
    if (val > root->data)
    {
        root->right = Insert_bst(root->right, val);
    }
    return root;
}

Node *Search_bst(Node *root, int key)
{

    if (root == NULL)
    {
        return NULL;
    }
    if (key == root->data)
    {
        return root;
    }
    if (key < root->data)
    {
        return Search_bst(root->left, key);
    }
    else
        return Search_bst(root->right, key);
}
Node *find_Min(Node *root)
{
    while (root->left != NULL)
    {
        root = root->left;
    }
    return root;
}

// Delete in BST
Node *deleteInBst(Node *root, int key)
{

    if (root == NULL)
    {
        return root;
    }
    if (key < root->data)
    {
        root->left = deleteInBst(root->left, key);
    }
    else if (key > root->data)
    {
        root->right = deleteInBst(root->right, key);
    }
    else
    {
        if (root->left == NULL)
        {
            Node *temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL)
        {
            Node *temp = root->left;
            free(root);
            return temp;
        }

        // find seccessior

        Node *temp = find_Min(root->right);
        root->data = temp->data;
        root->right = deleteInBst(root->right, temp->data);
    }
    return root;
}

void Inorder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    Inorder(root->left);
    cout << root->data << " ";
    Inorder(root->right);
}
void Preorder(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    Preorder(root->left);
    Preorder(root->right);
}
void Postorder(Node *root)
{
    if (root == NULL)
        return;
    Postorder(root->left);
    Postorder(root->right);
    cout << root->data << " ";
}

int main()
{
    Node *root;
    root = NULL;
    do
    {
        int ch;
        cout << "1.insert\t 2.search\t 3.delete\t 4.Inorder\t 5.preorder\t 6.postorder\t 7.exit" << endl;
        cin >> ch;
        switch (ch)
        {
        case 1:
            int val;
            cout << "enter a value to insert " << endl;
            cin >> val;
            root = Insert_bst(root, val);
            break;
        case 2:
            int key;
            cout << "enter a key for search" << endl;
            cin >> key;
            if (Search_bst(root, key) == NULL)
                cout << "key not exist in the tree" << endl;
            else
                cout << "key exist in the tree" << endl;
            break;
        case 3:
            int num;
            cout << "enter a num for delete " << endl;
            cin >> num;
            root = deleteInBst(root, num);
            break;
        case 4:
            Inorder(root);
            cout << endl;
            break;
        case 5:
            Preorder(root);
            cout << endl;
            break;
        case 6:
            Postorder(root);
            cout << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
            break;
        }
    } while (true);

    return 0;
}