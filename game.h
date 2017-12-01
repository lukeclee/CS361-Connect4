
class Game
{
public:

	const int BoardWidth;
	const int BoardHeight;

	Game(Player &p1, Player &p2);

	void getState();

	bool isRunning();

	int operator() (int x, int y) const;

	void nextTurn();


};
