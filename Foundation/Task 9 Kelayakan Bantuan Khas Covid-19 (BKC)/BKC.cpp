#include <iostream>
using namespace std;
int main()
{
	char kategori_penerima;
	char kelayakan;
	
	cout<<"Sila masukkan kategori anda (K - miskin tegar or B - B40 or M - M40): ";
	cin>>kategori_penerima;
	
	cout<<"\nSila masukkan kelayakan anda (I - isi rumah or J - bujang): ";
	cin>>kelayakan;
	
	if ((kategori_penerima == 'K' || kategori_penerima == 'k') && (kelayakan == 'I' || kelayakan == 'i'))
		cout<<"\nAnda mendapat RM1300!";
	else if ((kategori_penerima == 'K' || kategori_penerima == 'k') && (kelayakan == 'J' || kelayakan == 'j'))
		cout<<"\nAnda mendapat RM500!";
	else if ((kategori_penerima == 'B' || kategori_penerima == 'b') && (kelayakan == 'I' || kelayakan == 'i'))
		cout<<"\nAnda mendapat RM800!";
	else if ((kategori_penerima == 'B' || kategori_penerima == 'b') && (kelayakan == 'J' || kelayakan == 'j'))
		cout<<"\nAnda mendapat RM200!";
	else if ((kategori_penerima == 'M' || kategori_penerima == 'm') && (kelayakan == 'I' || kelayakan == 'i'))
		cout<<"\nAnda mendapat RM250!";
	else if ((kategori_penerima == 'M' || kategori_penerima == 'm') && (kelayakan == 'J' || kelayakan == 'j'))
		cout<<"\nAnda mendapat RM100!";
	else
		cout<<"\nAnda tidak layak menerima Bantuan Khas Covid-19 (BKC)!";
		
	return 0;
}
