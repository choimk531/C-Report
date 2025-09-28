#include <iostream>
#include <vector>
#include <memory>
using namespace std;

// 부모 클래스
class Character {
public:
    virtual void attack() { cout << "기본 공격" << endl; }
    virtual void defense() { cout << "방어" << endl; }
    virtual ~Character() = default;
};

// 플레이어 클래스
class Player : public Character {
public:
    void attack() override { cout << "플레이어가 검으로 휘두릅니다!" << endl; }
    void defense() override { cout << "플레이어가 공격을 방어합니다!" <<endl; }
};

// 몬스터 클래스
class Monster : public Character {
public:
    void attack() override { cout << "몬스터가 발톱으로 공격합니다!" << endl; }
};

// 보스 몬스터 클래스
class Boss : public Character {
public:
    void attack() override { cout << "보스가 강력한 공격을 합니다!" << endl; }
};

int main() {
    vector<unique_ptr<Character>> characters;

    characters.push_back(make_unique<Player>());
    characters.push_back(make_unique<Monster>());
    characters.push_back(make_unique<Boss>());

    // 다형성 적용
    for (auto& c : characters) {
        c->attack();
        c->defense();
    }
    return 0;
}
