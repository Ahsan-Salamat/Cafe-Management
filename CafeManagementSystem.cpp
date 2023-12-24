#include <iostream>
#include <string>
using namespace std;

//forward declaration
class order_status;

class cafe {

public:

// status class 
friend class order_status;

    string cust_name;
	//static variable
	static int order_no;
	//friend class declaration
	friend cafe get_status(cafe);


	void get_name() {
		cout << "Welcome to Demon's CAFE\n";
		cout<<"-----------------------\n";
		cout<<"Enter Your Name:";
		order_no++;
		getline(cin, cust_name);
		
	}
};


//static variable body
int cafe :: order_no;


class menu : virtual public cafe{
	
	public :
	
	    //friend class declration
	    friend class order_status;
		//data member
		int cycle;
	    int food_type;
		int meal_sel;
	    int day_sel;
		int item_sel;
		int main_order;
		int main_time;
		int dessert_order;
		int dessert_time;
		int drink_order;
		int drink_time;
	//Function
	    void get_day(){
			main_order=0;
			main_time=0;
			dessert_order=0;
			dessert_time=0;
			drink_order=0;
			drink_time=0;
		cout<<"---------------------------------------\n";
		cout<<"Could you please let me know what a DAY today\nPress 1 for Monday\nPress 2 for Tuesday\nPress 3 for Wednesday\nPress 4 for Thuesday\nPress 5 For friday\nPress 6 For Saturday\nPress 7 for Sunday\nPress any other Key For Exiting\n";
		cin>>day_sel;
		cin.ignore();
		//condition apply on day 1
		if(day_sel==1){
//-----------------------------------------------------Day 1------------------------------------------------			
			    //Monday
			
				for(cycle=1;cycle<2;cycle){
			    cout<<"---------------------------------------\n";
				cout<<"Monday Menu\n";
				cout<<"---------------------------------------\n";	
		        cout << "Enter 1 for Main Meal\nEnter 2 for Dessert\nEnter 3 for Drink\nPress 4 for Reciept\n";
		        cin >> meal_sel;
			//main meal
			if(meal_sel==1){
				cout<<"---------------------------------------\n";
				cout<<"Main Meal\n";
				cout << "Select 1 for Pizza\nSelect 2 for Burger\nSelect 3 for Fried Chicken\n ";
			    cin >> food_type;
				//pizza type
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Pizza\n";
					cout<<"Press 1 for Cheese Pizza (Medium): PKR 1,000\nPress 2 for Pepperoni Pizza (Medium): PKR 1,200\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=1000;
					}
					else if(item_sel==2){
						main_order=1200;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Burger Menu\n";
					cout<<"Press 1 Classic Cheeseburger: PKR 550\nPress 2 Bacon Burger: PKR 600\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=550;
					}
					else if(item_sel==2){
						main_order=600;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Fried Chicken Menu\n";
					cout<<"Press 1 Fried Chicken Pieces (3 pcs): PKR 750\nPress 2 Chicken Tenders (5 pcs): PKR 650\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=550;
					}
					else if(item_sel==2){
						main_order=600;
					}
				}
			}
			//desserts Menu
			else if(meal_sel==2){
				cout<<"---------------------------------------\n";
				cout<<"Dessert Menul\n";
				cout << "Select 1 for Cakes:\nSelect 2 for Tarts and Pies\nSelect 3 for Creamy Delights\n ";
			    cin >> food_type;
				//Cake Categroies
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Cake Menu\n";
					cout<<"Press 1 for Classic Chocolate Cake - PKR 350\nPress 2 for Red Velvet Cupcake - PKR 80\n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=350;
					}
					else if(item_sel==2){
						dessert_order=80;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Tarts and Pies Menu\n";
					cout<<"Press 1 Fruit Tart - PKR 280\nPress 2 Key Lime Pie - PKR 290\n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=280;
					}
					else if(item_sel==2){
						dessert_order=290;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Creamy Delights Menu\n";
					cout<<"Press 1 Chocolate Mousse - PKR 280 \nPress 2 Tiramisu - PKR 400 \n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=280;
					}
					else if(item_sel==2){
						dessert_order=400;
					}
				}
			}
			//Drinks Menu
			else if(meal_sel==3){
				cout<<"---------------------------------------\n";
				cout<<"Drinks Menu\nNon-Alcoholic Beverages\n";
				cout << "Select 1 for Soft Drink:\nSelect 2 for Milk Shake\nSelect 3 for Juice\n ";
			    cin >> food_type;
				//Cake Categroies
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Soft Drinks Menu\n";
					cout<<"Press 1 for Coca-Cola - PKR 70\nPress 2 for Sprite - PKR 60\n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
						drink_order=70;
					}
					else if(item_sel==2){
						drink_order=80;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Milk Shake Menu\n";
					cout<<"Press 1 Pineapple - PKR 120\nPress 2 Banana Shake - PKR 90\n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
						drink_order=120;
					}
					else if(item_sel==2){
						drink_order=90;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Juice Menu\n";
					cout<<"Press 1 for Orange Juice - PKR 80 \nPress 2 for Mango Juice - PKR 140 \n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
					    drink_order=80;
					}
					else if(item_sel==2){
						drink_order=140;
					}
			   }
			  
	        }
		cout<<"-------------------------------------------\nEnter 1 For Manu\nEnter 2 for Reciept"<<endl;
		cin>>cycle;
	}
}
	else if(day_sel==2){

//-----------------------------------------------------Day 2------------------------------------------------			
			   
			    //Tuesday
			    cout<<"---------------------------------------\n";
				cout<<"Tuesday Menu\n";
				for(cycle=1;cycle<2;cycle){
				
				cout<<"---------------------------------------\n";	
		        cout << "Enter 1 for Main Meal\nEnter 2 for Dessert\nEnter 3 for Drink\nPress 4 for Reciept\n";
		        cin >> meal_sel;
			//main meal
			if(meal_sel==1){
				cout<<"---------------------------------------\n";
				cout<<"Main Meal\n";
				cout << "Select 1 for Pizza\nSelect 2 for Burger\nSelect 3 for Fried Chicken\n ";
			    cin >> food_type;
				//pizza type
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Pizza\n";
					cout<<"Press 1 for Veggie Pizza (Medium): PKR 1,100\nPress 2 for BBQ Chicken Pizza (Medium): PKR 1,250\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=1100;
					}
					else if(item_sel==2){
						main_order=1250;
					}
				}
				if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Burger Menu\n";
					cout<<"Press 1 Bacon Burger: PKR 600\nPress 2 Veggie Burger: PKR 520\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=600;
					}
					else if(item_sel==2){
						main_order=520;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Fried Chicken Menu\n";
					cout<<"Press 1 Chicken Tenders (5 pcs): PKR 650\nPress 2 Chicken Nuggets (10 pcs): PKR 490\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=650;
					}
					else if(item_sel==2){
						main_order=490;
					}
				}
			}
			//desserts Menu
			else if(meal_sel==2){
				cout<<"---------------------------------------\n";
				cout<<"Dessert Menul\n";
				cout << "Select 1 for Cakes:\nSelect 2 for Tarts and Pies\nSelect 3 for Creamy Delights\n ";
			    cin >> food_type;
				//Cake Categroies
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Cake Menu\n";
					cout<<"Press 1 for Classic Chocolate Cake - PKR 350\nPress 2 for Red Velvet Cupcake - PKR 80\n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=350;
					}
					else if(item_sel==2){
						dessert_order=80;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Tarts and Pies Menu\n";
					cout<<"Press 1 Fruit Tart - PKR 280\nPress 2 Key Lime Pie - PKR 290\n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=280;
					}
					else if(item_sel==2){
						dessert_order=290;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Creamy Delights Menu\n";
					cout<<"Press 1 Chocolate Mousse - PKR 280 \nPress 2 Tiramisu - PKR 400 \n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=280;
					}
					else if(item_sel==2){
						dessert_order=400;
					}
				}
			}
			//Drinks Menu
			else if(meal_sel==3){
				cout<<"---------------------------------------\n";
				cout<<"Drinks Menu\nNon-Alcoholic Beverages\n";
				cout << "Select 1 for Soft Drink:\nSelect 2 for Milk Shake\nSelect 3 for Juice\n ";
			    cin >> food_type;
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Soft Drinks Menu\n";
					cout<<"Press 1 for Coca-Cola - PKR 70\nPress 2 for Sprite - PKR 60\n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
						drink_order=70;
					}
					else if(item_sel==2){
						drink_order=80;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Milk Shake Menu\n";
					cout<<"Press 1 Pineapple - PKR 120\nPress 2 Banana Shake - PKR 90\n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
						drink_order=120;
					}
					else if(item_sel==2){
						drink_order=90;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Juice Menu\n";
					cout<<"Press 1 for Orange Juice - PKR 80 \nPress 2 for Mango Juice - PKR 140 \n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
					    drink_order=80;
					}
					else if(item_sel==2){
						drink_order=140;
					}
			   }
	        }
			cout<<"-------------------------------------------\nEnter 1 For Manu\nEnter 2 for Reciept"<<endl;
		    cin>>cycle;
		}
	}
	else if(day_sel==3){

//-----------------------------------------------------Day 3------------------------------------------------			
			   
			    //Wednesday
			    cout<<"---------------------------------------\n";
				cout<<"Wednesday Menu\n";
				
				for(cycle=1;cycle<2;cycle){
				cout<<"---------------------------------------\n";	
		        cout << "Enter 1 for Main Meal\nEnter 2 for Dessert\nEnter 3 for Drink\nPress 4 for Reciept\n";
		        cin >> meal_sel;
			//main meal
			if(meal_sel==1){
				cout<<"---------------------------------------\n";
				cout<<"Main Meal\n";
				cout << "Select 1 for Pizza\nSelect 2 for Burger\nSelect 3 for Fried Chicken\n ";
			    cin >> food_type;
				//pizza type
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Pizza\n";
					cout<<"Press 1 for Veggie Pizza (Medium): PKR 1,100\nPress 2 for BBQ Chicken Pizza (Medium): PKR 1,250\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=1100;
					}
					else if(item_sel==2){
						main_order=1250;
					}
				}
				if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Burger Menu\n";
					cout<<"Press 1 Bacon Burger: PKR 600\nPress 2 Veggie Burger: PKR 520\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=600;
					}
					else if(item_sel==2){
						main_order=520;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Fried Chicken Menu\n";
					cout<<"Press 1 Chicken Tenders (5 pcs): PKR 650\nPress 2 Chicken Nuggets (10 pcs): PKR 490\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=650;
					}
					else if(item_sel==2){
						main_order=490;
					}
				}
			}
			//desserts Menu
			else if(meal_sel==2){
				cout<<"---------------------------------------\n";
				cout<<"Dessert Menul\n";
				cout << "Select 1 for Cakes:\nSelect 2 for Tarts and Pies\nSelect 3 for Creamy Delights\n ";
			    cin >> food_type;
				//Cake Categroies
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Cake Menu\n";
					cout<<"Press 1 for Classic Chocolate Cake - PKR 350\nPress 2 for Red Velvet Cupcake - PKR 80\n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=350;
					}
					else if(item_sel==2){
						dessert_order=80;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Tarts and Pies Menu\n";
					cout<<"Press 1 Fruit Tart - PKR 280\nPress 2 Key Lime Pie - PKR 290\n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=280;
					}
					else if(item_sel==2){
						dessert_order=290;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Creamy Delights Menu\n";
					cout<<"Press 1 Chocolate Mousse - PKR 280 \nPress 2 Tiramisu - PKR 400 \n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=280;
					}
					else if(item_sel==2){
						dessert_order=400;
					}
				}
			}
			//Drinks Menu
			else if(meal_sel==3){
				cout<<"---------------------------------------\n";
				cout<<"Drinks Menu\nNon-Alcoholic Beverages\n";
				cout << "Select 1 for Soft Drink:\nSelect 2 for Milk Shake\nSelect 3 for Juice\n ";
			    cin >> food_type;
				//Cake Categroies
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Soft Drinks Menu\n";
					cout<<"Press 1 for Coca-Cola - PKR 70\nPress 2 for Sprite - PKR 60\n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
						drink_order=70;
					}
					else if(item_sel==2){
						drink_order=80;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Milk Shake Menu\n";
					cout<<"Press 1 Pineapple - PKR 120\nPress 2 Banana Shake - PKR 90\n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
						drink_order=120;
					}
					else if(item_sel==2){
						drink_order=90;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Juice Menu\n";
					cout<<"Press 1 for Orange Juice - PKR 80 \nPress 2 for Mango Juice - PKR 140 \n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
					    drink_order=80;
					}
					else if(item_sel==2){
						drink_order=140;
					}
			   }
	        }
		cout<<"-------------------------------------------\nEnter 1 For Manu\nEnter 2 for Reciept"<<endl;
		cin>>cycle;		
		}
	}
	else if(day_sel==4){

//-----------------------------------------------------Day 4------------------------------------------------			
			    //Thuesday
			    cout<<"---------------------------------------\n";
				cout<<"Thuesday Menu\n";
				
				for(cycle=1;cycle<2;cycle){
				cout<<"---------------------------------------\n";	
		        cout << "Enter 1 for Main Meal\nEnter 2 for Dessert\nEnter 3 for Drink\nPress 4 for Reciept\n";
		        cin >> meal_sel;
			//main meal
			if(meal_sel==1){
				cout<<"---------------------------------------\n";
				cout<<"Main Meal\n";
				cout << "Select 1 for Pizza\nSelect 2 for Burger\nSelect 3 for Fried Chicken\n ";
			    cin >> food_type;
				//pizza type
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Pizza\n";
					cout<<"Press 1 for Veggie Pizza (Medium): PKR 1,100\nPress 2 for BBQ Chicken Pizza (Medium): PKR 1,250\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=1100;
					}
					else if(item_sel==2){
						main_order=1250;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Burger Menu\n";
					cout<<"Press 1 Bacon Burger: PKR 600\nPress 2 Veggie Burger: PKR 520\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=600;
					}
					else if(item_sel==2){
						main_order=520;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Fried Chicken Menu\n";
					cout<<"Press 1 Chicken Tenders (5 pcs): PKR 650\nPress 2 Chicken Nuggets (10 pcs): PKR 490\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=650;
					}
					else if(item_sel==2){
						main_order=490;
					}
				}
			}
			//desserts Menu
			else if(meal_sel==2){
				cout<<"---------------------------------------\n";
				cout<<"Dessert Menul\n";
				cout << "Select 1 for Cakes:\nSelect 2 for Tarts and Pies\nSelect 3 for Creamy Delights\n ";
			    cin >> food_type;
				//Cake Categroies
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Cake Menu\n";
					cout<<"Press 1 for Classic Chocolate Cake - PKR 350\nPress 2 for Red Velvet Cupcake - PKR 80\n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=350;
					}
					else if(item_sel==2){
						dessert_order=80;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Tarts and Pies Menu\n";
					cout<<"Press 1 Fruit Tart - PKR 280\nPress 2 Key Lime Pie - PKR 290\n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=280;
					}
					else if(item_sel==2){
						dessert_order=290;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Creamy Delights Menu\n";
					cout<<"Press 1 Chocolate Mousse - PKR 280 \nPress 2 Tiramisu - PKR 400 \n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=280;
					}
					else if(item_sel==2){
						dessert_order=400;
					}
				}
			}
			//Drinks Menu
			else if(meal_sel==3){
				cout<<"---------------------------------------\n";
				cout<<"Drinks Menu\nNon-Alcoholic Beverages\n";
				cout << "Select 1 for Soft Drink:\nSelect 2 for Milk Shake\nSelect 3 for Juice\n ";
			    cin >> food_type;
				//Cake Categroies
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Soft Drinks Menu\n";
					cout<<"Press 1 for Coca-Cola - PKR 70\nPress 2 for Sprite - PKR 60\n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
						drink_order=70;
					}
					else if(item_sel==2){
						drink_order=80;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Milk Shake Menu\n";
					cout<<"Press 1 Pineapple - PKR 120\nPress 2 Banana Shake - PKR 90\n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
						drink_order=120;
					}
					else if(item_sel==2){
						drink_order=90;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Juice Menu\n";
					cout<<"Press 1 for Orange Juice - PKR 80 \nPress 2 for Mango Juice - PKR 140 \n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
					    drink_order=80;
					}
					else if(item_sel==2){
						drink_order=140;
					}
			   }
	        }
			cout<<"-------------------------------------------\nEnter 1 For Manu\nEnter 2 for Reciept"<<endl;
		    cin>>cycle;		
		}
		
	}
		else if(day_sel==5){

//-----------------------------------------------------Day 5------------------------------------------------			
			   
			    //Friday
			    cout<<"---------------------------------------\n";
				cout<<"Friday Menu\n";
				
				for(cycle=1;cycle<2;cycle){
				cout<<"---------------------------------------\n";	
		        cout << "Enter 1 for Main Meal\nEnter 2 for Dessert\nEnter 3 for Drink\nPress 4 for Reciept\n";
		        cin >> meal_sel;
			//main meal
			if(meal_sel==1){
				cout<<"---------------------------------------\n";
				cout<<"Main Meal\n";
				cout << "Select 1 for Pizza\nSelect 2 for Burger\nSelect 3 for Fried Chicken\n ";
			    cin >> food_type;
				//pizza type
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Pizza\n";
					cout<<"Press 1 for Veggie Pizza (Medium): PKR 1,100\nPress 2 for BBQ Chicken Pizza (Medium): PKR 1,250\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=1100;
					}
					else if(item_sel==2){
						main_order=1250;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Burger Menu\n";
					cout<<"Press 1 Bacon Burger: PKR 600\nPress 2 Veggie Burger: PKR 520\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=600;
					}
					else if(item_sel==2){
						main_order=520;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Fried Chicken Menu\n";
					cout<<"Press 1 Chicken Tenders (5 pcs): PKR 650\nPress 2 Chicken Nuggets (10 pcs): PKR 490\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=650;
					}
					else if(item_sel==2){
						main_order=490;
					}
				}
			}
			//desserts Menu
			else if(meal_sel==2){
				cout<<"---------------------------------------\n";
				cout<<"Dessert Menul\n";
				cout << "Select 1 for Cakes:\nSelect 2 for Tarts and Pies\nSelect 3 for Creamy Delights\n ";
			    cin >> food_type;
				//Cake Categroies
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Cake Menu\n";
					cout<<"Press 1 for Classic Chocolate Cake - PKR 350\nPress 2 for Red Velvet Cupcake - PKR 80\n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=350;
					}
					else if(item_sel==2){
						dessert_order=80;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Tarts and Pies Menu\n";
					cout<<"Press 1 Fruit Tart - PKR 280\nPress 2 Key Lime Pie - PKR 290\n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=280;
					}
					else if(item_sel==2){
						dessert_order=290;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Creamy Delights Menu\n";
					cout<<"Press 1 Chocolate Mousse - PKR 280 \nPress 2 Tiramisu - PKR 400 \n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=280;
					}
					else if(item_sel==2){
						dessert_order=400;
					}
				}
			}
			//Drinks Menu
			else if(meal_sel==3){
				cout<<"---------------------------------------\n";
				cout<<"Drinks Menu\nNon-Alcoholic Beverages\n";
				cout << "Select 1 for Soft Drink:\nSelect 2 for Milk Shake\nSelect 3 for Juice\n ";
			    cin >> food_type;
				//Cake Categroies
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Soft Drinks Menu\n";
					cout<<"Press 1 for Coca-Cola - PKR 70\nPress 2 for Sprite - PKR 60\n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
						drink_order=70;
					}
					else if(item_sel==2){
						drink_order=80;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Milk Shake Menu\n";
					cout<<"Press 1 Pineapple - PKR 120\nPress 2 Banana Shake - PKR 90\n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
						drink_order=120;
					}
					else if(item_sel==2){
						drink_order=90;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Juice Menu\n";
					cout<<"Press 1 for Orange Juice - PKR 80 \nPress 2 for Mango Juice - PKR 140 \n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
					    drink_order=80;
					}
					else if(item_sel==2){
						drink_order=140;
					}
			   }
	        }
		    cout<<"-------------------------------------------\nEnter 1 For Manu\nEnter 2 for Reciept"<<endl;
		    cin>>cycle;
		}
	}
		else if(day_sel==6){

//-----------------------------------------------------Day 6------------------------------------------------			
			    //Saturday
			    cout<<"---------------------------------------\n";
				cout<<"Saturday Menu\n";
				
				for(cycle=1;cycle<2;cycle){
				cout<<"---------------------------------------\n";	
		        cout << "Enter 1 for Main Meal\nEnter 2 for Dessert\nEnter 3 for Drink\nPress 4 for Reciept\n";
		        cin >> meal_sel;
			//main meal
			if(meal_sel==1){
				cout<<"---------------------------------------\n";
				cout<<"Main Meal\n";
				cout << "Select 1 for Pizza\nSelect 2 for Burger\nSelect 3 for Fried Chicken\n ";
			    cin >> food_type;
				//pizza type
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Pizza\n";
					cout<<"Press 1 for Veggie Pizza (Medium): PKR 1,100\nPress 2 for BBQ Chicken Pizza (Medium): PKR 1,250\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=1100;
					}
					else if(item_sel==2){
						main_order=1250;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Burger Menu\n";
					cout<<"Press 1 Bacon Burger: PKR 600\nPress 2 Veggie Burger: PKR 520\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=600;
					}
					else if(item_sel==2){
						main_order=520;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Fried Chicken Menu\n";
					cout<<"Press 1 Chicken Tenders (5 pcs): PKR 650\nPress 2 Chicken Nuggets (10 pcs): PKR 490\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=650;
					}
					else if(item_sel==2){
						main_order=490;
					}
				}
			}
			//desserts Menu
			else if(meal_sel==2){
				cout<<"---------------------------------------\n";
				cout<<"Dessert Menul\n";
				cout << "Select 1 for Cakes:\nSelect 2 for Tarts and Pies\nSelect 3 for Creamy Delights\n ";
			    cin >> food_type;
				//Cake Categroies
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Cake Menu\n";
					cout<<"Press 1 for Classic Chocolate Cake - PKR 350\nPress 2 for Red Velvet Cupcake - PKR 80\n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=350;
					}
					else if(item_sel==2){
						dessert_order=80;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Tarts and Pies Menu\n";
					cout<<"Press 1 Fruit Tart - PKR 280\nPress 2 Key Lime Pie - PKR 290\n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=280;
					}
					else if(item_sel==2){
						dessert_order=290;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Creamy Delights Menu\n";
					cout<<"Press 1 Chocolate Mousse - PKR 280 \nPress 2 Tiramisu - PKR 400 \n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=280;
					}
					else if(item_sel==2){
						dessert_order=400;
					}
				}
			}
			//Drinks Menu
			else if(meal_sel==3){
				cout<<"---------------------------------------\n";
				cout<<"Drinks Menu\nNon-Alcoholic Beverages\n";
				cout << "Select 1 for Soft Drink:\nSelect 2 for Milk Shake\nSelect 3 for Juice\n ";
			    cin >> food_type;
				//Cake Categroies
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Soft Drinks Menu\n";
					cout<<"Press 1 for Coca-Cola - PKR 70\nPress 2 for Sprite - PKR 60\n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
						drink_order=70;
					}
					else if(item_sel==2){
						drink_order=80;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Milk Shake Menu\n";
					cout<<"Press 1 Pineapple - PKR 120\nPress 2 Banana Shake - PKR 90\n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
						drink_order=120;
					}
					else if(item_sel==2){
						drink_order=90;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Juice Menu\n";
					cout<<"Press 1 for Orange Juice - PKR 80 \nPress 2 for Mango Juice - PKR 140 \n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
					    drink_order=80;
					}
					else if(item_sel==2){
						drink_order=140;
					}
			   }
	        }
			cout<<"-------------------------------------------\nEnter 1 For Manu\nEnter 2 for Reciept"<<endl;
		    cin>>cycle;
		}
	}
		else if(day_sel==7){

//-----------------------------------------------------Day 7------------------------------------------------			
			    //Sunday
			    cout<<"---------------------------------------\n";
				cout<<"Sunday Menu\n";
				
				for(cycle=1;cycle<2;cycle){
				cout<<"---------------------------------------\n";	
		        cout << "Enter 1 for Main Meal\nEnter 2 for Dessert\nEnter 3 for Drink\nPress 4 for Reciept\n";
		        cin >> meal_sel;
			//main meal
			if(meal_sel==1){
				cout<<"---------------------------------------\n";
				cout<<"Main Meal\n";
				cout << "Select 1 for Pizza\nSelect 2 for Burger\nSelect 3 for Fried Chicken\n ";
			    cin >> food_type;
				//pizza type
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Pizza\n";
					cout<<"Press 1 for Veggie Pizza (Medium): PKR 1,100\nPress 2 for BBQ Chicken Pizza (Medium): PKR 1,250\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=1100;
					}
					else if(item_sel==2){
						main_order=1250;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Burger Menu\n";
					cout<<"Press 1 Bacon Burger: PKR 600\nPress 2 Veggie Burger: PKR 520\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=600;
					}
					else if(item_sel==2){
						main_order=520;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Fried Chicken Menu\n";
					cout<<"Press 1 Chicken Tenders (5 pcs): PKR 650\nPress 2 Chicken Nuggets (10 pcs): PKR 490\n";
					cin>>item_sel;
					main_time=15;
					if(item_sel==1){
						main_order=650;
					}
					else if(item_sel==2){
						main_order=490;
					}
				}
			}
			//desserts Menu
			else if(meal_sel==2){
				cout<<"---------------------------------------\n";
				cout<<"Dessert Menul\n";
				cout << "Select 1 for Cakes:\nSelect 2 for Tarts and Pies\nSelect 3 for Creamy Delights\n ";
			    cin >> food_type;
				//Cake Categroies
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Cake Menu\n";
					cout<<"Press 1 for Classic Chocolate Cake - PKR 350\nPress 2 for Red Velvet Cupcake - PKR 80\n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=350;
					}
					else if(item_sel==2){
						dessert_order=80;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Tarts and Pies Menu\n";
					cout<<"Press 1 Fruit Tart - PKR 280\nPress 2 Key Lime Pie - PKR 290\n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=280;
					}
					else if(item_sel==2){
						dessert_order=290;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Creamy Delights Menu\n";
					cout<<"Press 1 Chocolate Mousse - PKR 280 \nPress 2 Tiramisu - PKR 400 \n";
					cin>>item_sel;
					dessert_time=10;
					if(item_sel==1){
						dessert_order=280;
					}
					else if(item_sel==2){
						dessert_order=400;
					}
				}
			}
			//Drinks Menu
			else if(meal_sel==3){
				cout<<"---------------------------------------\n";
				cout<<"Drinks Menu\nNon-Alcoholic Beverages\n";
				cout << "Select 1 for Soft Drink:\nSelect 2 for Milk Shake\nSelect 3 for Juice\n ";
			    cin >> food_type;
				//Cake Categroies
				if(food_type==1){
					cout<<"---------------------------------------\n";
				    cout<<"Soft Drinks Menu\n";
					cout<<"Press 1 for Coca-Cola - PKR 70\nPress 2 for Sprite - PKR 60\n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
						drink_order=70;
					}
					else if(item_sel==2){
						drink_order=80;
					}
				}
				else if(food_type==2){
					cout<<"---------------------------------------\n";
				    cout<<"Milk Shake Menu\n";
					cout<<"Press 1 Pineapple - PKR 120\nPress 2 Banana Shake - PKR 90\n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
						drink_order=120;
					}
					else if(item_sel==2){
						drink_order=90;
					}
				}
				else if(food_type==3){
					cout<<"---------------------------------------\n";
				    cout<<"Juice Menu\n";
					cout<<"Press 1 for Orange Juice - PKR 80 \nPress 2 for Mango Juice - PKR 140 \n";
					cin>>item_sel;
					drink_time=5;
					if(item_sel==1){
					    drink_order=80;
					}
					else if(item_sel==2){
						drink_order=140;
					}
			   }
	        }	
			cout<<"-------------------------------------------\nEnter 1 For Manu\nEnter 2 for Reciept"<<endl;
		    cin>>cycle;
		}
	  }
    }
};


