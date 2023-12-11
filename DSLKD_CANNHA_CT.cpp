#include "DSLKD_CANNHA_TV.h"
void main()
{
	Nodeptr dscn;
	nhapDSCN(dscn);
  xuatDSCN(dscn); 
    int menu;
    do
    {
        cout << ("1/ Them thong tin 1 can nha vao vi tri chi dinh.") << endl;
        cout << ("2/ Tim cac can nha theo dien tich.") << endl;
        cout << ("3/ Tim cac can nha theo don gia.") << endl;
        cout << ("4/ Xoa cac can nha theo ma.") << endl;
        cout << ("5/ Xoa cac can nha theo dia chi.") << endl;
        cout << ("6/ Sap xep cac can nha theo dien tich giam dan.") << endl;
        cout << ("7/ Sap xep cac can nha theo don gia tang dan.") << endl;
        cout << ("0/ Thoat chuong trinh!!!") << endl;
        cout << ("Nhap lua chon cua ban: ");
        cin >> menu;
        switch (menu)
        {
        case 0:
            return;
        case 1:
        {
            dscn = themViTri(dscn);
            	xuatDSCN(dscn); 
            break;
        }
        case 2:
        {
            Nodeptr dscnDT;
			dscnDT = timDienTich(dscn);
            	xuatDSCN(dscn); 
            break;
        }
        case 3:
        {
            Nodeptr dscnDG;
			dscnDG = timDienTich(dscn);
            	xuatDSCN(dscn); 
            break;
        }
        case 4:
        {
            dscn =xoaMa(dscn);
            	xuatDSCN(dscn); 
            break;
        }
        case 5:
        {
            dscn =xoaDC(dscn);
            	xuatDSCN(dscn); 
            break;
        }
        case 6:
        {
            	xuatDSCN(dscn); 
            break;
        }
        case 7:
        {
            	xuatDSCN(dscn); 
            break;
        }
        default:
        {
            cout << ("Chuc nang khong ton tai! Moi nhap lai!");
            break;
        }
        }
        system("pause");
        system("cls");
		xuatDSCN(dscn); 
    } while (menu != 0);
}