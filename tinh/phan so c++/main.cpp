#include <iostream>

using namespace std;


struct PhanSo
{
    int tu;
    int mau;
};
typedef struct PhanSo PHANSO;

void Nhap(PHANSO &ps)
{
    cout <<"\nnhap tu so:";
    cin >> ps.tu;
    cout <<"\nnhap mau so:";
    cin >> ps.mau;
}
void Xuat(PHANSO &ps)
{
    cout << ps.tu <<"/"<< ps.mau << endl;
}

int ucln(int a, int b)
{
    while (a!=b)
        if(a>b)
            a-=b;
        else if(b>a)
            b-=a;


  return a;
}
PHANSO Rutgon(PHANSO &ps)
{
    int UC=ucln(ps.tu,ps.mau);
    ps.tu=ps.tu/UC;
    ps.mau=ps.mau/UC;
}

int main()
{
    PHANSO ps;
    Nhap(ps);
    Xuat(ps);

    Rutgon(ps);
    Xuat(ps);

    return 0;
}


