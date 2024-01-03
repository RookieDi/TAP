namespace lab5_ex2
{
    partial class AddProduct
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.txtDenumire = new System.Windows.Forms.TextBox();
            this.denumire = new System.Windows.Forms.Label();
            this.txtDescriere = new System.Windows.Forms.TextBox();
            this.descriere = new System.Windows.Forms.Label();
            this.dtIntrare = new System.Windows.Forms.DateTimePicker();
            this.dtIesire = new System.Windows.Forms.DateTimePicker();
            this.label1 = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.btnadd = new System.Windows.Forms.Button();
            this.btout = new System.Windows.Forms.Button();
            this.entityCommand1 = new System.Data.Entity.Core.EntityClient.EntityCommand();
            this.SuspendLayout();
            // 
            // txtDenumire
            // 
            this.txtDenumire.AcceptsReturn = true;
            this.txtDenumire.Location = new System.Drawing.Point(311, 80);
            this.txtDenumire.Name = "txtDenumire";
            this.txtDenumire.Size = new System.Drawing.Size(292, 20);
            this.txtDenumire.TabIndex = 0;
            this.txtDenumire.TextChanged += new System.EventHandler(this.txtDenumire_TextChanged);
            // 
            // denumire
            // 
            this.denumire.AutoSize = true;
            this.denumire.Location = new System.Drawing.Point(161, 86);
            this.denumire.Name = "denumire";
            this.denumire.Size = new System.Drawing.Size(50, 13);
            this.denumire.TabIndex = 1;
            this.denumire.Text = "denumire";
            // 
            // txtDescriere
            // 
            this.txtDescriere.Location = new System.Drawing.Point(311, 139);
            this.txtDescriere.Name = "txtDescriere";
            this.txtDescriere.Size = new System.Drawing.Size(292, 20);
            this.txtDescriere.TabIndex = 2;
            this.txtDescriere.TextChanged += new System.EventHandler(this.txtDescriere_TextChanged);
            // 
            // descriere
            // 
            this.descriere.AutoSize = true;
            this.descriere.Location = new System.Drawing.Point(161, 139);
            this.descriere.Name = "descriere";
            this.descriere.Size = new System.Drawing.Size(50, 13);
            this.descriere.TabIndex = 3;
            this.descriere.Text = "descriere";
            // 
            // dtIntrare
            // 
            this.dtIntrare.Location = new System.Drawing.Point(311, 206);
            this.dtIntrare.Name = "dtIntrare";
            this.dtIntrare.Size = new System.Drawing.Size(200, 20);
            this.dtIntrare.TabIndex = 4;
            this.dtIntrare.ValueChanged += new System.EventHandler(this.dtIntrare_ValueChanged);
            // 
            // dtIesire
            // 
            this.dtIesire.Location = new System.Drawing.Point(311, 265);
            this.dtIesire.Name = "dtIesire";
            this.dtIesire.Size = new System.Drawing.Size(200, 20);
            this.dtIesire.TabIndex = 5;
            this.dtIesire.ValueChanged += new System.EventHandler(this.dtIesire_ValueChanged);
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(176, 212);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(36, 13);
            this.label1.TabIndex = 6;
            this.label1.Text = "intrare";
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(176, 272);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(31, 13);
            this.label2.TabIndex = 7;
            this.label2.Text = "iesire";
            // 
            // btnadd
            // 
            this.btnadd.Location = new System.Drawing.Point(363, 365);
            this.btnadd.Name = "btnadd";
            this.btnadd.Size = new System.Drawing.Size(75, 23);
            this.btnadd.TabIndex = 8;
            this.btnadd.Text = "Adaugare";
            this.btnadd.UseVisualStyleBackColor = true;
            this.btnadd.Click += new System.EventHandler(this.btnadd_Click);
            // 
            // btout
            // 
            this.btout.Location = new System.Drawing.Point(532, 365);
            this.btout.Name = "btout";
            this.btout.Size = new System.Drawing.Size(75, 23);
            this.btout.TabIndex = 9;
            this.btout.Text = "iesire";
            this.btout.UseVisualStyleBackColor = true;
            this.btout.Click += new System.EventHandler(this.btout_Click);
            // 
            // entityCommand1
            // 
            this.entityCommand1.CommandTimeout = 0;
            this.entityCommand1.CommandTree = null;
            this.entityCommand1.Connection = null;
            this.entityCommand1.EnablePlanCaching = true;
            this.entityCommand1.Transaction = null;
            // 
            // AddProduct
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.btout);
            this.Controls.Add(this.btnadd);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.label1);
            this.Controls.Add(this.dtIesire);
            this.Controls.Add(this.dtIntrare);
            this.Controls.Add(this.descriere);
            this.Controls.Add(this.txtDescriere);
            this.Controls.Add(this.denumire);
            this.Controls.Add(this.txtDenumire);
            this.Name = "AddProduct";
            this.Text = "AddProduct";
            this.Load += new System.EventHandler(this.AddProduct_Load);
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.TextBox txtDenumire;
        private System.Windows.Forms.Label denumire;
        private System.Windows.Forms.TextBox txtDescriere;
        private System.Windows.Forms.Label descriere;
        private System.Windows.Forms.DateTimePicker dtIntrare;
        private System.Windows.Forms.DateTimePicker dtIesire;
        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Button btnadd;
        private System.Windows.Forms.Button btout;
        private System.Data.Entity.Core.EntityClient.EntityCommand entityCommand1;
    }
}