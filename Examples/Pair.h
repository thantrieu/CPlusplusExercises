#pragma once
template<class K, class V> class Pair {
	K key;
	V value;
public:
	Pair() {}
	Pair(K key, V value) : key(key), value(value) { }
	K getKey() const { return key;  }
	V getValue() const { return value; }
	void setValue(V value) { this->value = value; }
	void setKey(K key) { this->key = key; }
};