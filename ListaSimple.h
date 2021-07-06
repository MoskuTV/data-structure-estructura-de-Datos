#ifndef LISTASIMPLEE_LISTASIMPLE_H
#define LISTASIMPLEE_LISTASIMPLE_H

template <class T>

        class ListaSimple{
               private:
        class Nodo{
        public:
            T dato;
            Nodo *next;
            Nodo(T dato){
                this->dato = dato;
                this->next = nullptr;
            }
        };

        Nodo *head;
        Nodo *final;

        int size;
        int i;

        public:
        ListaSimple(){
            head = nullptr;
            final = nullptr;
            size = 0;
            i =0;
        }

        void Push_Front(T d);
        void Pop_Front();
        T Front();
        T Back();
        bool Empty();
        int Size();
        void Clear();
        void  Push(T d, int i);
        void Pop(int i);
        void set(T d, int i);
        T get(int i);
        void Push_Back(T d);
        void Pop_Back();



};

template <class T>
void ListaSimple<T>::Push_Front(T d) {
    Nodo *n = new Nodo(d);
    if(Empty()){
        head = n;
        final = n;
    }
    else {
        n->next = head;
        head = n;
    }

    size++;
}

template <class T>
void ListaSimple<T>::Pop_Front() {
    Nodo *aux = head;
    head = head ->next;
    delete aux;
    size--;
}

template <class T>
T ListaSimple<T>::Front() {
    return head->dato;
}

#endif //LISTASIMPLEE_LISTASIMPLE_H
