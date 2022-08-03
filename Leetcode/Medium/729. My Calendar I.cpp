class MyCalendar {
    vectorpairint,int v;
public
    MyCalendar() {}
    
    bool book(int start, int end) {
        for(auto iv) {
            if(start  i.second && endi.first) return false;
        }
        v.push_back({start,end});
        return true;
    }
};