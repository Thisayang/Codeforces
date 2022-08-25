namespace Solution{
	open Microsoft.Quantum.Primitive;
	open Microsoft.Quantum.Canon;
	operation Solve(q:Qubit,s:Int):(){
		body{
			if(s==-1){X(q);}H(q);
		}
	}
}