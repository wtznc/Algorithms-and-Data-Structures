#include <cstdlib>
#include <climits>
#include "SLList.hpp"

using namespace std;

SLList * const SLList::NIL = new SLList(0, NULL);
SLList::SLList(int i, SLList *n) {
	_first = i;
	_rest = n;
}

int SLList::first() {
  return this -> _first;
}

SLList *SLList::rest() {
  return this -> _rest;
}

void SLList::setFirst(int i) {
	this -> _first = i;
}

void SLList::setRest(SLList *n) {
	this -> _rest = n;
}

int SLList::nth(unsigned int i) {
	SLList* current = this;
	int count = 0;
	while(current -> _rest != NULL){
		if(count == i){
			return current -> _first;
		}
		count++;
		current = current -> _rest;
	}
}

SLList *SLList::nthRest(unsigned int i) {
	SLList* current = this;
	int count = 0;
	while(1/*current -> _rest != NULL*/){
		if(count == i){
			return current;
		}
		count++;
		current = current -> _rest;
	}
}

unsigned int SLList::length() {
	unsigned int counter = 0;
	while(this -> _rest != NULL) {
		counter += 1;
	}

  return counter;
}

SLList *SLList::remove(int i) {
  return NULL;
}

SLList *SLList::reverse() {
  return NULL;
}