/**

(a) 读取固定数量的单词，将它们按字典顺序插入到容器中。
A: 对比 vector/list/deque, 插入到中间有两种办法，

+ 先试读取用 vector，读取完用调用 sorted
+ 直接用 list, 直接排序好，输入完成后拷贝到 vector 中;


(b) 读取未知数量的单词，总是将新的单词插入到末尾，删除操作在头部进行

A: 需要再头部删除，选择用 deque 或者 list，但是因为总是插入到末尾，直接选择 deque, list 有额外的开销

vector 删除非尾部元素代价高


(c) 从一个文件中读取未知数量整数，将这些数排序，然后把他们打印到标准输出。

A: vector 存储，然后用 sort 即可

*/
