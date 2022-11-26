
#include<iostream>
using namespace std;
int main(){
        int res=0;
        int input1=11;
        int input2=18;
	for(int i=input1+1;i<input2;i++){
        
		int c=0,rem=0;
		int temp=i;
        
		if(i%4!=0){
			while(temp!=0){
		rem=temp%10;
			if(rem==4){
				c=0;
				break;
			}
			else{
				c++;
			}
				
			temp=temp/10;
		}
		cout<<"C "<<c<<" i "<<i<<" temp "<<temp<<" rem "<<rem<<endl;
		}
		if(c>0){
			res++;
		}
		cout<<" c "<<c<<" res "<<res<<endl;
	}
    
    }
	//return res;