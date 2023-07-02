# Nota: no usar espacios, solo tabuladores en las ordenes.

MAIN = main
MODULES	= factory contmen sesion user conversacion mensaje dtConversacion dtMensaje dtConvCont dtConvGrupo dtMenCont dtMenFoto dtMenMultimedia dtMenText dtMenVideo convContacto convGrupo menContacto menFoto menMultimedia menTexto menVideo

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
all:  $(ODIR)/fecha.o $(ODIR)/mensaje.o $(ODIR)/menContacto.o $(ODIR)/menMultimedia.o $(ODIR)/menFoto.o $(ODIR)/menVideo.o $(ODIR)/menTexto.o $(ODIR)/dtMensaje.o $(ODIR)/dtMenMultimedia.o $(ODIR)/dtMenFoto.o $(ODIR)/dtMenVideo.o $(ODIR)/dtMenCont.o $(ODIR)/dtMenText.o $(ODIR)/dtConversacion.o $(ODIR)/dtConvGrupo.o $(ODIR)/dtConvCont.o $(ODIR)/conversacion.o $(ODIR)/convContacto.o $(ODIR)/convGrupo.o $(ODIR)/user.o $(ODIR)/sesion.o $(ODIR)/contmen.o $(ODIR)/factory.o $(MAIN).o
	$(CC) $(CCFLAGS) -o $(MAIN) $^
	@echo "Compilado: ok"

# ejecutar lo compilado
run: $(MAIN).o
	./$(MAIN)

# compilo el main
$(ODIR)/$(MAIN).o:  $(ODIR)/fecha.cpp $(ODIR)/mensaje.cpp $(ODIR)/menContacto.cpp $(ODIR)/menMultimedia.cpp $(ODIR)/menFoto.cpp $(ODIR)/menVideo.cpp $(ODIR)/menTexto.cpp $(ODIR)/dtMensaje.cpp $(ODIR)/dtMenMultimedia.cpp $(ODIR)/dtMenFoto.cpp $(ODIR)/dtMenVideo.cpp $(ODIR)/dtMenCont.cpp $(ODIR)/dtMenText.cpp $(ODIR)/dtConversacion.cpp $(ODIR)/dtConvGrupo.cpp $(ODIR)/dtConvCont.cpp $(ODIR)/conversacion.cpp $(ODIR)/convContacto.cpp $(ODIR)/convGrupo.cpp $(ODIR)/user.cpp $(ODIR)/sesion.cpp $(ODIR)/contmen.cpp $(ODIR)/factory.cpp $(MAIN).cpp
	$(CC) $(CCFLAGS) -c $(MAIN).cpp $(ODIR)/fecha.o $(ODIR)/mensaje.o $(ODIR)/menContacto.o $(ODIR)/menMultimedia.o $(ODIR)/menFoto.o $(ODIR)/menVideo.o $(ODIR)/menTexto.o $(ODIR)/dtMensaje.o $(ODIR)/dtMenMultimedia.o $(ODIR)/dtMenFoto.o $(ODIR)/dtMenVideo.o $(ODIR)/dtMenCont.o $(ODIR)/dtMenText.o $(ODIR)/dtConversacion.o $(ODIR)/dtConvGrupo.o $(ODIR)/dtConvCont.o $(ODIR)/conversacion.o $(ODIR)/convContacto.o $(ODIR)/convGrupo.o $(ODIR)/user.o $(ODIR)/sesion.o $(ODIR)/contmen.o $(ODIR)/factory.o -o $@

# compilo los modulos

$(ODIR)/fecha.o: $(HDIR)/fecha.h $(CPPDIR)/fecha.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/fecha.cpp -o $@

$(ODIR)/mensaje.o: $(HDIR)/mensaje.h $(CPPDIR)/mensaje.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/mensaje.cpp -o $@

$(ODIR)/menContacto.o: $(HDIR)/menContacto.h $(CPPDIR)/menContacto.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/menContacto.cpp -o $@

$(ODIR)/menMultimedia.o: $(HDIR)/menMultimedia.h $(CPPDIR)/menMultimedia.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/menMultimedia.cpp -o $@

