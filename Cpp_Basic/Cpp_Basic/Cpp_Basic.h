void OvenTime();
void Quadrant(); 
void LeapYear();
void SizeComparison();
void InputOutput();
void Variable();
void VariableTypeNumber();
void VariableTypeCharacter();
void VariableTypeBoll();
void OperationArithmetic(int Arith1, int Arith2);
void OperationIncrementDecrement();
void OperationComparison();
void OperationLogical();
void OperationBit();
void OperationThree();
void StatementIf();
void StatementSwitch();
void StatementNestedIf();
void StatementFor();
void StatementWhile();

int GuGuDan(int Dan);
void VarScope(int Number);

void MultipleCalculate();
void Receipt();
void Star();

void DefineArray();
void CountNumber();
void LessNumber();
void MissingNumber();
void BubbleSort();
void String();
void Structure();
void IndexChar();
void AlphaNumber();
void Enum();
void TwoDimension();
void PointerDefine();
void DynamicVariable();
void BallInsert();
void BallSwap();

void ArrayClass();
void StringClass();
void VectorClass();

int SumNumber(int a, int b);
float SumNumber(float a, float b);

template <typename T> // T가 int도 되고 float도 되는 것. 변수처럼 동작한다. 'T'는 다른 것으로 바꿔도 됨
T SumType(T a, T b) {
	return (a + b);
} // 템플릿 부분 전체가 선언부분에 기능까지 들어가야 한다. 

void DiceGame(int a, int b, int c, int d);