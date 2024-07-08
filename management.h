// 防止文件头被重复包含，使用预处理指令实现包含保护
#ifndef __MANAGEMENT_H__
#define __MANAGEMENT_H__


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
struct Node* CreateHead();

// 创建新节点
struct Node* CreateNewCode(struct book data);

// 插入书籍
void InsertBook(struct Node* HeadNode, struct book data);

// 删除书籍
void DeletBook_by_Name(struct Node* HeadNode, char name); // 通过书名删除

void DeletBook_by_id(struct Node* HeadNode, int id); // 通过编号删除

// 修改书籍信息
void ResetBook(struct Node* HeadNode, struct book data);

// 查找书籍
void FindBook_by_id(struct Node* HeadNode, int id); // 通过编号查找

void FindBook_by_name(struct Node* HeadNode, char name); // 通过书名查找

// 打印出具体信息
void PrintBook(struct Node* HeadNode);

#endif
