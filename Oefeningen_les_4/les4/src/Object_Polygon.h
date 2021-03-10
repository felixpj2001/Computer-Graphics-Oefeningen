#pragma once

#include <vector>

class Object_Polygon
{
public:
    Object_Polygon(int id)  : m_id(id) {}
    void setId(int id) { m_id = id; }
    int getId() { return m_id; }

    std::vector<int> m_vertices;
private:
    int m_id;

};