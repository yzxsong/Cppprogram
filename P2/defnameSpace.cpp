#include <iostream>

using namespace std;
namespace first_name{
    void fun(){
        cout << "第一个命名空间所包含的内容" << endl;
    }
}

namespace second_name{
    void fun(){
        cout << "第二个命名空间所包含的内容" << endl;
    }
}

int main() {
    first_name::fun();
    second_name::fun();
    return 0;
}