#include <iostream>
#include <iomanip>
#include "currencyRates.cpp"
using namespace std;

int main(){
    Rates rate;
    float dollar;
    cout << "Enter US dollar amount: $";
    cin >> dollar;
    float toEuro = dollar * rate.euro;
    float toPound = dollar * rate.gbp;
    float toPeso = dollar * rate.peso;
    float toCad = dollar * rate.cad;
    float toAud = dollar * rate.aud;
    float toJpy = dollar * rate.jpy;
    float toInr = dollar * rate.inr;
    float toSgd = dollar * rate.sgd;
    float toChf = dollar * rate.chf;
    float toCny = dollar * rate.cny;
   
	using std::setw;
	cout << std::left;
	cout <<
	    setw(9) << "[Currency]" << "\t"    << setw(6) << "[Rate]"     << "\t"  << setw(5) << "[Amount in Currency]"        << '\n' <<
	    setw(9) << "Euro"       << "|"  << "\t"  << setw(6) << rate.euro    << "|"  << "\t" << setw(5) << "€"<< toEuro      << '\n' <<
        setw(9) << "GBP "       << "|"  << "\t"  << setw(6) << rate.gbp     << "|"  << "\t" << setw(5) << "£"<< toPound     << '\n' <<
        setw(9) << "Peso"       << "|"  << "\t"  << setw(6) << rate.peso    << "|"  << "\t" << setw(5) << "$"<< toPeso      << '\n' <<
        setw(9) << "CAD "       << "|"  << "\t"  << setw(6) << rate.cad     << "|"  << "\t" << setw(5) << "$"<< toCad       << '\n' <<
        setw(9) << "AUD "       << "|"  << "\t"  << setw(6) << rate.aud     << "|"  << "\t" << setw(5) << "$"<< toAud       << '\n' <<
        setw(9) << "JPY "       << "|"  << "\t"  << setw(6) << rate.jpy     << "|"  << "\t" << setw(5) << "¥"<< toJpy       << '\n' <<
        setw(9) << "INR "       << "|"  << "\t"  << setw(6) << rate.inr     << "|"  << "\t" << setw(5) << "₹"<< toInr       << '\n' <<
        setw(9) << "SGD "       << "|"  << "\t"  << setw(6) << rate.sgd     << "|"  << "\t" << setw(5) << "$"<< toSgd       << '\n' <<
	    setw(9) << "CHF "       << "|"  << "\t"  << setw(6) << rate.chf     << "|"  << "\t" << setw(5) << "₣"<< toChf       << '\n' <<
	    setw(9) << "CNY "       << "|"  << "\t"  << setw(6) << rate.cny     << "|"  << "\t" << setw(5) << "¥"<< toCny       << '\n';
    return 0;


    /*TODO: fix table to be align correctly
            make user able to convert btw other currency's i.e AUD to CAD
            other minor changes in code efficiently
    
    */

}