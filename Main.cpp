#include "Orchestra.h"


void main()
{
	srand(time(NULL));
	Musical_instrument* instruments[6]{ new Guitar("Guitar", 5000), new Balalaika("Balalaika",5000), new Violin("Violin", 5000),
		new Flute("Flute", 5000), new Saxophone("Saxophone", 5000), new Trumpet("Trumpet", 3000) };

	Orchestra Big(*instruments);
	Big.Play_all();
}

