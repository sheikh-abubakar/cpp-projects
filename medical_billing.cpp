#include<iostream>
#include<fstream>
#include<string>
#include<vector>
#include<iomanip>
using namespace std;

int main(){
    cout<<setfill('`');
    

    string filename;
    cout << "Enter your file name: ";
    cin >> filename;

    ifstream myfile;
    string user_item;
    string item;
   
    int sum = 0;
    int num_of_items, price;
   
    vector<string> purchased_products;
    vector<int> Quntity;
    vector<int> price_of_product;  
    

     while (true) {
        cout << "Enter the item name OR type done to exit "<<endl;
        cin >> user_item;

        if (user_item == "done" || user_item == "Done") {
            break;
        }
        cout << "Enter the number of items: ";
        cin >> num_of_items;

        myfile.open(filename);
        bool found = false;

        while (myfile >> item >> price) {
            if (item == user_item) {

                purchased_products.push_back(user_item);
                Quntity.push_back(num_of_items);
                price_of_product.push_back(price);
                price = num_of_items * price;
                sum += price;
                found = true;
                break;
            }
        }

        myfile.close();

        if (!found) {
            cout << "Item " << user_item << " not found!" << endl;
        }
    
    }

    //Medical Invoise
    
        system ("color 70");
    cout<<"----------Medical Invoise----------"<<endl;
    
    cout<<endl;
    cout<<"************************************************"<<endl;

    cout<<"Products Description\t Quantity\t Unit-Price"<<endl;
    cout<<endl;
    cout<<"************************************************"<<endl;
    for(int i =0; i < purchased_products.size(); i++){
        
        cout<<"```"<<purchased_products[i]<<"\t\t   "<<Quntity[i]<<"\t\t  "<<price_of_product[i]<<endl;
    }
    cout<<endl;
    cout<<"************************************************"<<endl;
    
    cout<<setw(20)<<"Total price: "<<sum<<" ```````"<<endl;
    
    
    
    return 0;
}
