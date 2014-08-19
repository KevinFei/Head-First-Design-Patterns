#include "Pizza.h" 
#include "PizzaStore.h" 

Pizza* PizzaStore::orderPizza(const string &type)
{
    Pizza *pizza = createPizza(type);
    pizza->prepare();
    pizza->bake();
    pizza->cut();
    pizza->box();

    return pizza;
}

Pizza* NYPizzaStore::createPizza(const string &type)
{
    if(type == "cheese")
    {
        return new NYStyleCheesePizza();
    }
//    else if(type == "veggie")
//    {
//        return new NYStyleVeggiePizza();
//    }
//    else if(type == "clam")
//    {
//        return new NYStyleClamPizza();
//    }
//    else if(type == "pepperoni")
//    {
//        return new NYStylePepperoniPizza();
//    }
    else
    {
        return NULL;
    }
}

Pizza* ChicagoPizzaStore::createPizza(const string &type)
{
    if(type == "cheese")
    {
        return new ChicagoStyleCheesePizza();
    }
//    else if(type == "veggie")
//    {
//        return new ChicagoStyleVeggiePizza();
//    }
//    else if(type == "clam")
//    {
//        return new ChicagoStyleClamPizza();
//    }
//    else if(type == "pepperoni")
//    {
//        return new ChicagoStylePepperoniPizza();
//    }
    else
    {
        return NULL;
    }
}

Pizza* CaliforniaPizzaStore::createPizza(const string &type)
{
    if(type == "cheese")
    {
//        return new CaliforniaStyleCheesePizza();
    }
//    else if(type == "veggie")
//    {
//        return new CaliforniaStyleVeggiePizza();
//    }
//    else if(type == "clam")
//    {
//        return new CaliforniaStyleClamPizza();
//    }
//    else if(type == "pepperoni")
//    {
//        return new CaliforniaStylePepperoniPizza();
//    }
    else
    {
        return NULL;
    }
}

