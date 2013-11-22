class PostsController < ApplicationController
  def index
  	@posts = Post.all
  end

  def show
  	@post = Post.find(params[:id])
  end

  def new
  	@post = Post.new
  end

  def edit
  	@post = Post.find(params[:id])
  end

  def destroy
  	@post = Post.find(params[:id])
  	@post.destroy

  	redirect_to posts_path
  end

  def update
  	@post = Post.find(params[:id])

  	if @post.update(params[:post].permit(:title, :text))
  		redirect_to @post
  	else
  		render 'edit'
  	end

  end

  def create
  #	test = params[:post].inspect	
  #	render text: test

    @post = Post.new(post_params)
  	
  	if @post.save
  		redirect_to @post
  	else
  		render 'new'
  	end


  end

  private
	  def post_params
	    params.require(:post).permit(:title, :text)
	  end

end