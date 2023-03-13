#include <iostream>
#include <iomanip>
#include <locale>
#include "currencyRates.cpp"

using namespace std;

double convert(double a, double b){
    return a * b;
}

int main(){
    Rates rate;
    double dollar;
    cout << "Enter US dollar amount: $";
    cin >> dollar;

	using std::setw;
	cout << left;
    cout << "----------------------------------------------------" << endl;
    cout.imbue(locale("en_US.UTF-8"));
	cout <<
	    setw(9) << "[Currency]" << "   "    << setw(6) << "[Rate]"     << "\t"  << setw(5) << "[Amount after Conversion]"        << '\n' <<
	    setw(9) << "   Euro"       << "|"  << "    "  << setw(6) << rate.euro  << " |"  << setw(5) << "\t " << "€ " << fixed << setprecision(2) << convert(dollar, rate.euro) << '\n' <<
        setw(9) << "   GBP "       << "|"  << "    "  << setw(6) << rate.gbp   << " |"  << setw(5) << "\t " << "£ "<<  fixed << setprecision(2)  << convert(dollar, rate.gbp)  << '\n' <<
        setw(9) << "   Peso"       << "|"  << "    "  << setw(6) << rate.peso  << " |"  << setw(5) << "\t " << "$ "<<  fixed << setprecision(2)  << convert(dollar, rate.peso) << '\n' <<
        setw(9) << "   CAD "       << "|"  << "    "  << setw(6) << rate.cad   << " |"  << setw(5) << "\t " << "$ "<<  fixed << setprecision(2)  << convert(dollar, rate.cad)  << '\n' <<
        setw(9) << "   AUD "       << "|"  << "    "  << setw(6) << rate.aud   << " |"  << setw(5) << "\t " << "$ "<<  fixed << setprecision(2)  << convert(dollar, rate.aud)  << '\n' <<
        setw(9) << "   JPY "       << "|"  << "    "  << setw(6) << rate.jpy   << " |"  << setw(5) << "\t " << "¥ "<<  fixed << setprecision(2)  << convert(dollar, rate.jpy)  << '\n' <<
        setw(9) << "   INR "       << "|"  << "    "  << setw(6) << rate.inr   << " |"  << setw(5) << "\t " << "₹ "<<  fixed << setprecision(2)  << convert(dollar, rate.inr)  << '\n' <<
        setw(9) << "   SGD "       << "|"  << "    "  << setw(6) << rate.sgd   << " |"  << setw(5) << "\t " << "$ "<<  fixed << setprecision(2)  << convert(dollar, rate.sgd)  << '\n' <<
	    setw(9) << "   CHF "       << "|"  << "    "  << setw(6) << rate.chf   << " |"  << setw(5) << "\t " << "₣ "<<  fixed << setprecision(2)  << convert(dollar, rate.chf)  << '\n' <<
	    setw(9) << "   CNY "       << "|"  << "    "  << setw(6) << rate.cny   << " |"  << setw(5) << "\t " << "¥ "<<  fixed << setprecision(2)  << convert(dollar, rate.cny)  << '\n';
    cout << "----------------------------------------------------" << endl; 
    return 0;


    /*TODO: 
            make user able to convert btw other currency's i.e AUD to CAD
            other minor changes in code efficiently

    */

}