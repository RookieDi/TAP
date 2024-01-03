using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab5_ex2
{
    public partial class AddProduct : Form
    {
        public AddProduct()
        {
            InitializeComponent();
        }

        private void AddProduct_Load(object sender, EventArgs e)
        {

        }

        private void txtDenumire_TextChanged(object sender, EventArgs e)
        {

        }

        private void txtDescriere_TextChanged(object sender, EventArgs e)
        {

        }

        private void dtIntrare_ValueChanged(object sender, EventArgs e)
        {

        }

        private void dtIesire_ValueChanged(object sender, EventArgs e)
        {

        }

        private void btnadd_Click(object sender, EventArgs e)
        {
            using (MagazinDBContext mdb =new MagazinDBContext())
            {
                Produs p=new Produs();
                p.Denumire = txtDenumire.Text;
                p.DescriereProdus = txtDescriere.Text;
                p.DataIntrare = dtIntrare.Value;
                p.DataValabilitate=dtIesire.Value;

                p.Cantitate = 1;

                
                mdb.Produse.Add(p);
                mdb.SaveChanges();
            }

        }

        private void btout_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}
