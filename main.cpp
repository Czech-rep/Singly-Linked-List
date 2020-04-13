#include <iostream>
#include <cassert>

#include "chain.h"
#include "testing.h"

int main()
{
    TestChain test;
    test.execute_all();

    /*UniBox* a = new UniBox(1);
    UniBox* b = new UniBox(15);
    UniBox* c = new UniBox(88);
    UniBox* d = new UniBox(123);

    ClosedChain loop;
    loop.append(a);
    //std::cout<<loop<<std::endl;
    loop.append(b);
    //std::cout<<loop<<std::endl;
    loop.append(c);
    //std::cout<<loop<<std::endl;
    loop.append(d);
    std::cout<<loop<<std::endl;

    std::cout<<" p:"<<*loop.pick_predecessor(0)<<std::endl;




    std::cout<<loop<<std::endl;
    std::cout<<" to bvyla lissta " <<std::endl;*/
    return 0;
}






void manual(){

    ClosedChain loop;

    UniBox a(5), b(99), c(777), d(997);
    UniBox* e = new UniBox(1024);
    loop+=(&a);
    loop.append(&b);
    loop.append(&c);
    loop.append(&d);
    loop.append(e);
    /*assert( loop.get_length() == 5 );
    assert( loop.get_nth(0)->get_value() == 5 );
    assert( loop.get_nth(3)->get_value() == 997 );*/

    std::cout << "loop: " << loop << std::endl;
    //assert( loop.get_length() == 4 );

    ClosedChain loop2;
    loop2 += &a;
    loop2 += &b;
    loop2 += &d;
    loop2 += e;
    loop2 += e;

    std::cout << "loop: " << loop << std::endl;
    loop2.wipeout(0);
    //std::cout << "loop2: " << loop2 << std::endl;
    loop2.inject(0, e);
    //assert( loop == loop2 );
    //std::cout << ( loop == loop2 );
/*
std::cout <<"aa";
    UniBox* ptt = loop.get_nth(0);
    while (true){
        std::cout << *ptt<<" ";
        ptt = ptt->get_anchor();
        if (ptt == loop.get_nth(0))
            break;
    }std::cout <<"complete"<< std::endl;

    std::cout << loop << std::endl;*/
    //cout << a.get_anchor()->get_value()<< " Hello world!" << endl;
}





