#include <iostream>
using namespace std;

int qwe(int a,int b,int c){//qwe(2,3,4)
    int q; // ���� �����
    q=a*b; // 2 ������� �� 3 ��������� � q
    cout<<q; // � ����� ��������� 
    return c; // q ������������ � ������� ����������
    
}

int main(){
    int a,b,c;
    cout<<"������� ����� a\n";
    cin>>a;//2
    cout<<"������� ����� b\n";
    cin>>b;//3
    cout<<"������� ����� c\n";
    cin>>c;//4
    cout<<endl;
    cout<<"����������� ������ 2 �����\n";
    qwe(a,b,c); //qwe(2,3,4)
    cout<<endl;
    cout<<"������ �����\n";
    cout<<c;
    cout<<endl;
    system ("pause");
}