$(ODIR)/menFoto.o: $(HDIR)/menFoto.h $(CPPDIR)/menFoto.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/menFoto.cpp -o $@

$(ODIR)/menVideo.o: $(HDIR)/menVideo.h $(CPPDIR)/menVideo.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/menVideo.cpp -o $@

$(ODIR)/menTexto.o: $(HDIR)/menTexto.h $(CPPDIR)/menTexto.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/menTexto.cpp -o $@

$(ODIR)/dtMensaje.o: $(HDIR)/dtMensaje.h $(CPPDIR)/dtMensaje.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/dtMensaje.cpp -o $@

$(ODIR)/dtMenMultimedia.o: $(HDIR)/dtMenMultimedia.h $(CPPDIR)/dtMenMultimedia.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/dtMenMultimedia.cpp -o $@

$(ODIR)/dtMenFoto.o: $(HDIR)/dtMenFoto.h $(CPPDIR)/dtMenFoto.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/dtMenFoto.cpp -o $@

$(ODIR)/dtMenVideo.o: $(HDIR)/dtMenVideo.h $(CPPDIR)/dtMenVideo.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/dtMenVideo.cpp -o $@

$(ODIR)/dtMenCont.o: $(HDIR)/dtMenCont.h $(CPPDIR)/dtMenCont.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/dtMenCont.cpp -o $@

$(ODIR)/dtMenText.o: $(HDIR)/dtMenText.h $(CPPDIR)/dtMenText.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/dtMenText.cpp -o $@

$(ODIR)/dtConversacion.o: $(HDIR)/dtConversacion.h $(CPPDIR)/dtConversacion.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/dtConversacion.cpp -o $@

$(ODIR)/dtConvGrupo.o: $(HDIR)/dtConvGrupo.h $(CPPDIR)/dtConvGrupo.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/dtConvGrupo.cpp -o $@

$(ODIR)/dtConvCont.o: $(HDIR)/dtConvCont.h $(CPPDIR)/dtConvCont.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/dtConvCont.cpp -o $@

$(ODIR)/conversacion.o: $(HDIR)/conversacion.h $(CPPDIR)/conversacion.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/conversacion.cpp -o $@

$(ODIR)/convContacto.o: $(HDIR)/convContacto.h $(CPPDIR)/convContacto.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/convContacto.cpp -o $@

$(ODIR)/convGrupo.o: $(HDIR)/convGrupo.h $(CPPDIR)/convGrupo.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/convGrupo.cpp -o $@

$(ODIR)/user.o: $(HDIR)/user.h $(CPPDIR)/user.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/user.cpp -o $@

$(ODIR)/sesion.o: $(HDIR)/sesion.h $(CPPDIR)/sesion.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/sesion.cpp -o $@

$(ODIR)/contmen.o: $(HDIR)/contmen.h $(CPPDIR)/contmen.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/contmen.cpp -o $@

$(ODIR)/factory.o: $(HDIR)/factory.h $(CPPDIR)/factory.cpp
	$(CC) $(CCFLAGS) -c $(CPPDIR)/factory.cpp -o $@							
