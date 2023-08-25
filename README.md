# Lập trình Hướng Đối Tượng C++
Thực hành lập trình hướng đối tượng theo hướng dẫn của thầy Nguyễn Tấn Trần Minh Khang

## Biến toàn cục
 - Khái niệm: biến toàn cục (global variable) là biến được khai báo bên ngoài tất cả các hàm và được hiểu bên trong tất cả các hàm.
 - Thông thường biến toàn cục được khai báo ở đầu chương trình
 - Lưu ý: biến khai báo bên trong hàm main không là biến cục bộ mà là biến cục bộ của hàm main.  
## LỚP ĐỐI TƯỢNG (Class)
   Hiểu một cách đơn giản là sự tích hợp của hai thành phần: **Thành phần dữ liệu** và **Thành phần xử lý**  

## THỰC THỂ (INSTANCE)
- "instance" (còn được gọi là "object instance" hoặc "đối tượng thể hiện") là một thể hiện cụ thể của một lớp (class)
- Lớp định nghĩa cách mà một đối tượng sẽ hoạt động và chứa các đặc điểm (thuộc tính) và hành vi (phương thức) của đối tượng đó.
- Khi bạn tạo một đối tượng từ một lớp, bạn đang tạo ra một "instance" của lớp đó.
- Instance là một thực thể độc lập có thể chứa dữ liệu và thực hiện các thao tác hoặc hành động dựa trên các phương thức đã được định nghĩa trong lớp.
```
class Sach:
    def __init__(self, ten, tac_gia):
        self.ten = ten
        self.tac_gia = tac_gia
    
    def hien_thi_thong_tin(self):
        print(f"Tác giả: {self.tac_gia}, Tên sách: {self.ten}")

# Tạo một instance (đối tượng) từ lớp Sach
sach1 = Sach("Người giàu có nghĩa là gì", "Napoleon Hill")

# Gọi phương thức trên instance
sach1.hien_thi_thong_tin()
```
- Trong ví dụ này, sach1 là một instance của lớp Sach. Nó chứa dữ liệu như tên sách và tác giả, và có thể thực hiện hành vi như hiển thị thông tin của sách thông qua phương thức hien_thi_thong_tin.
- Tóm lại, instance là một thể hiện cụ thể của một lớp trong lập trình hướng đối tượng, có khả năng chứa dữ liệu và thực hiện các thao tác được định nghĩa trong lớp.
