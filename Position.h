
class Position
{
	private:
		double xp;
		double yp;
	public:
		Position(void);
		Position(double x, double y);
		double xshow (void) const;
		double yshow (void) const;
		void setx(double num);
		void sety(double num);

};

Position::Position(void)
{
	xp = 10;
	yp = 10;
}

Position::Position(double x, double y)
{
	xp = x;
	yp = y;
}

double Position::xshow(void) const
{
	return xp;
}

double Position::yshow(void) const
{
	return yp;
}

void Position::setx(double num)
{
	xp = num;
}

void Position::sety(double num)
{
	yp = num;
}


