#include <iostream>
#include "tweenSrc\callback.h"
#include "tweenSrc\tween.h"

int main() {
	std::cout << "Hi" << std::endl;

	/* Some Tests */
	auto a = []() {
		std::cout << "it's a lambda!" << std::endl;
	};
	a();

	// This works
	float v = 0;
	tween::Tween::make().to(v, 5.f).easeoutback();

	// This stuff does not...
	/*
	tween::Tween::make().to(v, 5.f).easeoutback().onComplete([]() {
	int b = 1;
	});

	*/

	/*
	tween::Tween::make().to(v, 5.f).easeoutback().seconds(.5f).onComplete(
	[]() {
	int b = 1;
	}
	);

	*/

	/* End Tests */


	/*
	tween::Tween::make().to(cornerScaleTL, 1.f).easeoutback().seconds(.35f).onComplete(
	[this]() {
	_isActive = true;
	inputEnabled = true;
	});
	*/

	return 0;
}