#pragma once
#include"person.h"
namespace classApplication {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections::Generic;
    using namespace System::Windows::Forms;
    using namespace System::Drawing;

    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
        {
            InitializeComponent();
            // Initialize list
            persons = gcnew List<Person^>();
            persons->Add(gcnew Person("Hamza", 20, "Étudiant"));
            persons->Add(gcnew Person("Khalide", 45, "Employé"));
            persons->Add(gcnew Person("Larbi", 40, "Professeur"));
            persons->Add(gcnew Person("Mohamed", 40, "Professeur"));
            // Populate comboBox 
            for (int i = 0; i < persons->Count; i++)
            {
                comboBox1->Items->Add(persons[i]->getName());
            }
            // Set default person index if available
            if (comboBox1->Items->Count > 0)
            {
                comboBox1->SelectedIndex = 0;
            }
            // Display details for the selected person
            UpdateDetailsLabel();
        }
    protected:
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private:
        List<Person^>^ persons;
        int selectedPersonIndex;
        System::ComponentModel::Container^ components;

    private:
        System::Windows::Forms::Label^ label1;
        System::Windows::Forms::Label^ label2;
        System::Windows::Forms::Label^ label3;
        System::Windows::Forms::TextBox^ textBox1;
        System::Windows::Forms::TextBox^ textBox2;
        System::Windows::Forms::TextBox^ textBox3;
        System::Windows::Forms::Button^ button1;
        System::Windows::Forms::ComboBox^ comboBox1;
        System::Windows::Forms::Label^ labelDetails;
        System::Windows::Forms::Label^ label4;
    private: 
        System::Windows::Forms::Button^ button2;
    private:
#pragma region Windows Form Designer generated code
        void InitializeComponent(void)
        {
            this->label1 = (gcnew System::Windows::Forms::Label());
            this->label2 = (gcnew System::Windows::Forms::Label());
            this->label3 = (gcnew System::Windows::Forms::Label());
            this->textBox1 = (gcnew System::Windows::Forms::TextBox());
            this->textBox2 = (gcnew System::Windows::Forms::TextBox());
            this->textBox3 = (gcnew System::Windows::Forms::TextBox());
            this->button1 = (gcnew System::Windows::Forms::Button());
            this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
            this->label4 = (gcnew System::Windows::Forms::Label());
            this->labelDetails = (gcnew System::Windows::Forms::Label());
            this->button2 = (gcnew System::Windows::Forms::Button());
            this->SuspendLayout();
            // label1
            this->label1->AutoSize = true;
            this->label1->Location = System::Drawing::Point(495, 35);
            this->label1->Name = L"label1";
            this->label1->Size = System::Drawing::Size(51, 20);
            this->label1->TabIndex = 0;
            this->label1->Text = L"Name";
            // label2
            this->label2->AutoSize = true;
            this->label2->Location = System::Drawing::Point(495, 131);
            this->label2->Name = L"label2";
            this->label2->Size = System::Drawing::Size(38, 20);
            this->label2->TabIndex = 1;
            this->label2->Text = L"Age";
            // label3
            this->label3->AutoSize = true;
            this->label3->Location = System::Drawing::Point(508, 212);
            this->label3->Name = L"label3";
            this->label3->Size = System::Drawing::Size(43, 20);
            this->label3->TabIndex = 2;
            this->label3->Text = L"Type";
            // textBox1
            this->textBox1->Location = System::Drawing::Point(562, 35);
            this->textBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
            this->textBox1->Name = L"textBox1";
            this->textBox1->Size = System::Drawing::Size(224, 26);
            this->textBox1->TabIndex = 3;
            // textBox2
            this->textBox2->Location = System::Drawing::Point(562, 125);
            this->textBox2->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
            this->textBox2->Name = L"textBox2";
            this->textBox2->Size = System::Drawing::Size(224, 26);
            this->textBox2->TabIndex = 4;
            // textBox3
            this->textBox3->Location = System::Drawing::Point(562, 212);
            this->textBox3->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
            this->textBox3->Name = L"textBox3";
            this->textBox3->Size = System::Drawing::Size(224, 26);
            this->textBox3->TabIndex = 5;
            // button1
            this->button1->Location = System::Drawing::Point(574, 286);
            this->button1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
            this->button1->Name = L"button1";
            this->button1->Size = System::Drawing::Size(135, 50);
            this->button1->TabIndex = 6;
            this->button1->Text = L"Add Person";
            this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
            // comboBox1
            this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
            this->comboBox1->Location = System::Drawing::Point(22, 35);
            this->comboBox1->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
            this->comboBox1->Name = L"comboBox1";
            this->comboBox1->Size = System::Drawing::Size(337, 37);
            this->comboBox1->TabIndex = 7;
            this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
            // label4 
            this->label4->AutoSize = true;
            this->label4->Location = System::Drawing::Point(18, 11);
            this->label4->Name = L"label4";
            this->label4->Size = System::Drawing::Size(121, 20);
            this->label4->TabIndex = 8;
            this->label4->Text = L"Select a Person";
            // labelDetails
            this->labelDetails->AutoSize = true;
            this->labelDetails->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
            this->labelDetails->Location = System::Drawing::Point(30, 76);
            this->labelDetails->Name = L"labelDetails";
            this->labelDetails->Size = System::Drawing::Size(77, 25);
            this->labelDetails->TabIndex = 9;
            this->labelDetails->Text = L"Details:";
            this->labelDetails->Click += gcnew System::EventHandler(this, &MyForm::labelDetails_Click);
           
            // button2
            this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
            this->button2->Location = System::Drawing::Point(22, 344);
            this->button2->Name = L"button2";
            this->button2->Size = System::Drawing::Size(101, 51);
            this->button2->TabIndex = 10;
            this->button2->Text = L"Exite";
            this->button2->UseVisualStyleBackColor = true;
            this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(788, 500);
            this->Controls->Add(this->button2);
            this->Controls->Add(this->label1);
            this->Controls->Add(this->label2);
            this->Controls->Add(this->label3);
            this->Controls->Add(this->textBox1);
            this->Controls->Add(this->textBox2);
            this->Controls->Add(this->textBox3);
            this->Controls->Add(this->button1);
            this->Controls->Add(this->comboBox1);
            this->Controls->Add(this->label4);
            this->Controls->Add(this->labelDetails);
            this->Margin = System::Windows::Forms::Padding(3, 4, 3, 4);
            this->Name = L"MyForm";
            this->Text = L"Person Manager";
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

    private:
        System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
        {
            if (String::IsNullOrEmpty(textBox1->Text) || String::IsNullOrEmpty(textBox2->Text) || String::IsNullOrEmpty(textBox3->Text))
            {
                MessageBox::Show("Please fill all fields.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
                return;
            }
            try
            {
                String^ name = textBox1->Text;
                int age = Convert::ToInt32(textBox2->Text);
                String^ type = textBox3->Text;

                persons->Add(gcnew Person(name, age, type));
                comboBox1->Items->Add(name);

                textBox1->Clear();
                textBox2->Clear();
                textBox3->Clear();
            }
            catch (FormatException^)
            {
                MessageBox::Show("Invalid age. Please enter a valid number.", "Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
            }
        }

        System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e)
        {
            selectedPersonIndex = comboBox1->SelectedIndex;
            UpdateDetailsLabel();
        }

        void UpdateDetailsLabel()
        {
            if (selectedPersonIndex >= 0 && selectedPersonIndex < persons->Count)
            {
                labelDetails->Text = "Details: " + persons[selectedPersonIndex]->getDetails();
            }
        }
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
private: System::Void labelDetails_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
    if (MessageBox::Show("Exite????", "4/4", MessageBoxButtons::YesNo, MessageBoxIcon::Stop) == System::Windows::Forms::DialogResult::Yes) {
        Application::Exit();
    }
}
};

    public ref class Person
    {
    private:
        String^ name;
        int age;
        String^ type;

    public:
        Person(String^ name, int age, String^ type) : name(name), age(age), type(type) {}

        String^ getName() { return name; }
        int getAge() { return age; }
        String^ getType() { return type; }

        String^ getDetails()
        {
            return "Name: " + name + ", Age: " + age + ", Type: " + type;
        }
    };
}
