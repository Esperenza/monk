


class ann
{
	private:
		vector<vector<double>> nodes;
		vector<vector<double>> weights;
		vector<vector<double>> deltavalues;
	public:
		ann();
		~ann();
		
		vector<double> get_Output();
		void set_Input(vector<double> i);

		void create(vector<int> n);
		void forward(); // forward propagation through the network
		
		void cost(vector<double> c); // calculates the cost (error) of the network for a given output
		double get_Error(vector<double> c); // returns the error of the network
		
		void learn(vector<vector<double>> dataset, double inertia, double learningrate); // the neural network learns the dataset(first input then output)
		void learn(vector<double> data, double inertia, double learningrate); // first input then output 	
}
