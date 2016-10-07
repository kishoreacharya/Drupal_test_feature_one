<?php
/**
 * @file
 * news.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function news_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_myview:test-view.
  $menu_links['main-menu_myview:test-view'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'test-view',
    'router_path' => 'test-view',
    'link_title' => 'My_view',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_myview:test-view',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
  );
  // Exported menu link: main-menu_newsarticle:node/1.
  $menu_links['main-menu_newsarticle:node/1'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/1',
    'router_path' => 'node/%',
    'link_title' => 'News_article',
    'options' => array(
      'identifier' => 'main-menu_newsarticle:node/1',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 0,
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('My_view');
  t('News_article');

  return $menu_links;
}
