using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Lab15
{
    public partial class Form1 : Form
    {
        int number;
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            number = Int32.Parse(textBox1.Text);
            number = number * number;
            textBox2.Text = System.Convert.ToString(number); ;
            MessageBox.Show("Calculations completed!");
        }
    }
}
