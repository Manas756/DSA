class Solution {
public:
    bool checkOverlap(int radius, int xCenter, int yCenter, int x1, int y1, int x2, int y2) {
        int xclose=max(x1,min(x2,xCenter));
        int yclose=max(y1,min(y2,yCenter));
        if(((xCenter-xclose)*(xCenter-xclose))+((yCenter-yclose)*(yCenter-yclose))<=(radius*radius)) return true;
        else return false;
        
    }
};