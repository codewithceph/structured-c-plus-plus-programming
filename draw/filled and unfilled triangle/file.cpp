//Code BY codewithceph
//Instagram: codewithceph
//github : codewithceph

/*
	description:
	The aim of this c++ program is to display a filled and unfilled triangle by using stars (character/special character) as border(fig.1)
	
												*					1			      a
											   * *				   1 1				 aaa
											  *   * 			  1   1				aaaaa
											 *     *			 1     1		   aaaaaaa
											*       *			1       1		  aaaaaaaaa
										   * * * * * *		   1 1 1 1 1 1		 aaaaaaaaaaa
											  
											  					fig. 1
*/
#include <iostream>

using namespace std;

void buildTriangle(int,char,char); // buildTriangle function declaration(prototype)

int main(void){
	
	cout<<"*******************************\nFIllED & UNFILLED TRIANGLE\n*******************************\n";//Program title
	
	//user data 	
	int height = 8;
	char border, fill[3], noFill;
	
	noFill = ' ';
	
	cout<<"\nEnter the height (number of line) of the triangle : ";
	cin>>height;
	
	cout<<"\nBorder(Aa,123,*-/^& ...) : ";
	cin>>border;
	
	cout<<"\nfill [yes or no]: ";
	cin>>fill;
	cout<<endl;
	
	if(height <= 1){//when the triangle cannot be build with datas inputed by the user
		cout<<"\nATTENTION : The triangle cannot be build with the entered value. Hence, the default triangle will be loaded\n\n";
		height = 8;
		border = '*';
	}
	else//when the datas inputed by the user are correct
		cout<<"Here is the triangle : \n\n";
		
	if(fill[0] == 'y' && fill[1] == 'e' && fill[2] == 's')
		buildTriangle(height,border,border); //call buildTriangle function for filled triangle
	else 
		buildTriangle(height,border,noFill); //call buildTriangle function for unfilled triangle
}

//buildTriangle function
void buildTriangle(int height, char border, char fill){
		for(int line = 1; line <= height; line++){//outer loop for lines
			if(line == height){
				if(fill == ' ')
					for(int star = 1; star <= height; star++) cout<<border<<fill;//last line for a filled triangle
				else
					for(int star = 1; star <= (2 * height)-1; star++) cout<<border;//last line for an unfilled triangle
			}
			else{
				//left side of the triangle
				for(int spaceBefore = height; spaceBefore > line; spaceBefore--) cout<<" ";
				cout<<border;
				for(int spaceAfter = 1; spaceAfter <= line-2; spaceAfter++) cout<<fill;
				
				//right side of the triangle
				if(line > 1){
					for(int space = 1; space < line; space++) cout<<fill;
					cout<<border;
				}
				cout<<endl;	//Go to next line
			}
		}
		cout<<endl<<endl;//end	
	}
