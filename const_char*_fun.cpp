#include <iostream>

class CharTemplate {
    const char* m_Name;
public:
    inline CharTemplate& get() {
        return *this;
    }
    inline const char* getName() {
        return m_Name;
    }
    void SetName( const char* name );
    
};

void CharTemplate::SetName( const char* name ) {
    auto& t = this->get();
    t.m_Name = name;
    t.getName();
    std::cout << t.m_Name << std::endl;
}

auto get_const_auto_char()-> const char*{
    return "Test1";
}

int main()
{
    static CharTemplate _temp;
    const char* trigger = "Trigger";
    _temp.SetName( trigger );
    std::cout << get_const_auto_char() << std::endl;
    return 0;
}