# elimino lo generado
clean:
	rm -f main $(ODIR)/*.o *.o
	@echo "Borrado: ok"

# todo: ejecutable

# fecha.o: fecha.h fecha.cpp
# 	g++ -c fecha.cpp

# mensaje.o: mensaje.h mensaje.cpp
# 	g++ -c mensaje.cpp

# menContacto.o: menContacto.h menContacto.cpp
# 	g++ -c menContacto.cpp
		
# menMultimedia.o: menMultimedia.h menMultimedia.cpp
# 	g++ -c menMultimedia.cpp
	
# menFoto.o: menFoto.h menFoto.cpp
# 	g++ -c menFoto.cpp

# menVideo.o: menVideo.h menVideo.cpp
# 	g++ -c menVideo.cpp
	
# menTexto.o: menTexto.h menTexto.cpp
# 	g++ -c MenTexto.cpp

# dtMensaje.o: dtMensaje.h dtMensaje.cpp
# 	g++ -c DtModulo2.cpp
	
# dtMenMultimedia.o: dtMenMultimedia.h dtMenMultimedia.cpp
# 	g++ -c DtModulo2.cpp

# dtMenFoto.o: dtMenFoto.h dtMenFoto.cpp
# 	g++ -c dtMenFoto.cpp

# dtMenVideo.o: dtMenVideo.h dtMenVideo.cpp
# 	g++ -c dtMenVideo.cpp

# dtMenText.o: dtMenText.h dtMenText.cpp
# 	g++ -c DtModulo2.cpp

# dtMenCont.o: dtMenCont.h dtMenCont.cpp
# 	g++ -c dtMenCont.cpp

# dtConversacion.o: dtConversacion.h dtConversacion.cpp
# 	g++ -c dtConversacion.cpp

# dtConvCont.o: dtConvCont.h dtConvCont.cpp
# 	g++ -c dtConvCont.cpp

# dtConvGrupo.o: dtConvGrupo.h dtConvGrupo.cpp
# 	g++ -c dtConvGrupo.cpp

# conversacion.o: conversacion.h conversacion.cpp
# 	g++ -c conversacion.cpp

# convContacto.o: convContacto.h convContacto.cpp
# 	g++ -c convContacto.cpp

# convGrupo.o: convGrupo.h convGrupo.cpp
# 	g++ -c convGrupo.cpp

# user.o: user.h user.cpp
# 	g++ -c user.cpp

# sesion.o: sesion.h sesion.cpp
# 	g++ -c sesion.cpp

# contmen.o: contmen.h contmen.cpp
# 	g++ -c contmen.cpp

# factory.o: factory.h factory.cpp
# 	g++ -c factory.cpp

# main.o: main.cpp
# 	g++ -c main.cpp

# ejecutable: fecha.o mensaje.o menMultimedia.o menFoto.o menVideo.o menTexto.o menContacto.o dtMensaje.o dtMenMultimedia.o dtMenFoto.o dtMenVideo.o dtMenText.o dtMenCont.o dtConversacion.o dtConvCont.o dtConvGrupo.o conversacion.o convContacto.o convGrupo.o user.o sesion.o contmen.o factory.o main.o 
# 	g++ fecha.o mensaje.o menMultimedia.o menFoto.o menVideo.o menTexto.o menContacto.o dtMensaje.o dtMenMultimedia.o dtMenFoto.o dtMenVideo.o dtMenText.o dtMenCont.o dtConversacion.o dtConvCont.o dtConvGrupo.o conversacion.o convContacto.o convGrupo.o user.o sesion.o contmen.o factory.o main.o -o ejecutable

# clean:
# 	rm -rf *.o ejecutable
# 	clear
# exec = exec #Nombre del archivo ejecutable

# obj = main.o \
# 	  \
# 	  include/fecha.o \
# 	  include/mensaje.o \
# 	  include/menMultimedia.o \
# 	  include/menFoto.o \
# 	  include/menVideo.o \
# 	  include/menContacto.o \
# 	  include/menTexto.o \
# 	  include/dtMensaje.o \
# 	  include/dtMenMultimedia.o \
# 	  include/dtMenFoto.o \
# 	  include/dtMenVideo.o \
# 	  include/dtMenText.o \
# 	  include/dtMenCont.o \
# 	  include/dtConversacion.o \
# 	  include/dtConvCont.o \
# 	  include/dtConvGrupo.o \
# 	  include/conversacion.o \
# 	  include/convContacto.o \
# 	  include/convGrupo.o \
# 	  include/user.o \
# 	  include/sesion.o \
# 	  include/factory.o \

# all: $(obj)
# 	@ mkdir -p ./obj
# 	@ mv $(obj) ./obj
# 	g++ obj/*.o -o $(exec)
# 	@ echo "\nEjecutar con: ./$(exec)"

# $(obj): %.o: %.cpp
# 	g++ -c $< -o $@

# clean:
# 	@ rm -f obj/*.o $(exec)
# 	@ echo "archivos de compilacion eliminados."