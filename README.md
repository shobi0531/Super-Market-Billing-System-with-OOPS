# Super-Market-Billing-System

This project is a basic implementation of an **Super Market Billing System** in C++ that covers various classes like `User`, `Customer`, `Product`, `Order`, `Cart`, and `Payment`. Each class provides methods for performing common operations such as adding, editing, deleting, and searching data.

## Project Structure

The project consists of the following classes:

1. **Role**  
   - Manages roles within the system (e.g., admin, customer).
   - Functions: `addRole()`, `editRole()`, `deleteRole()`, `assignRole()`

2. **Permission**  
   - Manages role-based permissions.
   - Functions: `addPermission()`, `editPermission()`, `deletePermission()`, `searchPermission()`

3. **User**  
   - Manages user data.
   - Functions: `addUser()`, `editUser()`, `deleteUser()`, `searchUser()`

4. **Customer**  
   - Manages customer information.
   - Functions: `addCustomer()`, `editCustomer()`, `deleteCustomer()`, `searchCustomer()`

5. **Product**  
   - Manages product details.
   - Functions: `addProduct()`, `editProduct()`, `deleteProduct()`, `searchProduct()`

6. **Order**  
   - Manages customer orders.
   - Functions: `addOrder()`, `editOrder()`, `deleteOrder()`, `searchOrder()`

7. **Cart**  
   - Manages shopping cart information.
   - Functions: `addCart()`, `editCart()`, `deleteCart()`, `searchCart()`

8. **Payment**  
   - Manages payment details.
   - Functions: `addPayment()`, `editPayment()`, `deletePayment()`, `searchPayment()`

## How to Compile and Run

1. **Prerequisites:** Ensure you have a C++ compiler installed (e.g., g++, Clang).
   
2. **Compilation:**  
   Run the following command to compile the code:
   ```bash
   g++ ecommerce_management.cpp -o ecommerce_management
   ```

3. **Execution:**  
   After compilation, run the program with:
   ```bash
   ./ecommerce_management
   ```

## Sample Output

When you run the program, sample operations are performed for demonstration:

```text
Customer added.
Product added.
Order added.
Payment added.
Cart added.
```

## Future Enhancements

- Implement storage for each entity (e.g., store data in a file or database).
- Add user authentication and authorization.
- Introduce advanced search and filtering features.
- Create a proper user interface (console-based or web-based).
- Handle user inputs for dynamic operation selection.

## License

This project is free to use and modify.
