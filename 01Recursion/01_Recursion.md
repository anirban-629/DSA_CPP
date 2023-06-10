## Recursion

<br>

> When a function is called by itself, it is called Recursion.

- Recursion's main strength is it can do Ascending as well as Descending. and it's also the difference between Loop and
  Recursion as Loop can't do Descending.

<br>

```<c++>
type func1(int n){
    if(n>0){
    // If n !> 0 then this is the termination of recursion
        cout<<n<<" ";
        func(n-1);
    }
}
type func2(int n){
    if(n>0){
    // If n !> 0 then this is the termination of recursion
        func(n-1);
        cout<<n<<" ";
    }
}
main(){
    int x=3;
    func1(x);
    func2(x);
}
```

`Output(func1) ->` **3 2 1**

`Output(func2) ->` **1 2 3**

<br>

### **Recursion Uses Stack -**

In the above programm stack activation time is - 7

- main function -> 1
- func1(3)
- func2(3)

## > Complexity `O(n)`

<br>

## `Type of Recursion`

<hr>

## Tail Recursion

_It internally Uses Stack_

```<c++>
void func(int n){
    if(n>0){
        cout<<n;
        func(n-1); // At last
    }
}
```

_Time Complexity `O(n)`_

_Space Complexity `O(n)`_

- Tail Recursion Loop

  ```<c++>
  void func(int n){
  while(n>0){
    cout<<n;
    n--;
  }
  ```

_Time Complexity `O(n)`_

_Space Complexity `O(1)`_

> **In case of tail recursion we should use loop Tail recursion loop to decrease the space complexity**

- As tail recursion loop's complexity is `O(1)` and tail recursion's is `O(n)`

<hr>

## Head Recursion

```<c++>
void func(int n){
    if(n>0){
        func(n-1);
        cout<<n;
    }
}
```

_Time Complexity `O(n)`_

_Space Complexity `O(1)`_

- Head Recursion Loop

```<c++>
void func(int n){
    int i=1;
    while(i<n){
        cout<<n;
        i++;
    }
}
```
