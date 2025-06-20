class Vetor
{
public: 
	enum Coord { RET, POL };

private:
	double x, y;
	double mag;
	double ang;
	Coord rep;
	
	void SetMag();
	void SetAng();
	void SetX();
	void SetY();

public:
	Vetor();
	Vetor(const double n1, const double n2, const Coord tipo = RET);

	double Magnitude() { return mag;  }
	double Angulo() { return ang; }
	void SetCoord(Coord modo) { rep = modo; }

	Vetor Soma(const Vetor& v) const;
	Vetor Subtrair(const Vetor& v) const;
	Vetor Inverter() const;
	Vetor Multiplicar(double n) const;
	void Exibir() const;
};
