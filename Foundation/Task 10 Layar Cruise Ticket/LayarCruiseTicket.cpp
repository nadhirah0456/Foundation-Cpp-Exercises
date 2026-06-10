#include<iostream>
using namespace std;
int main ()
{
	int ticket,quantity,ticket_charge,GST,total;
	char view;
	
	cout<<"Enter the tickets (Press 1 for Single Room, 2 for Double room, and 3 for Executive Room) =>> ";
	cin>>ticket;
	
	cout<<"\nChoose your view (Y - with ocean view, N - without ocean view) =>> ";
	cin>>view;
	
	cout<<"\nQuantity =>> ";
	cin>>quantity;
	
	if (ticket == 1 && (view == 'Y'|| view == 'y'))
	{ 
		ticket_charge=quantity*90;
		cout<<"\nTICKET(S) CHARGE = RM"<<ticket_charge<<".00";
		GST=ticket_charge*0.06;
		cout<<"\nGST(6%)(RM) = "<<GST;
		total=GST+ticket_charge;
		cout<<"\nTOTAL (RM) = "<<total<<".00";
	}
	else if (ticket == 1 && (view == 'N'|| view == 'n'))
	{ 
		ticket_charge=quantity*70;
		cout<<"\nTICKET(S) CHARGE = RM"<<ticket_charge<<".00";
		GST=ticket_charge*0.06;
		cout<<"\nGST(6%)(RM) = "<<GST;
		total=GST+ticket_charge;
		cout<<"\nTOTAL (RM) = "<<total<<".00";
	}
	else if (ticket == 2 && (view == 'Y' || view == 'y'))
	{ 
		ticket_charge=quantity*130;
		cout<<"\nTICKET(S) CHARGE = RM"<<ticket_charge<<".00";
		GST=ticket_charge*0.06;
		cout<<"\nGST(6%)(RM) = "<<GST;
		total=GST+ticket_charge;
		cout<<"\nTOTAL(RM) = "<<total<<".00";
	}
	else if (ticket == 2 && (view == 'N'|| view == 'n'))
	{ 
		ticket_charge=quantity*110;
		cout<<"\nTICKET(S) CHARGE = RM"<<ticket_charge<<".00";
		GST=ticket_charge*0.06;
		cout<<"\nGST(6%)(RM) = "<<GST;
		total=GST+ticket_charge;
		cout<<"\nTOTAL(RM) = "<<total<<".00";
	}
	else if (ticket == 3 && (view == 'Y'|| view == 'y'))
	{ 
		ticket_charge=quantity*200;
		cout<<"\nTICKET(S) CHARGE = RM"<<ticket_charge<<".00";
		GST=ticket_charge*0.06;
		cout<<"\nGST(6%)(RM) = "<<GST;
		total=GST+ticket_charge;
		cout<<"\nTOTAL(RM) = "<<total<<".00";
	}
	else if (ticket == 3 && (view == 'N'|| view == 'n'))
	{ 
		ticket_charge=quantity*180;
		cout<<"\nTICKET(S) CHARGE = RM"<<ticket_charge<<".00";
		GST=ticket_charge*0.06;
		cout<<"\nGST(6%)(RM) = "<<GST;
		total=GST+ticket_charge;
		cout<<"\nTOTAL(RM) = "<<total<<".00";
	}
	else
		cout<<"\nINVALID INPUT!...TRY AGAIN";
		
	return 0;
}
