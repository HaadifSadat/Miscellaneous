import streamlit as st
import mysql.connector

def get_db():
    db = mysql.connector.connect(
        host="localhost",
        user="haadif",
        password="haadif123",
        database="hadyfweekfour"
    )
    return db

def create_train_table():
    try:
        db = get_db()
        cursor = db.cursor()
        cursor.execute('''CREATE TABLE train (Train_No INT PRIMARY KEY, Name VARCHAR(50), Train_Type VARCHAR(50), 
                          Source VARCHAR(50), Destination VARCHAR(50), Availability VARCHAR(3))''')
        st.success("Train table created successfully!")
    except mysql.connector.errors.ProgrammingError as e:
        st.error(e)


def read_train_table():
    try:
        db = get_db()
        cursor = db.cursor()
        cursor.execute("SELECT * FROM train")
        result = cursor.fetchall()
        for row in result:
            st.write(row)
    except mysql.connector.errors.ProgrammingError as e:
        st.error(e)


def update_train_availability(train_no, availability):
    try:
        db = get_db()
        cursor = db.cursor()
        query = "UPDATE train SET Availability = %s WHERE Train_No = %s"
        values = (availability, train_no)
        cursor.execute(query, values)
        db.commit()
        st.success("Train availability updated successfully!")
    except mysql.connector.errors.ProgrammingError as e:
        st.error(e)


def delete_train(train_no):
    try:
        db = get_db()
        cursor = db.cursor()
        query = "DELETE FROM train WHERE Train_No = %s"
        values = (train_no,)
        cursor.execute(query, values)
        db.commit()
        st.success("Train deleted successfully!")
    except mysql.connector.errors.ProgrammingError as e:
        st.error(e)


def main():
    st.title("Train CRUD Application")

    menu = ["Create", "Read", "Update", "Delete"]
    choice = st.sidebar.selectbox("Select operation", menu)

    if choice == "Create":
        create_train_table()
    elif choice == "Read":
        read_train_table()
    elif choice == "Update":
        train_no = st.number_input("Enter train number")
        availability = st.selectbox("Select availability", ("yes", "no"))
        if st.button("Update"):
            update_train_availability(train_no, availability)
    elif choice == "Delete":
        train_no = st.number_input("Enter train number")
        if st.button("Delete"):
            delete_train(train_no)

if __name__ == "__main__":
    main()