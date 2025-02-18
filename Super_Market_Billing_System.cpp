#include <bits.stdc++.h>

using namespace std;

// Role Class
class Role {
public:
    int role_id;
    string role_title;
    string role_description;

    void addRole() { cout << "Role added.\n"; }
    void editRole() { cout << "Role edited.\n"; }
    void deleteRole() { cout << "Role deleted.\n"; }
    void assignRole() { cout << "Role assigned.\n"; }
};

// Permission Class
class Permission {
public:
    int permission_id;
    string permission_title;
    string permission_description;

    void addPermission() { cout << "Permission added.\n"; }
    void editPermission() { cout << "Permission edited.\n"; }
    void deletePermission() { cout << "Permission deleted.\n"; }
    void searchPermission() { cout << "Permission searched.\n"; }
};

// User Class
class User {
public:
    int user_id;
    int user_role_id;
    string user_name;
    string user_email;
    string user_dob;
    string user_address;

    void addUser() { cout << "User added.\n"; }
    void editUser() { cout << "User edited.\n"; }
    void deleteUser() { cout << "User deleted.\n"; }
    void searchUser() { cout << "User searched.\n"; }
};

// Customer Class
class Customer {
public:
    int customer_id;
    string customer_name;
    string customer_mobile;
    string customer_email;
    string customer_address;
    string customer_username;
    string customer_password;

    void addCustomer() { cout << "Customer added.\n"; }
    void editCustomer() { cout << "Customer edited.\n"; }
    void deleteCustomer() { cout << "Customer deleted.\n"; }
    void searchCustomer() { cout << "Customer searched.\n"; }
};

// Product Class
class Product {
public:
    int product_id;
    string product_number;
    string product_name;
    string product_description;
    int product_quantity;
    double product_price;

    void addProduct() { cout << "Product added.\n"; }
    void editProduct() { cout << "Product edited.\n"; }
    void deleteProduct() { cout << "Product deleted.\n"; }
    void searchProduct() { cout << "Product searched.\n"; }
};

// Order Class
class Order {
public:
    int order_id;
    string order_type;
    string order_description;
    int order_customer_id;

    void addOrder() { cout << "Order added.\n"; }
    void editOrder() { cout << "Order edited.\n"; }
    void deleteOrder() { cout << "Order deleted.\n"; }
    void searchOrder() { cout << "Order searched.\n"; }
};

// Cart Class
class Cart {
public:
    int cart_id;
    string cart_name;
    string cart_description;
    string cart_type;

    void addCart() { cout << "Cart added.\n"; }
    void editCart() { cout << "Cart edited.\n"; }
    void deleteCart() { cout << "Cart deleted.\n"; }
    void searchCart() { cout << "Cart searched.\n"; }
};

// Payment Class
class Payment {
public:
    int payment_id;
    int payment_customer_id;
    double payment_amount;
    string payment_date;
    string payment_description;

    void addPayment() { cout << "Payment added.\n"; }
    void editPayment() { cout << "Payment edited.\n"; }
    void deletePayment() { cout << "Payment deleted.\n"; }
    void searchPayment() { cout << "Payment searched.\n"; }
};

int main() {
    // Sample usage
    Customer customer;
    customer.addCustomer();
    
    Product product;
    product.addProduct();

    Order order;
    order.addOrder();

    Payment payment;
    payment.addPayment();

    Cart cart;
    cart.addCart();

    return 0;
}
