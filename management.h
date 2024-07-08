// 防止文件头被重复包含，使用预处理指令实现包含保护
#ifndef HEADER_FILE_NAME_H
#define HEADER_FILE_NAME_H


// 书籍类定义
struct book
{
    char name[20];
    int id;
    char author[20];
    int price;
    int num;
};

// 链表节点定义
struct Node
{
    struct book data;
    struct Node* next;
};

// 创建头节点
struct Node* CreateHead(struct book data);

// 插入书籍
void InsertBook(struct Node* HeadNode, struct book data);

// 删除书籍
void DeletBookbyName(struct Node* HeadNode, char name); // 通过书名删除

void DeletBookbyName(struct Node* HeadNode, int id); // 通过编号删除

// 修改书籍信息
void ResetBook(struct Node* HeadNode, struct book data);

// 查找书籍
void FindBook(struct Node* HeadNode, int id); // 通过编号查找

void FindBook(struct Node* HeadNode, char name); // 通过书名查找

// 打印出具体信息
void PrintBook(struct Node* HeadNode);

#endif