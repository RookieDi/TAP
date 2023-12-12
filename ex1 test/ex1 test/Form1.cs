using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;
using System.Xml.Linq;

namespace ex1_test
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void buttonCitire_Click(object sender, EventArgs e)
        {
            try
            {
                XDocument doc = XDocument.Load("A:\\tap\\ex1 test\\ex1 test\\citeste.xml");
                var query = from disciplina in doc.Descendants("disciplina")
                            select new
                            {
                                NumeDisciplina = disciplina.Attribute("nume").Value,
                                CadrulDisciplinei = disciplina.Attribute("cadrue").Value,
                                NumeStudent = disciplina.Element("student").Element("nume").Value,
                                NotaStudent = disciplina.Element("student").Element("nota").Value
                            };

                dataGridView.DataSource = query.ToList();
            }
            catch (Exception ex)
            {
                MessageBox.Show("Error reading data: " + ex.Message);
            }
        }
    }
}