//status class
class order_status{

	public:

	int food_type;
	//menu
		int main_status;
		int dessert_status;
		int drink_status;
		int payment_return;
		int recieve_payment;
		int total;
		int main_t_status;
		int dessert_t_Status;
		int drink_t_Status;
		int orderno_count;
	//name detail

        string name_status;

    void get_detail(cafe c,menu m){
		name_status = c.cust_name;
		main_status = m.main_order;
		dessert_status = m.dessert_order;
       	drink_status = m.drink_order;
		main_t_status=m.main_time;
		dessert_t_Status=m.dessert_time;
		drink_t_Status=m.drink_time;
		orderno_count=c.order_no;

	
	}	
	void Display_detail(){


		//value assign
		total = 0;
		payment_return= 0 ;
		//-----------------------------------------------Reciept---------------------------------
		total=main_status+dessert_status+drink_status;
		cout<<"---------------------------------------\n";
		cout<<"Total : "<<main_status+dessert_status+drink_status <<endl;
		if(total != 0){
		cout<<"Enter Amount : ";
		cin>>payment_return;
		}
		cout<<"---------------------------------------\n";
		cout<<"-----------------Receipt---------------\n";
		cout<<"Order NO : "<<orderno_count<<endl;
		cout<<"Customer Name : "<<name_status<<endl;
		cout<<"Meal Price : "<<main_status<<endl;
		cout<<"Dessert Price : "<<dessert_status<<endl;
		cout<<"Drink Price : "<<drink_status<<endl;
		cout<<"---------------------------------------\n";
		cout<<"Total : "<<main_status+dessert_status+drink_status<<endl;
	    if(main_status==0 && dessert_status==0 && drink_status==0){
			cout<<"We noticed your ORDER is currently empty"<<endl;
		}
		else if(total <= payment_return){
			cout<<"Return : "<<payment_return-total<<endl;
			cout<<"\tPatience Please\nYour Order Will be READY IN : "
			<<main_t_status+dessert_t_Status+drink_t_Status<<" Min"<<endl;
		}		
		else if(total>1){
			cout<<"Order Cancel\nBecause Your Cash not enough for this order"<<endl;
		}
		cout<<"-------------------------------------------\n";
    	cout<<"--Thank You For Savouring moments with us--\n"
	        <<"-----------------Best Wishes---------------\n";
	    cout<<"-------------------------------------------\n";
		
	}

};


int main(){

	cafe c1;
	menu m1;
    order_status o1;

	cout<<"-------------------------------------------\n";

	c1.get_name();
	m1.get_day();

	o1.get_detail(c1,m1);
	o1.Display_detail();
	
	return 0;
}