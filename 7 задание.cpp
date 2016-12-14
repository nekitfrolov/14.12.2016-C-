#include <iostream>
using namespace std;

int qwe(int a,int b,int c){//qwe(2,3,4)
    int q; // пока пусто
    q=a*b; // 2 умножиь на 3 результат в q
    cout<<q; // с сразу выводится 
    return c; // q отправляется в главную пргограмму
    
}

int main(){
    int a,b,c;
    cout<<"введите число a\n";
    cin>>a;//2
    cout<<"введите число b\n";
    cin>>b;//3
    cout<<"введите число c\n";
    cin>>c;//4
    cout<<endl;
    cout<<"Производная первых 2 чисел\n";
    qwe(a,b,c); //qwe(2,3,4)
    cout<<endl;
    cout<<"Третье число\n";
    cout<<c;
    cout<<endl;
    system ("pause");
}




