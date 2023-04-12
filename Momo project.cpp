#include <iostream>
using namespace std;


int main() {
	string option, old_pin,new_pin,receiver_num,amount;
	bool pin_out;
	int pin_count;
	int pin_limit;
	pin_limit=2;
	pin_count=0;
	pin_out=false;
	
	cout<<"welcome to Gideon mobile money service \n";
	cout<<"";
	cout<<"1, Authentication \n";
	cout<<"2, Reset pin \n";
	cout<<"3, check balance \n";
	cout<<"4, send money \n";
	cout<<"";
	cout<<"select option by enter 1 - 4: \n";
	cin>>option;
	if(option=="1"){
	   while(old_pin != "0000" and not(pin_out)){
	        if (pin_count<=pin_limit){
	    	   cout<<"enter your pin to accept withdrawal of 500 cedis: ";
	           cin>>old_pin;
	    	   pin_count+=1;}
	    	
	        else{pin_out=true;}
	        } 
	    if (pin_out==true){
	    	cout<<"your account is blocked for too many atempts";
		}
		else{
			cout<<"you have successfully withdrawn 500cedis from your account";
			cout<<"with fee of 1 cedis";
	    }
			
		
		}
	else if (option=="2"){
	    while(old_pin != "0000"and not(pin_out)){
	    	if (pin_count<=pin_limit){
	    		cout<<"enter old pin: ";
	    		cin>>old_pin;
	    		pin_count+=1;}
	    			
	    	else{pin_out=true;}
			}	
	    			
	    			
	    if (pin_out==true){
	        cout<<"your account is blocked for too many atempts";}
	    else{
	    cout<<"pin already exist";
	        
		cin>>new_pin;
		if (new_pin==old_pin){
			cout<<"pin already exist";
		}
		cout<<"your pin has been resetted successflly";
		}} 
	
	else if (option=="3"){
		while(old_pin != "0000"and not(pin_out)){
			
			if (pin_count<=pin_limit){
				cout<<"enter pin: ";
				cin>>old_pin;
			    pin_count+=1;}
			     
		    else{pin_out=true;}
			}
	    if (pin_out==true){
	    cout<<"your account is blocked for too many attempts";
	    } 
	    else{
	    	cout<<"your balance is 1000 codis";
	    	
	    	
		}
    }
	else if (option=="4"){
		cout<<"enter receiver number: ";
	    cin>>receiver_num;
	    cout<<"enter account to be sent: "; 
	    cin>>amount; 
		
		while(old_pin != "0000"and not(pin_out)){
			if(pin_count<=pin_limit){
				cout<<"enter pin: ";
				cin>>old_pin;
				pin_count+=1;}
				
			else{pin_out=true;}
			}
	    if(pin_out==true){
	    	cout<<"your account is blocked for too many attempts";
		}	
		else{ 
		    cout<<"you have successfully";
		}
	} 
    	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
    } 
 
	
	 
			
		
	

