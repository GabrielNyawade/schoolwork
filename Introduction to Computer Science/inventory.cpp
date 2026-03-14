#include <iostream>
using namespace std;

struct Product {
    string name;
    int id;
    int quantity;
    float price;
};

int limit_product = 10;
float value_threshold = 200.0;
float discount_value = 0.8;
float totalStockValue(Product p);
void applyDiscount(Product ps[], int n_cat);
void mostValuable(Product ps[], int n_cat);
void lowStockWarning(Product ps[], int n_cat);

int main()
{
    int cats;
    cout << "Enter number of categories of products: ";
    cin >> cats;
    Product product_list[cats];
    for (int i = 0; i < cats; i++)
    {
        cout << "Enter product name: ";
        cin.ignore();
        getline(cin, product_list[i].name);
        cout << "Enter product ID: ";
        cin >> product_list[i].id;
        cout << "Enter quantity of product: ";
        cin >> product_list[i].quantity;
        cout << "Enter price per unit: ";
        cin >> product_list[i].price;
        cout << "---------------------------\n\n";
    }
    applyDiscount(product_list, cats);
    mostValuable(product_list, cats);
    lowStockWarning(product_list, cats);

    return 0;
}

float totalStockValue(Product p)
{
    return p.quantity * p.price;
}
void applyDiscount(Product ps[], int n_cat)
{
    for (int i = 0; i < n_cat; i++)
    {
        if (totalStockValue(ps[i]) > value_threshold)
            ps[i].price *= discount_value;
    }
}
void mostValuable(Product ps[], int n_cat)
{
    int ix = 0;
    float highest_value = totalStockValue(ps[ix]);
    for (int i = 0; i < n_cat; i++)
    {
        if (totalStockValue(ps[i]) > highest_value)
        {
            highest_value = totalStockValue(ps[i]);
            ix = i;
        }
    }
    cout << "Most Valuable Product: \n";
    cout << ps[ix].id << ": " << ps[ix].name << '\n';
    cout << "Stock Value: " << highest_value << '\n';
}
void lowStockWarning(Product ps[], int n_cat)
{
    for (int i = 0; i < n_cat; i++)
    {
        if (ps[i].quantity < limit_product)
        {
            cout << "LOW STOCK WARNING: \n";
            cout << ps[i].id << ": " << ps[i].name << '\n' ;
            cout << "Quantity: " << ps[i].quantity << '\n';
        }
    }
}