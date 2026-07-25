class Solution {
public:
    bool isPathCrossing(string path) {
        map<pair<int,int>,bool>visited;

        int x =0;
        int y =0;
        visited[{x,y}] = true;
        for(auto it: path){
            if(it == 'N') x++;
            if(it == 'E') y++;
            if(it == 'S') x--;
            if(it == 'W') y--;

            if(visited[{x,y}]) return true;
            visited[{x,y}] = true;
        }
        return false;
    }
};