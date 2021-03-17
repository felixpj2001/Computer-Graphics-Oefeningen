#pragma once

#include <vector>

class Object_Object
{
public:
    Object_Object(int id)  : m_id(id) {}
    void setId(int id) { m_id = id; }
    int getId() { return m_id; }
    std::vector<int> m_polygons;

private:
    int m_id;
};