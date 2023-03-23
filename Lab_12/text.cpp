#include "text.h"
// �Լ� �����ε�: int sum(int x, int y),
// double sum(double x, double y)
// float sum(float x, float y, float z)
// �Լ� �������̵� (����� Ư���� ��� ���)
//void Text::append(string _extra)
//void Fancy::append(string _extra)
class Text {
private:
	string text;
public:
	Text(string _t) : text(_t) {}
	virtual string get() const { return text; } //get()�Լ� virtual �� ����
	virtual void append(string _extra) { text += _extra; }
};
class FancyText : public Text {
private:
	// string text;b������ �ȵ�, Base Class���� private
	string left_brac;
	string right_brac;
	string connector;
public:
	// initialization list�� �����ڸ� ȣ���� �� �ְ� ���ش�.
	FancyText(string _t, string _lb, string _rb, string _con) :
		Text::Text(_t), left_brac(_lb), right_brac(_rb), connector(_con) {}
	//override Ű���� ����� get()�Լ� ����, main�Լ� �����Ͽ� ���ȭ��ó�� �ǵ��� ����
	string get() const override {
		return left_brac + Text::get() + right_brac;
	}
	//override Ű���� ����� append()�Լ� ����
	void append(string _extra) override {
		Text::append(connector + _extra);
	}
};
class FixedText : public Text {
public:
	FixedText() : Text::Text("FIXED") {}
	//override Ű���� ����� append()�Լ� ����, main�Լ� �����Ͽ� ���ȭ��ó�� �ǵ��� ����
	void append(const string _extra) override {}
};
int main() {
	Text t1("Plain");
	t1.append("A");
	cout << t1.get() << endl;
	FancyText t2("Fancy", "<<", ">>", "***");
	t2.append("A");
	cout << t2.get() << endl;
	FixedText t3;
	t3.append("A");
	cout << t3.get() << endl;
	t1 = t2; // Base <- Derived ����
	//t2 = t1; // Derived <- Base �Ұ���
	return 0;
}
