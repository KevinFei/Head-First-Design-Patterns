#include <iostream>

#include "Proxy.h"
#include "PersonBean.h"

using namespace std;

int main()
{
    PersonBean *personBean = new PersonBeanImpl();
    personBean->setName("Joe Javabean");
    personBean->setHotOrNotRating(7);


    PersonBean *ownerProxy = new OwnerProxy(personBean);
    cout << "Name is " << ownerProxy->getName() << endl;
    ownerProxy->setInterests("bowling, Go");
    cout << "Interests set from owner proxy" << endl;
    try
    {
        ownerProxy->setHotOrNotRating(10);
    }
    catch(exception &e)
    {
        cout << "Can't set rating from owner proxy: " << e.what() << endl;
    }
    cout << "Rating is " << ownerProxy->getHotOrNotRating() << endl << endl;

    PersonBean *nonOwnerProxy = new NonOwnerProxy(personBean);
    cout << "Name is " << nonOwnerProxy->getName() << endl;
    try
    {
        nonOwnerProxy->setInterests("bowling, Go");
    }
    catch(exception &e)
    {
        cout << "Can't set interests from non owner proxy: " << e.what() << endl;
    }
    nonOwnerProxy->setHotOrNotRating(3);
    cout << "Rating set from non owner proxy" << endl;
    cout << "Rating is " << nonOwnerProxy->getHotOrNotRating() << endl;

    delete personBean;
    delete ownerProxy;
    delete nonOwnerProxy;

    return 0;
}

