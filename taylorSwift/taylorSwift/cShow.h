#pragma once
#include "headeres.h"
#include "cCancion.h"
#include "cElemento.h"
class cShow
{
	string fecha;
	string duracion;
	bool iniciado;
	vector<cCancion> canciones;
	vector<cElemento*> elementos;

public:
	cShow(string, string, bool);
	~cShow();
	void operator-(cElemento*);
	void operator+(cElemento*);
	string to_string();
	void iniciarShow();
	void terminarShow();
	void cambiarBaterias();

};

