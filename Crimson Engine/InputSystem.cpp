#include "InputSystem.h"
#include <iostream>
#include <SDL2/SDL.h>
#include "vector"
#include "KeyStruct.h"

//registered key states.
Key one('\1'), two('\2'), three('\3'), four('\4'), five('\5'), six('\6'), seven('\7'), eight('\8'), nine('\9'), zero('\0'), minus('-'), plus('+')	,
	q('q'), w('w'), e('e'), r('r'), t('t'), y('y'), u('u'), i('i'), o('o'), p('p'), LeftBraket('['), RightBraket(']'),
	a('a'), s('s'), d('d'), f('f'), g('g'), h('h'), j('j'), k('k'), l('l'), colon(':'), quote('"'),
	z('z'), x('x'), c('c'), v('v'), b('b'), n('n'), m('m'), comma(','), period('.'), slash('/'),
	tab('T'), caps('C'), Lshift('S'), Lcontrol('L'), Lalt('A'),
	escape('E');

std::vector<Key*> ActiveKeys;

void InputSystem::Initialize()
{
	std::cout << "\t\tInput System | Initialize() | 'Initializing Input system' " << std::endl;
	// Initialize the input system
}
void InputSystem::Update()
{
	std::cout << "\n\t\tInput System | Update() | 'Updating Input system' " << std::endl;
	ProcessInput();
	// Update the input system
}
void InputSystem::ProcessInput() {
	ActiveKeys.clear();
	std::cout << "\t\tInput System | ProcessInput() | 'Processing Input' " << std::endl;
	// Process input events
	SDL_Event event;
	while (SDL_PollEvent(&event)) {
		if (event.type == SDL_QUIT) {
			// Handle quit event
		}
		else if (event.type == SDL_KEYDOWN) {
			InputSystem::KeyPressed();
		}
		else if (event.type == SDL_KEYUP) {
			InputSystem::KeyReleased();
		}
	}
}
std::vector<Key*> InputSystem::ReturnActiveKeys() {

	std::cout << "\t\tInput System | ReturnActiveKeys() | 'Returning Active Keys' " << std::endl;
	return ActiveKeys;
}
void InputSystem::KeyReleased() {
	std::cout << "\t\tInput System | KeyReleased() | Key: " << SDL_KEYUP << " ' was released' " << std::endl;
	switch (SDL_KEYUP) {
	case SDLK_1:
		one.isPressed = false;
		break;
	case SDLK_2:
		two.isPressed = false;
		break;
	case SDLK_3:
		three.isPressed = false;
		break;
	case SDLK_4:
		four.isPressed = false;
		break;
	case SDLK_5:
		five.isPressed = false;
		break;
	case SDLK_6:
		six.isPressed = false;
		break;
	case SDLK_7:
		seven.isPressed = false;		
		break;
	case SDLK_8:
		eight.isPressed = false;
		break;
	case SDLK_9:
		nine.isPressed = false;
		break;
	case SDLK_0:
		zero.isPressed = false;
		break;
	case SDLK_MINUS:
		minus.isPressed = false;	
		break;
	case SDLK_EQUALS:
		plus.isPressed = false;
		break;
	case SDLK_q:
		q.isPressed = false;
		break;
	case SDLK_w:
		w.isPressed = false;
		break;
	case SDLK_e:
		e.isPressed = false;
		break;
	case SDLK_f:
		f.isPressed = false;
		break;
	case SDLK_g:
		g.isPressed = false;
		break;
	case SDLK_h:
		h.isPressed = false;
		break;
	case SDLK_i:
		i.isPressed = false;
		break;
	case SDLK_j:
		j.isPressed = false;
		break;
	case SDLK_k:
		k.isPressed = false;
		break;
	case SDLK_l:
		l.isPressed = false;
		break;
	case SDLK_SEMICOLON:
		colon.isPressed = false;
		break;
	case SDLK_QUOTE:
		quote.isPressed = false;
		break;
	case SDLK_z:
		z.isPressed = false;
		break;
	case SDLK_x:
		x.isPressed = false;
		break;
	case SDLK_c:
		c.isPressed = false;
		break;
	case SDLK_v:
		v.isPressed = false;
		break;
	case SDLK_b:
		b.isPressed = false;
		break;
	case SDLK_n:
		n.isPressed = false;
		break;
	case SDLK_m:
		m.isPressed = false;
		break;
	case SDLK_COMMA:
		comma.isPressed = false;
		break;
	case SDLK_PERIOD:
		period.isPressed = false;
		break;
	case SDLK_SLASH:
		slash.isPressed = false;
		break;
	case SDLK_TAB:
		tab.isPressed = false;
		break;
	case SDLK_CAPSLOCK:
		caps.isPressed = false;
		break;
	case SDLK_LSHIFT:
		Lshift.isPressed = false;
		break;
	case SDLK_LCTRL:
		Lcontrol.isPressed = false;
		break;
	case SDLK_LALT:
		Lalt.isPressed = false;
		break;

	}
}
void InputSystem::KeyPressed() {
	std::cout << "\t\tInput System | KeyPressed() | Key: " << SDL_KEYDOWN << " ' was Pressed' " << std::endl;
	switch (SDL_KEYDOWN) {
	case SDLK_1:
		one.isPressed = true;
		ActiveKeys.push_back(&one);
		break;
	case SDLK_2:
		two.isPressed = true;
		ActiveKeys.push_back(&two);
		break;
	case SDLK_3:
		three.isPressed = true;
		ActiveKeys.push_back(&three);
		break;
	case SDLK_4:
		four.isPressed = true;
		ActiveKeys.push_back(&four);
		break;
	case SDLK_5:
		five.isPressed = true;
		ActiveKeys.push_back(&five);
		break;
	case SDLK_6:
		six.isPressed = true;
		ActiveKeys.push_back(&six);
		break;
	case SDLK_7:
		seven.isPressed = true;
		ActiveKeys.push_back(&seven);
		break;
	case SDLK_8:
		eight.isPressed = true;
		ActiveKeys.push_back(&eight);
		break;
	case SDLK_9:
		nine.isPressed = true;
		ActiveKeys.push_back(&nine);
		break;
	case SDLK_0:
		zero.isPressed = true;
		ActiveKeys.push_back(&zero);
		break;
	case SDLK_MINUS:
		minus.isPressed = true;
		ActiveKeys.push_back(&minus);
		break;
	case SDLK_EQUALS:
		plus.isPressed = true;
		ActiveKeys.push_back(&plus);
		break;
	case SDLK_q:
		q.isPressed = true;
		ActiveKeys.push_back(&q);
		break;
	case SDLK_w:
		w.isPressed = true;
		ActiveKeys.push_back(&w);
		break;
	case SDLK_e:
		e.isPressed = true;
		ActiveKeys.push_back(&e);
		break;
	case SDLK_f:
		f.isPressed = true;
		ActiveKeys.push_back(&f);
		break;
	case SDLK_g:
		g.isPressed = true;
		ActiveKeys.push_back(&g);
		break;
	case SDLK_h:
		h.isPressed = true;
		ActiveKeys.push_back(&h);
		break;
	case SDLK_i:
		i.isPressed = true;
		ActiveKeys.push_back(&i);
		break;
	case SDLK_j:
		j.isPressed = true;
		ActiveKeys.push_back(&j);
		break;
	case SDLK_k:
		k.isPressed = true;
		ActiveKeys.push_back(&k);
		break;
	case SDLK_l:
		l.isPressed = true;
		ActiveKeys.push_back(&l);
		break;
	case SDLK_SEMICOLON:
		colon.isPressed = true;
		ActiveKeys.push_back(&colon);
		break;
	case SDLK_QUOTE:
		quote.isPressed = true;
		ActiveKeys.push_back(&quote);
		break;
	case SDLK_z:
		z.isPressed = true;
		ActiveKeys.push_back(&z);
		break;
	case SDLK_x:
		x.isPressed = true;
		ActiveKeys.push_back(&x);
		break;
	case SDLK_c:
		c.isPressed = true;
		ActiveKeys.push_back(&c);
		break;
	case SDLK_v:
		v.isPressed = true;
		ActiveKeys.push_back(&v);
		break;
	case SDLK_b:
		b.isPressed = true;
		ActiveKeys.push_back(&b);
		break;
	case SDLK_n:
		n.isPressed = true;
		ActiveKeys.push_back(&n);
		break;
	case SDLK_m:
		m.isPressed = true;
		ActiveKeys.push_back(&m);
		break;
	case SDLK_COMMA:
		comma.isPressed = true;
		ActiveKeys.push_back(&comma);
		break;
	case SDLK_PERIOD:
		period.isPressed = true;
		ActiveKeys.push_back(&period);
		break;
	case SDLK_SLASH:
		slash.isPressed = true;
		ActiveKeys.push_back(&slash);
		break;
	case SDLK_TAB:
		tab.isPressed = true;
		ActiveKeys.push_back(&tab);
		break;
	case SDLK_CAPSLOCK:
		caps.isPressed = true;
		ActiveKeys.push_back(&caps);
		break;
	case SDLK_LSHIFT:
		Lshift.isPressed = true;
		ActiveKeys.push_back(&Lshift);
		break;
	case SDLK_LCTRL:
		Lcontrol.isPressed = true;
		ActiveKeys.push_back(&Lcontrol);
		break;
	case SDLK_LALT:
		Lalt.isPressed = true;
		ActiveKeys.push_back(&Lalt);
		break;

	}
	// Handle key press event
}
