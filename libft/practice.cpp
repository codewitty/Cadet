double amount;
double capacity;

GasTank::GasTank(double sum) {
    amount = 0;
	capacity = sum;
}

void GasTank::addGas(double addSum){
	amount += addSum;
	if (amount > capacity) {
		amount = capacity;
}

double GasTank::useGas(double less) {
	amount -= less;
	if (amount < 0) {
		amount = 0;
}

bool GasTank::isEmpty() {                                                         
      if (amount < 0.1) {
		return true; 
}

bool GasTank::isFull() {                                                         
	if (amount > (capacity - 0.1)) {
		return true;
}

double GasTank::getGasLevel() {
	return amount;
}

double GasTank::fillUp() {
	int ogAmt;
	ogAmt = amount;
	amount = capacity;
	return capacity - ogAmt;
}
