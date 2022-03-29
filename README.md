# C++ Desgin Patterns

**设计模式**是软件设计中常见问题的典型解决方案。他们就想能根据需求进行调整的预制蓝图，可用于解决代码中反复出现的设计问题。

设计模式与方法或库的使用方式不同， 你很难直接在自己的程序中套用某个设计模式。 模式并不是一段特定的代码， 而是解决特定问题的一般性概念。 你可以根据模式来实现符合自己程序实际所需的解决方案。

人们常常会混淆模式和算法， 因为两者在概念上都是已知特定问题的典型解决方案。 但算法总是明确定义达成特定目标所需的一系列步骤， 而模式则是对解决方案的更高层次描述。 同一模式在两个不同程序中的实现代码可能会不一样。

算法更像是菜谱： 提供达成目标的明确步骤。 而模式更像是蓝图： 你可以看到最终的结果和模式的功能， 但需要自己确定实现步骤。

## 创建型模式
- [Factory Method](https://github.com/jujimeizuo/design-patterns-cpp/tree/master/abstract-factory), 其在父类中提供一个创建对象的方法， 允许子类决定实例化对象的类型
- [Abstract Factory](https://github.com/jujimeizuo/design-patterns-cpp/tree/master/factory-method), 它能创建一系列相关的
对象， 而无需指定其具体类
- [Builder](https://github.com/jujimeizuo/design-patterns-cpp/tree/master/builder), 使你能够分步骤创建复杂对象。该模式允许你使用相同的创建代码生成不同类型和形式的对象。
- [Prototype](https://github.com/jujimeizuo/design-patterns-cpp/tree/master/prototype), 使你能够复制已有对象， 而又无需使代码依赖它们所属的类。
- [Singleton](https://github.com/jujimeizuo/design-patterns-cpp/tree/master/singleton), 让你能够保证一个类只有一个实例， 并提供一个访问该实例的全局节点。

## 结构型模式
- [Adapter](https://github.com/jujimeizuo/design-patterns-cpp/tree/master/adapter), 它能使接口不兼容的对象能够相互合作。 

## 行为模式
