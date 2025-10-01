#ifndef SYMBOL_INFO_H
#define SYMBOL_INFO_H

#include <bits/stdc++.h>
using namespace std;

class symbol_info {
private:
    string name;
    string type;
    string symbol_type;
    string data_type;
    vector<string> param_types;
    vector<string> param_names;
    int array_size;

public:
    symbol_info(string name, string type) {
        this->name = name;
        this->type = type;
        this->symbol_type = "variable";
        this->data_type = "";
        this->array_size = 0;
    }

    string getname() { return name; }
    string get_type() { return type; }
    void set_name(string name) { this->name = name; }
    void set_type(string type) { this->type = type; }
    // Write necessary functions to set and get the attributes
    string get_symbol_type() { return symbol_type; }

    void set_symbol_type(string symbol_type) {
        this->symbol_type = symbol_type;
    }

    string get_return_type() { return data_type; }
    void set_return_type(string return_type) { this->data_type = return_type; }

    string get_data_type() { return data_type; }
    void set_data_type(string data_type) { this->data_type = data_type; }

    int get_size() { return array_size; }
    void set_size(int size) { this->array_size = size; }

    int get_array_size() { return array_size; }
    void set_array_size(int size) { this->array_size = size; }

    vector<string> get_params() { return param_types; }

    vector<string> get_param_types() { return param_types; }
    vector<string> get_param_names() { return param_names; }

    void add_param(string type, string name) {
        param_types.push_back(type);
        param_names.push_back(name);
    }

    void add_param_type(string param) { param_types.push_back(param); }

    void clear_params() {
        param_types.clear();
        param_names.clear();
    }

    int get_param_count() { return param_types.size(); }

    string get_param_info() {
        string info = "";
        for (int i = 0; i < param_types.size(); i++) {
            info += param_types[i] + " " + param_names[i];
            if (i < param_types.size() - 1) info += ", ";
        }
        return info;
    }

    ~symbol_info() {
        param_types.clear();
        param_names.clear();
    }
};

#endif
