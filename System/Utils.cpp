#include "Utils.h"

bool confirmExit() {
    DialogResult result = MessageBox::Show("Are you sure you want to exit?", 
                                            "Exit Confirmation", 
                                            MessageBoxButtons::YesNo);

    if (result == DialogResult::Yes) 
        return true;
    else 
        return false;
}