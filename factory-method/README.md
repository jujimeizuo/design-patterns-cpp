# 概述
**工厂方法模式**是一种创建型设计模式，其在父类中提供一个创建对象的方法，允许子类决定实例化对象的类型。

# 应用场景
1. 编写代码的过程中，如果无法预知对象确切类别以及依赖关系时，可使用工厂方法

2. 如果你希望用户能够扩展你软件库或框架的内部组件，可使用工厂方法

3. 如果你希望复用现有对象来节省系统资源，而不是每次都重新创建对象，可使用工厂方法

# 优缺点
## 优点
- 可以避免创建者和具体产品之间的紧密耦合
- 单一职责原则。你可以将产品创建代码放在程序的单一位置，从而使得代码更容易维护
- 开闭原则。无需更改现有客户端代码，你就可以在程序中引入新的产品类型
## 缺点
- 应用工厂方法模式需要引入许多新的子类，代码可能会变得复杂。最好的情况时将该模式引入创建者类的现有层次结构中