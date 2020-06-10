#include<bits/stdc++.h>

using namespace std;
//Implement the class Box  
class Box{
    public:
    int l,b,h; //integers representing the dimensions of the box

// The class should have the following functions : 

// Constructors: 
    Box(){
        l=b=h=0;
    }
    Box(int pl,int pb,int ph){
        l = pl;
        b = pb;
        h = ph;
    }
    Box(Box &B){
        l = B.l;
        b = B.b;
        h = B.h;
    }


 int getLength(){return l;} // Return box's length
 int getBreadth (){return b;} // Return box's breadth
 int getHeight (){return h;}  //Return box's height
 long long CalculateVolume(){
     long long volume = 1;
     volume *=l;
     volume *=b;
     volume *=h;
     return volume;
     } // Return the volume of the box

//Overload operator < as specified
bool operator<(Box& B){
    if( (l < B.l) || ((b < B.b) && (l == B.l)) || ((h < B.h) && (l == B.l) && (b == B.b)) ){
            return true;
        }else{
            return false;
        }
}

//Overload operator << as specified
    friend ostream& operator<<(ostream& out, Box& B){
        out<<B.l<<" "<<B.b<<" "<<B.h;
        return out;
    }
};


void check2()
{
	int n;
	cin>>n;
	Box temp;
	for(int i=0;i<n;i++)
	{
		int type;
		cin>>type;
		if(type ==1)
		{
			cout<<temp<<endl;
		}
		if(type == 2)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			temp=NewBox;
			cout<<temp<<endl;
		}
		if(type==3)
		{
			int l,b,h;
			cin>>l>>b>>h;
			Box NewBox(l,b,h);
			if(NewBox<temp)
			{
				cout<<"Lesser\n";
			}
			else
			{
				cout<<"Greater\n";
			}
		}
		if(type==4)
		{
			cout<<temp.CalculateVolume()<<endl;
		}
		if(type==5)
		{
			Box NewBox(temp);
			cout<<NewBox<<endl;
		}

	}
}

int main()
{
	check2();
}