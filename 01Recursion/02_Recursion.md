# **Tree Recursion**

    When a function is called by itself more than once then its called Tree recursion

```<c++>
    func(n){
        if(n>0){
            cout<<n;
            func(n-1);
            func(n-1);
        }
    }
    main(){
        func(3);
    }
```

**Complexity** :

### `O(2^n)`

# **Indirect Recursion**

```<c++>
void A(int n){
    if(--){
        ----
        B(n-1);
    }
}
void B(int n){
    if(--){
        ----
        A(n-1);
    }
}
```
