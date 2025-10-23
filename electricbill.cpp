/*




*/

float calculateelectricbill(int units){
	float totalbill= 0.0
	
	if(units>=100){
		total bill=units*10.0;
	}else if(units>=200){
		totalbill=100*10.0+((units-100)*15.0);
	}else{
		totalbill=100*10.0 +100*15.0+((units-200)*20.0);
	}
	return totalbill;
}