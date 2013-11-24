class CreateProperties < ActiveRecord::Migration
  def change
    create_table :properties do |t|
      t.text :address
      t.integer :price

      t.timestamps
    end
  end
end
