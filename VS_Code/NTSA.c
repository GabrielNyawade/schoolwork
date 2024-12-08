#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define ALPHABET_LIMIT 26

struct NTSAConstructor {
    char identifier[4];
    char prefix[3];
    int code;
    char variant;
};

typedef struct NTSAConstructor NTSAConstructor;

int main()
{
    int plate_id = 0;
    int identifier_counter = 1;
    int identifier_idx = 2;
    int idx_offset = 1;
    int variant_counter = 0;
    NTSAConstructor number_plate = {"KAA", "00", 1, 'A'};
    for (int i = 0; i < 1000; i++)
    {
        // Number plates do not use the characters "I" and "O", therefore we need to omit the scenarios where the number plate has these characters.
        if (number_plate.identifier[identifier_idx - 1] != 'I' 
        && number_plate.identifier[identifier_idx - 1] != 'O' 
        && number_plate.identifier[identifier_idx] != 'I' 
        && number_plate.identifier[identifier_idx] != 'O' 
        && number_plate.variant != 'I' 
        && number_plate.variant != 'O')
        {
            plate_id++;
            printf("ID: %d\tNumber Plate: %s %s%d%c\n", plate_id, number_plate.identifier, number_plate.prefix, number_plate.code, number_plate.variant);
        }

        // The leading zeros before the incremented code need to be manipulated as the number of digits of the code increase.
        switch (number_plate.code)
        {
        case 9:
            strcpy(number_plate.prefix, "0");
            break;
        case 99:
            strcpy(number_plate.prefix, "");
            break;
        case 999:
            strcpy(number_plate.prefix, "00");
            break;
        default:
            break;
        }
        number_plate.code++;

        // We need to move to the next variant character i.e. after KAA 999A we move to KAA 001B.
        if (number_plate.code > 999)
        {
            number_plate.variant++;
            variant_counter++;
            number_plate.code = 1;
            i = 0;

            // When we reach to the end of the alphabet (Z), we restart at A (ASCII shift of -26)
            if (variant_counter == ALPHABET_LIMIT)
            {    
                number_plate.variant -= ALPHABET_LIMIT; // Here it is
                variant_counter = 0;
                number_plate.identifier[identifier_idx]++;
                identifier_counter++;

                // We also need to do this restart in the characters of the identifier.
                if (identifier_counter > ALPHABET_LIMIT)
                {
                    idx_offset++; // This offset helps us count the number of times the middle character in the identifier has been incremented.

                    // (NOTE: Here and in the check for the last character of the identifier [see above], 
                    // we use > for the if statement condition because there are numerous number plates where the identifier is the same)
                    // If the middle character has reached it's limit and surpassed it, 
                    // we know we have printed out all possible number plates (after surpassing KZZ 999Z) and we can terminate the program.
                    if (idx_offset > ALPHABET_LIMIT)
                        exit(0);
                    identifier_counter = 1;
                    number_plate.identifier[identifier_idx] -= ALPHABET_LIMIT;
                    number_plate.identifier[identifier_idx-1]++;
                }
            }
        }
    }
    return 0;
}