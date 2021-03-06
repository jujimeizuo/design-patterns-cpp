# 概述
**生成器模式**是一种创建型设计模式， 使你能够分步骤创建复杂对象。该模式允许你使用相同的创建代码生成不同类型和形式的对象。

# 应用场景
1. 使用生成器模式可避免“重叠构造函数”的出现
2. 当你希望使用代码创建不同形式的产品（例如石头或木头房屋）时，可使用生成器模式
3. 使用生成器构造组合树或其他复杂对象

# 优缺点

## 优点
- 你可以分步创建对象，暂缓创建步骤或递归运行创建步骤
- 生成不同形式的产品时，你可以复用相同的制造代码
- 单一职责原则。你可以将复杂构造代码从产品的业务逻辑中分离出来

## 缺点
- 由于该模式需要新增多个类，因此代码整体复杂程度会有所增加