#include <bits/stdc++.h>
using namespace std;

// Role Class
class Role {
public:
    int role_id;
    string role_title;
    string role_description;

    static vector<Role> roles;

    void addRole() {
        roles.push_back(*this);
        cout << "Role added: " << role_title << endl;
    }

    void editRole(int id, const string& newTitle) {
        for (auto& role : roles) {
            if (role.role_id == id) {
                role.role_title = newTitle;
                cout << "Role edited: " << newTitle << endl;
                return;
            }
        }
        cout << "Role not found." << endl;
    }

    void deleteRole(int id) {
        for (auto it = roles.begin(); it != roles.end(); ++it) {
            if (it->role_id == id) {
                roles.erase(it);
                cout << "Role deleted." << endl;
                return;
            }
        }
        cout << "Role not found." << endl;
    }
};

vector<Role> Role::roles;

// Permission Class
class Permission {
public:
    int permission_id;
    string permission_title;
    string permission_description;

    static vector<Permission> permissions;

    void addPermission() {
        permissions.push_back(*this);
        cout << "Permission added: " << permission_title << endl;
    }

    void editPermission(int id, const string& newTitle) {
        for (auto& permission : permissions) {
            if (permission.permission_id == id) {
                permission.permission_title = newTitle;
                cout << "Permission edited: " << newTitle << endl;
                return;
            }
        }
        cout << "Permission not found." << endl;
    }
};

vector<Permission> Permission::permissions;

// User Class
class User {
public:
    int user_id;
    string user_name;
    string user_email;

    static vector<User> users;

    void addUser() {
        users.push_back(*this);
        cout << "User added: " << user_name << endl;
    }
};

vector<User> User::users;

// Product Class
class Product {
public:
    int product_id;
    string product_name;
    string product_description;
    double product_price;

    static vector<Product> products;

    void addProduct() {
        products.push_back(*this);
        cout << "Product added: " << product_name << endl;
    }

    void editProduct(int id, const string& newName, double newPrice) {
        for (auto& product : products) {
            if (product.product_id == id) {
                product.product_name = newName;
                product.product_price = newPrice;
                cout << "Product edited: " << newName << " - Price: " << newPrice << endl;
                return;
            }
        }
        cout << "Product not found." << endl;
    }

    void deleteProduct(int id) {
        for (auto it = products.begin(); it != products.end(); ++it) {
            if (it->product_id == id) {
                products.erase(it);
                cout << "Product deleted." << endl;
                return;
            }
        }
        cout << "Product not found." << endl;
    }
};

vector<Product> Product::products;

// Order Class
class Order {
public:
    int order_id;
    int customer_id;
    string order_type;
    double order_amount;

    static vector<Order> orders;

    void addOrder() {
        orders.push_back(*this);
        cout << "Order added with ID: " << order_id << endl;
    }

    void editOrder(int id, double newAmount) {
        for (auto& order : orders) {
            if (order.order_id == id) {
                order.order_amount = newAmount;
                cout << "Order edited with new amount: " << newAmount << endl;
                return;
            }
        }
        cout << "Order not found." << endl;
    }

    void deleteOrder(int id) {
        for (auto it = orders.begin(); it != orders.end(); ++it) {
            if (it->order_id == id) {
                orders.erase(it);
                cout << "Order deleted." << endl;
                return;
            }
        }
        cout << "Order not found." << endl;
    }

    void searchOrder(int id) {
        for (const auto& order : orders) {
            if (order.order_id == id) {
                cout << "Order found: ID = " << order.order_id << ", Amount = " << order.order_amount << endl;
                return;
            }
        }
        cout << "Order not found." << endl;
    }
};

vector<Order> Order::orders;

// Payment Class
class Payment {
public:
    int payment_id;
    int customer_id;
    double payment_amount;
    string payment_date;

    static vector<Payment> payments;

    void addPayment() {
        payments.push_back(*this);
        cout << "Payment added with ID: " << payment_id << endl;
    }

    void editPayment(int id, double newAmount) {
        for (auto& payment : payments) {
            if (payment.payment_id == id) {
                payment.payment_amount = newAmount;
                cout << "Payment edited with new amount: " << newAmount << endl;
                return;
            }
        }
        cout << "Payment not found." << endl;
    }

    void deletePayment(int id) {
        for (auto it = payments.begin(); it != payments.end(); ++it) {
            if (it->payment_id == id) {
                payments.erase(it);
                cout << "Payment deleted." << endl;
                return;
            }
        }
        cout << "Payment not found." << endl;
    }

    void searchPayment(int id) {
        for (const auto& payment : payments) {
            if (payment.payment_id == id) {
                cout << "Payment found: ID = " << payment.payment_id << ", Amount = " << payment.payment_amount << endl;
                return;
            }
        }
        cout << "Payment not found." << endl;
    }
};

vector<Payment> Payment::payments;

int main() {
    // Sample usage of the classes

    // Role
    Role role1 = {1, "Admin", "Administrator role"};
    role1.addRole();

    // Permission
    Permission perm1 = {1, "View", "View permission"};
    perm1.addPermission();

    // User
    User user1 = {1, "John Doe", "john@example.com"};
    user1.addUser();

    // Product
    Product product1 = {1, "Laptop", "High-end gaming laptop", 1500.0};
    product1.addProduct();

    // Order
    Order order1 = {1, 1, "Online", 1500.0};
    order1.addOrder();

    // Payment
    Payment payment1 = {1, 1, 1500.0, "2025-02-18"};
    payment1.addPayment();

    return 0;
}
