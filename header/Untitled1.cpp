#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main (){


function isWinner(codeList, shoppingCart):
    if codeList is empty:
        return 1
    
    i = 0
    j = 0
    
    while i < size(codeList) and j < size(shoppingCart):
        group = codeList[i]
        
        while j < size(shoppingCart) and (group[0] != "anything" and group[0] != shoppingCart[j]):
            j++
        
        k = j + 1
        
        for l = 1 to size(group) - 1 and k < size(shoppingCart):
            if group[l] != "anything" and group[l] != shoppingCart[k]:
                break
            k++
        
        if k - j < size(group) - (group[0] == "anything") or group[0] == "anything":
            j++
        else:
            i++
            j = k
    
    if i == size(codeList):
        return 1
    else:
        return 0

}

