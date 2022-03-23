using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Ejercicio1
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        public void button1_Click(object sender, EventArgs e)
        {

            string titulo = "Error al calcular";
            string error = "Hay valores faltantes o no correspondientes a un numero entero positivo. Por favor verifiquelos";

            try
            {

                int nota1, nota2, nota3, nota4, nota5, nota6, nota7, nota8, nota9, nota10, promedio;

                nota1 = int.Parse(txt1.Text);
                nota2 = int.Parse(txt2.Text);
                nota3 = int.Parse(txt3.Text);
                nota4 = int.Parse(txt4.Text);
                nota5 = int.Parse(txt5.Text);
                nota6 = int.Parse(txt6.Text);
                nota7 = int.Parse(txt7.Text);
                nota8 = int.Parse(txt8.Text);
                nota9 = int.Parse(txt9.Text);
                nota10 = int.Parse(txt10.Text);

                if (nota1 < 0 || nota2 < 0 || nota3 < 0 || nota4 < 0 || nota5 < 0 || nota6 < 0 || nota7 < 0 || nota8 < 0 || nota9 < 0 || nota10 < 0)
                {
                    MessageBox.Show(error, titulo);
                }
                else
                {

                    promedio = (nota1 + nota2 + nota3 + nota4 + nota5 + nota6 + nota7 + nota8 + nota9 + nota10) / 10;

                    txtpromedio.Text = promedio.ToString("N2");
                }
            }
            catch (Exception)
            {
                MessageBox.Show(error, titulo);
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            txt1.Clear();
            txt2.Clear();
            txt3.Clear();
            txt4.Clear();
            txt5.Clear();
            txt6.Clear();
            txt7.Clear();
            txt8.Clear();
            txt9.Clear();
            txt10.Clear();
            txtpromedio.Clear();
            txt1.Focus();
        }
    }
}
