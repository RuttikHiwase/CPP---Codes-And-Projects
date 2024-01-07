 #include <iostream>
using namespace std;
#include <vector>

class Person
{
protected:
    string name;

public:
    Person()
    {
    }

    Person(string name)
    {
        this->name = name;
    }

    string getName() const
    {
        return this->name;
    }
};

class Product
{
private:
    int sellerId;
    string productName;
    int productPrice;

public:
    Product()
    {
    }

    Product(int sellerId, string productName, int productPrice)
    {
        this->sellerId = sellerId;
        this->productName = productName;
    }

    string getProductName() const
    {
        return this->productName;
    }

    int getProductPrice() const
    {
        return this->productPrice;
    }

    int getSellerId() const
    {
        return this->sellerId;
    }
};

class Seller : public Person
{
private:
    int sellerId;
    vector<Product *> products;

public:
    Seller()
    {
    }
    Seller(string sellerName, int sellerId) : Person(sellerName)
    {
        this->sellerId = sellerId;
    }
    int getSellerId() const
    {
        return this->sellerId;
    }

    string getSellerName() const
    {
        return Person::getName();
    }

    friend void addProductToSellerAccount(Product *&product, int sellerId, vector<Seller *> &sellers);
    friend void displayProductsSoldBySeller(int sellerId, vector<Seller *> &sellers);
};

// Function to add products to particular seller account

void addProductToSellerAccount(Product *&product, int sellerId, vector<Seller *> &sellers)
{
    for (int i = 0; i < sellers.size(); i++)
    {
        if (sellers.at(i)->getSellerId() == sellerId)
        {
            sellers.at(i)->products.push_back(product);
            return;
        }
    }
}

// Function to display products sold by particular Seller

void displayProductsSoldBySeller(int sellerId, vector<Seller *> &sellers)
{
    for (int i = 0; i < sellers.size(); i++)
    {
        if (sellers.at(i)->sellerId == sellerId)
        {
            for (int j = 0; j < sellers.at(i)->products.size(); j++)
            {
                Product *p1 = sellers.at(i)->products.at(j);
                cout << "-------------------------------------------------" << endl;
                cout << "Name of the Product is :" << p1->getProductName() << endl;
                cout << "Price of the product is :" << p1->getProductPrice() << endl;
                cout << "Id of the seller who solds this product is : " << p1->getSellerId() << endl;
                cout << "-------------------------------------------------" << endl;
            }
        }
    }
}

int menu()
{
    int choice;
    cout << "--------------------------------" << endl;
    cout << "Please select from below options" << endl;
    cout << "0 : EXIT" << endl;
    cout << "1 : Add Selller" << endl;
    cout << "2 : Add Product" << endl;
    cout << "3 : Display all products sold by specific seller" << endl;
    cout << "4 : Display All Sellers" << endl;
    cout << "5 : Display All Products" << endl;
    cin >> choice;
    cout << "---------------------------------" << endl;
    return choice;
}

int main()
{
    vector<Seller *> sellers;
    vector<Product *> products;

    int selectedChoice = menu();

    while (selectedChoice != 0)
    {
        switch (selectedChoice)
        {
        case 1:
        {
            string sellerName;
            int sellerId;
            cout << "-----------------------------------" << endl;
            cout << "Please enter Seller Name" << endl;
            cin >> sellerName;
            cout << "Plese enter Seller ID" << endl;
            cin >> sellerId;
            sellers.push_back(new Seller(sellerName, sellerId));
        }
        break;

        case 2:
        {
            int sellerId;
            string productName;
            int price;
            cout << "------------------------------------------" << endl;
            cout << "Please enter seller id" << endl;
            cin >> sellerId;
            cout << "Please enter Product Name" << endl;
            cin >> productName;
            cout << "Please enter the Product Price" << endl;
            cin >> price;
            cout << "-------------------------------------------" << endl;
            Product *product = new Product(sellerId, productName, price);
            products.push_back(product);
            //  Function  call to add products to particular seller account
            addProductToSellerAccount(product, sellerId, sellers);
        }
        break;
        case 3:
        {
            int sellerId;
            cout << "Please enter the seller id, to see the products sold by that particular seller" << endl;
            cin >> sellerId;
            // Function call to display products sold by particular Seller
            displayProductsSoldBySeller(sellerId, sellers);
        }

        break;

        case 4:
        {
            cout << "----------------------------------------------" << endl;
            cout << "Here's the list of all sellers" << endl;
            cout << "----------------------------------------------" << endl;
            for (int i = 0; i < sellers.size(); i++)
            {
                cout << "Seller Name is " << sellers.at(i)->getName() << endl;
                cout << "Selelr Id is  " << sellers.at(i)->getSellerId() << endl;
                cout << "---------------------------------------------" << endl;
            }
        }
        break;

        case 5:
        {
            cout << "-----------------------------------------------" << endl;
            cout << "Here's the list of all Products" << endl;
            cout << "-----------------------------------------------" << endl;
            for (int i = 0; i < products.size(); i++)
            {
                cout << "-------------------------------------------------" << endl;
                cout << "Name of the Product is :" << products.at(i)->getProductName() << endl;
                cout << "Price of the product is :" << products.at(i)->getProductPrice() << endl;
                cout << "Id of the seller who solds this product is : " << products.at(i)->getSellerId() << endl;
                cout << "-------------------------------------------------" << endl;
            }
        }
        break;

        default:
            break;
        }

        selectedChoice = menu();
    }

    return 0;
}
