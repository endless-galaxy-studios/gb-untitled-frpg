BIN = ./bin
OBJ = ./obj
SRC = ./src
GFX = ./assets/graphics/sprites_c

build:
	mkdir -p $(BIN)
	mkdir -p $(OBJ)
	gbdk-n-compile.sh $(SRC)/structures/gameObject.h -o $(OBJ)/gameObject.rel
	gbdk-n-compile.sh $(GFX)/playerSprite.c -o $(OBJ)/playerSprite.rel
	gbdk-n-compile.sh $(GFX)/PokeCenter.h -o $(OBJ)/PokeCenter.rel
	gbdk-n-compile.sh $(GFX)/PokeMart.h -o $(OBJ)/PokeMart.rel
	gbdk-n-compile.sh $(SRC)/controller.c -o $(OBJ)/controller.rel
	gbdk-n-compile.sh $(SRC)/graphicSetup.c -o $(OBJ)/graphicSetup.rel
	gbdk-n-compile.sh $(SRC)/main.c -o $(OBJ)/main.rel
	gbdk-n-link.sh $(OBJ)/main.rel -o $(OBJ)/main.ihx
	gbdk-n-make-rom.sh $(OBJ)/main.ihx -o $(BIN)/main.gb
	rm -rf $(OBJ)
	
clean:
	rm -rf $(OBJ)
	rm -rf $(BIN)