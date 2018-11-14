#ifndef _SETGET_h
#define _SETGET_h

template <typename T>
class Properties {
private:
	T(*setter)(T value) = nullptr;
	T(*getter)(T value) = nullptr;
	T value;
public:
	Properties(T(*_setter)(T), T(*_getter)(T)) {
		setter = _setter;
		getter = _getter;
	}

	void operator=(const T rhs) {
		if (setter)
			value = setter(rhs);
	}
	
	T val() {
		return getter(value);
	}
};

#endif
