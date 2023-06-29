# Nota: no usar espacios, solo tabuladores en las ordenes.

MAIN = main
MODULES	=  

# defino reglas
.PHONY	= all run clean

# detalles del compilador
CC = g++
CCFLAGS	= -Wall -Werror -I$(HDIR) -g -DNDEBUG

# defino variables
OBJECTS	= $(ODIR)/$(MAIN).o $(ODIR)/$(MODULES).o
HDIR	= include
CPPDIR	= src
ODIR	= obj

# compilar
all: $(ODIR)/fecha.o $(ODIR)/socio.o $(ODIR)/inscripcion.o $(ODIR)/clase.o $(ODIR)/spinning.o $(ODIR)/entrenamiento.o $(ODIR)/dtsocio.o $(ODIR)/dtclase.o $(ODIR)/dtentrenamiento.o $(ODIR)/dtspinning.o $(MAIN).o
	$(CC) $(CCFLAGS) -o $(MAIN) $^
	@echo "Compilado: ok"

# ejecutar lo compilado
run: $(MAIN).o
	./$(MAIN)

# compilo el main
$(ODIR)/$(MAIN).o: $(ODIR)/fecha.o $(ODIR)/socio.o $(ODIR)/inscripcion.o $(ODIR)/clase.o $(ODIR)/spinning.o $(ODIR)/entrenamiento.o $(ODIR)/dtsocio.o $(ODIR)/dtclase.o $(ODIR)/dtentrenamiento.o $(ODIR)/dtspinning.o $(MAIN).cpp
	$(CC) $(CCFLAGS) -c $(MAIN).cpp $(ODIR)/fecha.o $(ODIR)/socio.o $(ODIR)/inscripcion.o $(ODIR)/clase.o $(ODIR)/spinning.o $(ODIR)/entrenamiento.o $(ODIR)/dtsocio.o $(ODIR)/dtclase.o $(ODIR)/dtentrenamiento.o $(ODIR)/dtspinning.o -o $@

# compilo los modulos

$(ODIR)/fecha.o: $(HDIR)/fecha.h $(CPPDIR)/fecha.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/fecha.cpp -o $@

$(ODIR)/socio.o: $(HDIR)/socio.h $(CPPDIR)/socio.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/socio.cpp -o $@

$(ODIR)/inscripcion.o: $(HDIR)/inscripcion.h $(CPPDIR)/inscripcion.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/inscripcion.cpp -o $@

$(ODIR)/clase.o: $(HDIR)/clase.h $(CPPDIR)/clase.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/clase.cpp -o $@

$(ODIR)/spinning.o: $(HDIR)/spinning.h $(CPPDIR)/spinning.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/spinning.cpp -o $@

$(ODIR)/entrenamiento.o: $(HDIR)/entrenamiento.h $(CPPDIR)/entrenamiento.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/entrenamiento.cpp -o $@

$(ODIR)/dtsocio.o: $(HDIR)/dtsocio.h $(CPPDIR)/dtsocio.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/dtsocio.cpp -o $@

$(ODIR)/dtclase.o: $(HDIR)/dtclase.h $(CPPDIR)/dtclase.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/dtclase.cpp -o $@

$(ODIR)/dtentrenamiento.o: $(HDIR)/dtentrenamiento.h $(CPPDIR)/dtentrenamiento.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/dtentrenamiento.cpp -o $@

$(ODIR)/dtspinning.o: $(HDIR)/dtspinning.h $(CPPDIR)/dtspinning.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/dtspinning.cpp -o $@

# elimino lo generado
clean:
	rm -f principal $(ODIR)/*.o *.o
	@echo "Borrado: ok"