#ifndef ITEM_TO_PURCHASE_H
#define ITEM_TO_PURCHASE_H

#include <string>
using namespace std;

class ItemToPurchase { 
public: 
   ItemToPurchase(); // default constructor... name of class 
   //accessors 
   string GetName() const; 
   int GetPrice() const; 
   int GetQuantity() const; 
   // mutators 
   void SetName(string name); 
   void SetPrice(int price); 
   void SetQuantity(int qty); 
private: 
   string itemName; 
   int itemPrice; 
   int itemQuantity; 
};





#endif