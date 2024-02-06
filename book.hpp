#include <string>

class Book
{
public:
    Book() : name_("NULL"), ISBN_(0000000000000), price_(-999.99) {}
    Book(const std::string &name_, int ISBN, double price) : name_(name_), ISBN_(ISBN), price_(price) {}

    std::string Name() const
    {
        return name_;
    }

    int ISBN() const
    {
        return ISBN_;
    }

    double Price() const
    {
        return price_;
    }

    void Name(const std::string &name)
    {
        name_ = name;
    }

    void ISBN(int newISBN)
    {
        ISBN_ = newISBN;
    }

    void Price(double price)
    {
        price_ = price;
    }

private:
    std::string name_;
    int ISBN_;
    double price_;
};