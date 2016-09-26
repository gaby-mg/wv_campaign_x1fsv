<?php
/**
 * @file
 * wv_campaign_x1fsv.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_pages().
 */
function wv_campaign_x1fsv_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'wv_x1fsv_page';
  $page->task = 'page';
  $page->admin_title = 'Por una infancia sin violencia';
  $page->admin_description = '';
  $page->path = 'porunainfanciasinviolencia';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_wv_x1fsv_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'wv_x1fsv_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'name' => 'panel',
  );
  $display = new panels_display();
  $display->layout = 'bootstrap_threecol_stacked';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top' => NULL,
      'left' => NULL,
      'middle' => NULL,
      'right' => NULL,
      'bottom' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = 'Acaba con la violencia infantil';
  $display->uuid = '4668f08b-9bae-4de0-930e-2e074f586b78';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-4a66a157-e2a7-4a7c-b41b-e5545af80185';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'views-wv_x1fsv_donation_list-block';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4a66a157-e2a7-4a7c-b41b-e5545af80185';
    $display->content['new-4a66a157-e2a7-4a7c-b41b-e5545af80185'] = $pane;
    $display->panels['middle'][0] = 'new-4a66a157-e2a7-4a7c-b41b-e5545af80185';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-4a66a157-e2a7-4a7c-b41b-e5545af80185';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['wv_x1fsv_page'] = $page;

  return $pages;

}
