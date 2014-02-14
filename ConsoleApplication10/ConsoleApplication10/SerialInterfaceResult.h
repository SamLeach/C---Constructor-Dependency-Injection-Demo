#pragma once

class SerialInterfaceResult
{
	public:
		SerialInterfaceResult(void);
		~SerialInterfaceResult(void);

		int getResult(void);
		void setResult(int result);

	private:
		int result;
};


