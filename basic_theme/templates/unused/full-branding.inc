	<?php if ($logo): ?>
	  <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home" id="logo"><img src="<?php print $logo; ?>" alt="<?php print t('Home'); ?>" /></a>
	<?php endif; ?>
<?php
$block = module_invoke('search', 'block_view');
print render($block['content']);
?>
	<?php if ($site_name || $site_slogan): ?>
	  <div id="name-and-slogan">
		<?php if ($site_name): ?>
		  <?php if ($title): ?>
			<div id="site-name"><strong>
			  <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
			</strong></div>
		  <?php else: /* Use h1 when the content title is empty */ ?>
			<h1 id="site-name">
			  <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
			</h1>
		  <?php endif; ?>
		<?php endif; ?>

		<?php if ($site_slogan): ?>
		  <div id="site-slogan"><?php print $site_slogan; ?></div>
		<?php endif; ?>
	  </div><!-- /#name-and-slogan -->
	<?php endif; ?>

	<?php if ($main_menu): ?>
	  <nav id="navbar" class="navigation">
		<?php print theme('links__system_main_menu', array(
		  'links' => $main_menu,
		  'attributes' => array(
			'id' => 'navbar-links',
			'class' => array('links', 'clearfix'),
		  ),
		  'heading' => array(
			'text' => t('Main menu'),
			'level' => 'h2',
			'class' => array('element-invisible'),
		  ),
		)); ?>
	  </nav><!-- /#main-menu -->
	<?php endif; ?>