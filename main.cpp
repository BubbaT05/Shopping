#include <iostream>
using namespace std;

#include "ItemToPurchase.h"

int main() {
   string name;
   int qty, price; 
   ItemToPurchase item1, item2;
   
   cout << "Item 1" << endl; 
   cout << "Enter the item name:" << endl; 
   getline(cin, name); 
   
   cout << "Enter the item price:" << endl; 
   cin >> price; 
   
   cout << "Enter the item quantity:" << endl; 
   cin >> qty; 
   cout << endl;
   
   item1.SetName(name);
   item1.SetPrice(price); 
   item1.SetQuantity(qty);
   
   cin.ignore(); 
   
   cout << "Item 2" << endl; 
   cout << "Enter the item name:" << endl; 
   getline(cin, name); 
   
   cout << "Enter the item price:" << endl;  
   cin >> price; 
   
   cout << "Enter the item quantity:"; 
   cin >> qty; 
   cout << endl;
   
   item2.SetName(name);
   item2.SetPrice(price); 
   item2.SetQuantity(qty);
   
   cout << endl << "TOTAL COST" << endl; 
   cout << item1.GetName() << " " << item1.GetQuantity() << " @ $" << item1.GetPrice() << " = $" 
   << item1.GetPrice() * item1.GetQuantity() << endl;
   cout << item2.GetName() << " " << item2.GetQuantity() << " @ $" << item2.GetPrice() << " = $" 
   << item2.GetPrice() * item2.GetQuantity() << endl;
   cout << endl << "Total: $" << item1.GetPrice() * item1.GetQuantity() + 
   item2.GetPrice() * item2.GetQuantity() << endl; 
   
   return 0;
}