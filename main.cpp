//乐学偶得版权所有，主讲人：William 公众号：乐学Fintech 网站：lexueoude.com
// Created by william from lexueoude.com
//


#include <iostream>
#include <climits>

using namespace std;

int main() {

//    如果我们将这个value值增大到一定程度，会溢出无法正常显示
//    int value = 999999999999999;
//    cout << value << endl;

    cout << "最大int的value为：" << INT_MAX << endl;
    cout << "最小int的value为：" << INT_MIN << endl;


//    long int longValue = 999999999999999;
    long longValue = 999999999999999;
    cout << longValue << endl;

    cout << "最大long int 的value为：" << LONG_MAX << endl;
    cout << "最小long int 的value为：" << LONG_MIN << endl;

//    为什么会出现不同int type limit不一样的情况？关于"用地"效率的最大化（房地产开发的例子：商业用地，工业用地，住宅，多大的地盖多高的楼）
    cout << "int的size大小：" << sizeof(int) << endl;
    cout << "long的size大小：" << sizeof(long int) << endl;
    cout << "short的size大小：" << sizeof(short int) << endl;

    unsigned int sth = 123456;
    cout << sth << endl;


    return 0;
}
