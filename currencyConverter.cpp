#include <iostream>
#include <iomanip>
#include <locale>
#include "currencyRates.cpp"


using namespace std;

int main(){
    Rates rate;
    double dollar;
    cout << "Enter US dollar amount: $";
    cin >> dollar;
    double toEuro = dollar * rate.euro; double toPound = dollar * rate.gbp;
    double toPeso = dollar * rate.peso; double toCad = dollar * rate.cad;
    double toAud = dollar * rate.aud; double toJpy = dollar * rate.jpy;
    double toInr = dollar * rate.inr; double toSgd = dollar * rate.sgd;
    double toChf = dollar * rate.chf; double toCny = dollar * rate.cny;
   

	using std::setw;
	cout << left;
    cout << "----------------------------------------------------" << endl;
    cout.imbue(locale("en_US.UTF-8"));
	cout <<
	    setw(9) << "[Currency]" << "   "    << setw(6) << "[Rate]"     << "\t"  << setw(5) << "[Amount after Conversion]"        << '\n' <<
	    setw(9) << "   Euro"       << "|"  << "    "  << setw(6) << rate.euro  << " |"  << setw(5) << "\t " << "€" << fixed << setprecision(2) << toEuro     << '\n' <<
        setw(9) << "   GBP "       << "|"  << "    "  << setw(6) << rate.gbp   << " |"  << setw(5) << "\t " << "£"<< fixed << setprecision(2) << toPound     << '\n' <<
        setw(9) << "   Peso"       << "|"  << "    "  << setw(6) << rate.peso  << " |"  << setw(5) << "\t " << "$"<< fixed << setprecision(2) << toPeso      << '\n' <<
        setw(9) << "   CAD "       << "|"  << "    "  << setw(6) << rate.cad   << " |"  << setw(5) << "\t " << "$"<< fixed << setprecision(2) << toCad       << '\n' <<
        setw(9) << "   AUD "       << "|"  << "    "  << setw(6) << rate.aud   << " |"  << setw(5) << "\t " << "$"<< fixed << setprecision(2) << toAud       << '\n' <<
        setw(9) << "   JPY "       << "|"  << "    "  << setw(6) << rate.jpy   << " |"  << setw(5) << "\t " << "¥"<< fixed << setprecision(2) << toJpy       << '\n' <<
        setw(9) << "   INR "       << "|"  << "    "  << setw(6) << rate.inr   << " |"  << setw(5) << "\t " << "₹"<< fixed << setprecision(2) << toInr       << '\n' <<
        setw(9) << "   SGD "       << "|"  << "    "  << setw(6) << rate.sgd   << " |"  << setw(5) << "\t " << "$"<< fixed << setprecision(2) << toSgd       << '\n' <<
	    setw(9) << "   CHF "       << "|"  << "    "  << setw(6) << rate.chf   << " |"  << setw(5) << "\t " << "₣"<< fixed << setprecision(2) << toChf       << '\n' <<
	    setw(9) << "   CNY "       << "|"  << "    "  << setw(6) << rate.cny   << " |"  << setw(5) << "\t " << "¥"<< fixed << setprecision(2) << toCny       << '\n';
    cout << "----------------------------------------------------" << endl;
    return 0;


    /*TODO: 
            make user able to convert btw other currency's i.e AUD to CAD
            other minor changes in code efficiently
    */

}