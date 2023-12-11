#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;

typedef struct Node* Nodeptr;
struct CanNha {
	char maNha[10];
	double dienTich;
	double donGia;
	char diaChi[50];
};
struct Node {
	CanNha data;
	Nodeptr next;
};

void khoiTao(Nodeptr& list);
int isEmpty(Nodeptr list);
void giaiPhong(Nodeptr& list);
Nodeptr taoNode(CanNha x);
Nodeptr themDau(Nodeptr& list, CanNha x);
bool kiemTraTrungMa(Nodeptr& list, char* ma);
Nodeptr xoaDC (Nodeptr&  list);
Nodeptr xoaMa(Nodeptr& list);
Nodeptr timDonGia(Nodeptr& list);
Nodeptr timDienTich(Nodeptr& list);
Nodeptr themViTri(Nodeptr& list);
void nhapDSCN(Nodeptr& list);
void xuatDSCN(Nodeptr list);
