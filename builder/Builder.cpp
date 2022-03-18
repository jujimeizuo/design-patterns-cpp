#include <iostream>
#include <string>
#include <vector>
class Product1 {
public :
	std::vector<std::string> parts;
	void ListParts() const {
		std::cout << "Product parts: ";
		for(size_t i = 0;i < parts.size(); i++) {
			std::cout << parts[i] << " \n"[i == parts.size() - 1];
		}
		std::cout << "\n";
	}
};

class Builder {
public :
	virtual ~Builder() {}
	virtual void ProducePartA() const = 0;
	virtual void ProducePartB() const = 0;
	virtual void ProducePartC() const = 0;
};

class ConcreteBuilder1 : public Builder {
private :
	Product1* product;

public :
	ConcreteBuilder1() { this -> Reset(); }
	~ConcreteBuilder1() { delete product; }
	void Reset() { this -> product = new Product1(); }

	void ProducePartA() const override {
		this -> product -> parts.push_back("PartA1");
	}
	void ProducePartB() const override {
		this -> product -> parts.push_back("PartB1");
	}
	void ProducePartC() const override {
		this -> product -> parts.push_back("PartC1");
	}

	Product1* GetProduct() {
		Product1* result = this -> product;
		this -> Reset();
		return result;
	}
};

class Director {
private :
	Builder* builder;

public :
	void set_builder(Builder* builder) {
		this -> builder = builder;
	}

	void BuildMinimalViableProduct() {
		this -> builder -> ProducePartA();
	}

	void BuildFullFeaturedProduct() {
		this -> builder -> ProducePartA();
		this -> builder -> ProducePartB();
		this -> builder -> ProducePartC();
	}
};

void ClientCode(Director& director) {
	ConcreteBuilder1* builder = new ConcreteBuilder1();
	director.set_builder(builder);
	std::cout << "Standard basic product: \n";
	director.BuildMinimalViableProduct();

	Product1* p = builder -> GetProduct();
	p -> ListParts();
	delete p;

	std::cout << "Standard full featured product: \n";
	director.BuildFullFeaturedProduct();

	p = builder -> GetProduct();
	p -> ListParts();
	delete p;

	std::cout << "Custom product: \n";
	builder -> ProducePartA();
	builder -> ProducePartB();
	p = builder -> GetProduct();
	p -> ListParts();
	delete p;

	delete builder;
}

int main() {
	std::ios::sync_with_stdio(false);
	std::cin.tie(nullptr);

	Director* director = new Director();
	ClientCode(*director);
	delete director;

	return 0;
}