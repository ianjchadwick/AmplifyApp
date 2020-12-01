package test_package;

public class R {

	  //instance variables
	  double value;


	// Default constructor sets value to 0
	R()
	{
	  value = 0;
	}

	// Construtor
	R(double val)
	{
	  value = val;
	}

	double getVal()
	{
	    return this.value;
	}


	void assignVal(double newVal)
	{
	    this.value = newVal;
	}

	}
