<?php
/**
 * @file
 * d7pf_mega_menu_links.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function d7pf_mega_menu_links_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-megamenu:<front>
  $menu_links['menu-megamenu:<front>'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Front Office',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-50',
  );
  // Exported menu link: menu-megamenu:node/12288
  $menu_links['menu-megamenu:node/12288'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12288',
    'router_path' => 'node/%',
    'link_title' => 'Using IPE - Encounters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12289
  $menu_links['menu-megamenu:node/12289'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12289',
    'router_path' => 'node/%',
    'link_title' => 'Payments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12290
  $menu_links['menu-megamenu:node/12290'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12290',
    'router_path' => 'node/%',
    'link_title' => 'About Claims',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12291
  $menu_links['menu-megamenu:node/12291'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12291',
    'router_path' => 'node/%',
    'link_title' => 'Using Claims Window',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12292
  $menu_links['menu-megamenu:node/12292'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12292',
    'router_path' => 'node/%',
    'link_title' => 'Create/ Manage Claims',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12293
  $menu_links['menu-megamenu:node/12293'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12293',
    'router_path' => 'node/%',
    'link_title' => 'Process Claims',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12294
  $menu_links['menu-megamenu:node/12294'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12294',
    'router_path' => 'node/%',
    'link_title' => 'Submit Claims',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12295
  $menu_links['menu-megamenu:node/12295'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12295',
    'router_path' => 'node/%',
    'link_title' => 'ERA',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12296
  $menu_links['menu-megamenu:node/12296'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12296',
    'router_path' => 'node/%',
    'link_title' => 'Refunds',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12297
  $menu_links['menu-megamenu:node/12297'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12297',
    'router_path' => 'node/%',
    'link_title' => 'Accounts Lookup',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12298
  $menu_links['menu-megamenu:node/12298'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12298',
    'router_path' => 'node/%',
    'link_title' => 'Claims Batch Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12299
  $menu_links['menu-megamenu:node/12299'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12299',
    'router_path' => 'node/%',
    'link_title' => 'Collection Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12300
  $menu_links['menu-megamenu:node/12300'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12300',
    'router_path' => 'node/%',
    'link_title' => 'Billing Alerts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12301
  $menu_links['menu-megamenu:node/12301'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12301',
    'router_path' => 'node/%',
    'link_title' => 'Clearinghouses',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12302
  $menu_links['menu-megamenu:node/12302'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12302',
    'router_path' => 'node/%',
    'link_title' => 'Accounts Receivable Management',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-34',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12304
  $menu_links['menu-megamenu:node/12304'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12304',
    'router_path' => 'node/%',
    'link_title' => 'Pt. Info',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12305
  $menu_links['menu-megamenu:node/12305'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12305',
    'router_path' => 'node/%',
    'link_title' => 'Labs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12306
  $menu_links['menu-megamenu:node/12306'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12306',
    'router_path' => 'node/%',
    'link_title' => 'Patient Hub',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12307
  $menu_links['menu-megamenu:node/12307'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12307',
    'router_path' => 'node/%',
    'link_title' => 'Patient Lookup',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12308
  $menu_links['menu-megamenu:node/12308'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12308',
    'router_path' => 'node/%',
    'link_title' => 'Resource Schedule',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12309
  $menu_links['menu-megamenu:node/12309'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12309',
    'router_path' => 'node/%',
    'link_title' => 'Patient Appointment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12311
  $menu_links['menu-megamenu:node/12311'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12311',
    'router_path' => 'node/%',
    'link_title' => 'Appt Reminder Systems',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12312
  $menu_links['menu-megamenu:node/12312'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12312',
    'router_path' => 'node/%',
    'link_title' => 'Check In - Check Out',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12313
  $menu_links['menu-megamenu:node/12313'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12313',
    'router_path' => 'node/%',
    'link_title' => 'Patient Insurance Eligiblity',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12314
  $menu_links['menu-megamenu:node/12314'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12314',
    'router_path' => 'node/%',
    'link_title' => 'Fax Inbox',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12315
  $menu_links['menu-megamenu:node/12315'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12315',
    'router_path' => 'node/%',
    'link_title' => 'Fax Outbox',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12316
  $menu_links['menu-megamenu:node/12316'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12316',
    'router_path' => 'node/%',
    'link_title' => 'Letters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12317
  $menu_links['menu-megamenu:node/12317'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12317',
    'router_path' => 'node/%',
    'link_title' => 'Labels',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12318
  $menu_links['menu-megamenu:node/12318'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12318',
    'router_path' => 'node/%',
    'link_title' => 'Tel/Web Encounters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12319
  $menu_links['menu-megamenu:node/12319'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12319',
    'router_path' => 'node/%',
    'link_title' => 'Incoming Referral',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12320
  $menu_links['menu-megamenu:node/12320'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12320',
    'router_path' => 'node/%',
    'link_title' => 'Messages',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12321
  $menu_links['menu-megamenu:node/12321'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12321',
    'router_path' => 'node/%',
    'link_title' => 'Out of Office Visits',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12323
  $menu_links['menu-megamenu:node/12323'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12323',
    'router_path' => 'node/%',
    'link_title' => 'Bubble Sheets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12324
  $menu_links['menu-megamenu:node/12324'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12324',
    'router_path' => 'node/%',
    'link_title' => 'Lookup Encounters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12325
  $menu_links['menu-megamenu:node/12325'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12325',
    'router_path' => 'node/%',
    'link_title' => 'Patient Recalls',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12326
  $menu_links['menu-megamenu:node/12326'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12326',
    'router_path' => 'node/%',
    'link_title' => 'Case - Case Mgr',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12327
  $menu_links['menu-megamenu:node/12327'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12327',
    'router_path' => 'node/%',
    'link_title' => 'About PN',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12328
  $menu_links['menu-megamenu:node/12328'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12328',
    'router_path' => 'node/%',
    'link_title' => 'Chief Complaint',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12329
  $menu_links['menu-megamenu:node/12329'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12329',
    'router_path' => 'node/%',
    'link_title' => 'HPI',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12330
  $menu_links['menu-megamenu:node/12330'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12330',
    'router_path' => 'node/%',
    'link_title' => 'Current Medication',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12331
  $menu_links['menu-megamenu:node/12331'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12331',
    'router_path' => 'node/%',
    'link_title' => 'Medical History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12332
  $menu_links['menu-megamenu:node/12332'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12332',
    'router_path' => 'node/%',
    'link_title' => 'Surgical History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12333
  $menu_links['menu-megamenu:node/12333'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12333',
    'router_path' => 'node/%',
    'link_title' => 'Hospitalization',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12334
  $menu_links['menu-megamenu:node/12334'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12334',
    'router_path' => 'node/%',
    'link_title' => 'Family History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12335
  $menu_links['menu-megamenu:node/12335'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12335',
    'router_path' => 'node/%',
    'link_title' => 'Social HIstory',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12336
  $menu_links['menu-megamenu:node/12336'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12336',
    'router_path' => 'node/%',
    'link_title' => 'Allergies-Intolerance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12337
  $menu_links['menu-megamenu:node/12337'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12337',
    'router_path' => 'node/%',
    'link_title' => 'OB - GYN History',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12338
  $menu_links['menu-megamenu:node/12338'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12338',
    'router_path' => 'node/%',
    'link_title' => 'ROS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12339
  $menu_links['menu-megamenu:node/12339'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12339',
    'router_path' => 'node/%',
    'link_title' => 'Vitals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12340
  $menu_links['menu-megamenu:node/12340'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12340',
    'router_path' => 'node/%',
    'link_title' => 'Past Results',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12341
  $menu_links['menu-megamenu:node/12341'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12341',
    'router_path' => 'node/%',
    'link_title' => 'Examination',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12342
  $menu_links['menu-megamenu:node/12342'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12342',
    'router_path' => 'node/%',
    'link_title' => 'Physical Examination',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12343
  $menu_links['menu-megamenu:node/12343'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12343',
    'router_path' => 'node/%',
    'link_title' => 'Assessment',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12344
  $menu_links['menu-megamenu:node/12344'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12344',
    'router_path' => 'node/%',
    'link_title' => 'About Treatment Window',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12345
  $menu_links['menu-megamenu:node/12345'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12345',
    'router_path' => 'node/%',
    'link_title' => 'Rx -Prescriptions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12346
  $menu_links['menu-megamenu:node/12346'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12346',
    'router_path' => 'node/%',
    'link_title' => 'ePrescriptions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12347
  $menu_links['menu-megamenu:node/12347'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12347',
    'router_path' => 'node/%',
    'link_title' => 'Medication Summary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12348
  $menu_links['menu-megamenu:node/12348'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12348',
    'router_path' => 'node/%',
    'link_title' => 'Dosage Calculator',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12349
  $menu_links['menu-megamenu:node/12349'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12349',
    'router_path' => 'node/%',
    'link_title' => 'Diagnostic Imaging',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12350
  $menu_links['menu-megamenu:node/12350'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12350',
    'router_path' => 'node/%',
    'link_title' => 'Procedures (Treatment)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12351
  $menu_links['menu-megamenu:node/12351'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12351',
    'router_path' => 'node/%',
    'link_title' => 'Order Sets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12352
  $menu_links['menu-megamenu:node/12352'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12352',
    'router_path' => 'node/%',
    'link_title' => 'Outgoing Referrals',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-35',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12353
  $menu_links['menu-megamenu:node/12353'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12353',
    'router_path' => 'node/%',
    'link_title' => 'eCliniSense',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-34',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12354
  $menu_links['menu-megamenu:node/12354'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12354',
    'router_path' => 'node/%',
    'link_title' => 'Patient Education',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12355
  $menu_links['menu-megamenu:node/12355'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12355',
    'router_path' => 'node/%',
    'link_title' => 'Physician Reference',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12356
  $menu_links['menu-megamenu:node/12356'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12356',
    'router_path' => 'node/%',
    'link_title' => 'Procedures (Progress Note)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12357
  $menu_links['menu-megamenu:node/12357'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12357',
    'router_path' => 'node/%',
    'link_title' => 'Immunizations/ Injections',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-37',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12358
  $menu_links['menu-megamenu:node/12358'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12358',
    'router_path' => 'node/%',
    'link_title' => 'Preventive Medicine',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-36',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12360
  $menu_links['menu-megamenu:node/12360'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12360',
    'router_path' => 'node/%',
    'link_title' => 'Macros',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-29',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12361
  $menu_links['menu-megamenu:node/12361'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12361',
    'router_path' => 'node/%',
    'link_title' => 'About Patient Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12362
  $menu_links['menu-megamenu:node/12362'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12362',
    'router_path' => 'node/%',
    'link_title' => 'Medical Summary',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12363
  $menu_links['menu-megamenu:node/12363'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12363',
    'router_path' => 'node/%',
    'link_title' => 'Quality Measures and CDSS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12364
  $menu_links['menu-megamenu:node/12364'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12364',
    'router_path' => 'node/%',
    'link_title' => 'Alerts',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12365
  $menu_links['menu-megamenu:node/12365'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12365',
    'router_path' => 'node/%',
    'link_title' => 'Flowsheets',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12366
  $menu_links['menu-megamenu:node/12366'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12366',
    'router_path' => 'node/%',
    'link_title' => 'Anti-Coagulant Flowsheet',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12367
  $menu_links['menu-megamenu:node/12367'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12367',
    'router_path' => 'node/%',
    'link_title' => 'Smart Forms',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12368
  $menu_links['menu-megamenu:node/12368'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12368',
    'router_path' => 'node/%',
    'link_title' => 'Growth Chart',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12369
  $menu_links['menu-megamenu:node/12369'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12369',
    'router_path' => 'node/%',
    'link_title' => 'Right Chart Panel',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12370
  $menu_links['menu-megamenu:node/12370'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12370',
    'router_path' => 'node/%',
    'link_title' => 'Problem List',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12371
  $menu_links['menu-megamenu:node/12371'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12371',
    'router_path' => 'node/%',
    'link_title' => 'Printing/ Faxing PNs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12372
  $menu_links['menu-megamenu:node/12372'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12372',
    'router_path' => 'node/%',
    'link_title' => 'Details - Super Bill ',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-35',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12373
  $menu_links['menu-megamenu:node/12373'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12373',
    'router_path' => 'node/%',
    'link_title' => 'Locking - Unlocking PNs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-37',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12374
  $menu_links['menu-megamenu:node/12374'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12374',
    'router_path' => 'node/%',
    'link_title' => 'Progress Notes Templates',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-34',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12375
  $menu_links['menu-megamenu:node/12375'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12375',
    'router_path' => 'node/%',
    'link_title' => 'eCliniForms',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-31',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12376
  $menu_links['menu-megamenu:node/12376'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12376',
    'router_path' => 'node/%',
    'link_title' => 'Specialty Forms',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12377
  $menu_links['menu-megamenu:node/12377'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12377',
    'router_path' => 'node/%',
    'link_title' => 'Interface Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-26',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12378
  $menu_links['menu-megamenu:node/12378'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12378',
    'router_path' => 'node/%',
    'link_title' => 'Office Visits window',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12379
  $menu_links['menu-megamenu:node/12379'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12379',
    'router_path' => 'node/%',
    'link_title' => 'Registry',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12380
  $menu_links['menu-megamenu:node/12380'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12380',
    'router_path' => 'node/%',
    'link_title' => 'Structured Data',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-28',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12381
  $menu_links['menu-megamenu:node/12381'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12381',
    'router_path' => 'node/%',
    'link_title' => 'PN - Customization',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-30',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12383
  $menu_links['menu-megamenu:node/12383'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12383',
    'router_path' => 'node/%',
    'link_title' => 'PCMH',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12384
  $menu_links['menu-megamenu:node/12384'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12384',
    'router_path' => 'node/%',
    'link_title' => 'Accountable Care Org (ACO)',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12386
  $menu_links['menu-megamenu:node/12386'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12386',
    'router_path' => 'node/%',
    'link_title' => 'Transcriptions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-23',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12387
  $menu_links['menu-megamenu:node/12387'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12387',
    'router_path' => 'node/%',
    'link_title' => '5010 Form',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12390
  $menu_links['menu-megamenu:node/12390'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12390',
    'router_path' => 'node/%',
    'link_title' => 'Patient Payments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12391
  $menu_links['menu-megamenu:node/12391'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12391',
    'router_path' => 'node/%',
    'link_title' => 'Insurance Payments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12392
  $menu_links['menu-megamenu:node/12392'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12392',
    'router_path' => 'node/%',
    'link_title' => 'Payment Batches',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12394
  $menu_links['menu-megamenu:node/12394'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12394',
    'router_path' => 'node/%',
    'link_title' => 'Hard Close',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12395
  $menu_links['menu-megamenu:node/12395'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12395',
    'router_path' => 'node/%',
    'link_title' => 'Ahlers Family Planning',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12396
  $menu_links['menu-megamenu:node/12396'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12396',
    'router_path' => 'node/%',
    'link_title' => 'Capitation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12397
  $menu_links['menu-megamenu:node/12397'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12397',
    'router_path' => 'node/%',
    'link_title' => 'FQHC',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12398
  $menu_links['menu-megamenu:node/12398'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12398',
    'router_path' => 'node/%',
    'link_title' => 'Occupational Medicine Billing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12399
  $menu_links['menu-megamenu:node/12399'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12399',
    'router_path' => 'node/%',
    'link_title' => 'PQRS',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12400
  $menu_links['menu-megamenu:node/12400'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12400',
    'router_path' => 'node/%',
    'link_title' => 'Ryan White HIV/AIDS Program',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12401
  $menu_links['menu-megamenu:node/12401'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12401',
    'router_path' => 'node/%',
    'link_title' => 'CPSP',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12402_
  $menu_links['menu-megamenu:node/12402_'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12402_',
    'router_path' => 'node/%',
    'link_title' => 'Data Export',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-37',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12404
  $menu_links['menu-megamenu:node/12404'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12404',
    'router_path' => 'node/%',
    'link_title' => 'Misc Config Options',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12405
  $menu_links['menu-megamenu:node/12405'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12405',
    'router_path' => 'node/%',
    'link_title' => 'CPT Codes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12406
  $menu_links['menu-megamenu:node/12406'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12406',
    'router_path' => 'node/%',
    'link_title' => 'Fee Schedules',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12407
  $menu_links['menu-megamenu:node/12407'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12407',
    'router_path' => 'node/%',
    'link_title' => 'ICD Codes',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12408
  $menu_links['menu-megamenu:node/12408'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12408',
    'router_path' => 'node/%',
    'link_title' => 'CodeCorrect',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12409
  $menu_links['menu-megamenu:node/12409'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12409',
    'router_path' => 'node/%',
    'link_title' => 'Rule Engine',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-37',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12410
  $menu_links['menu-megamenu:node/12410'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12410',
    'router_path' => 'node/%',
    'link_title' => 'Transworld',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12411
  $menu_links['menu-megamenu:node/12411'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12411',
    'router_path' => 'node/%',
    'link_title' => 'Facility',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12413
  $menu_links['menu-megamenu:node/12413'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12413',
    'router_path' => 'node/%',
    'link_title' => 'Staff Setup',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12414
  $menu_links['menu-megamenu:node/12414'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12414',
    'router_path' => 'node/%',
    'link_title' => 'Referring Physicians',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12415
  $menu_links['menu-megamenu:node/12415'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12415',
    'router_path' => 'node/%',
    'link_title' => 'Provider/ Resource Schedules',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-44',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12416
  $menu_links['menu-megamenu:node/12416'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12416',
    'router_path' => 'node/%',
    'link_title' => 'Resource Setup',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12417
  $menu_links['menu-megamenu:node/12417'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12417',
    'router_path' => 'node/%',
    'link_title' => 'Immunization Registry',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-43',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12418
  $menu_links['menu-megamenu:node/12418'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12418',
    'router_path' => 'node/%',
    'link_title' => 'Departments',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-42',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12419
  $menu_links['menu-megamenu:node/12419'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12419',
    'router_path' => 'node/%',
    'link_title' => 'Attorneys',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12420
  $menu_links['menu-megamenu:node/12420'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12420',
    'router_path' => 'node/%',
    'link_title' => 'Dragon Naturally Speaking',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-34',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12421
  $menu_links['menu-megamenu:node/12421'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12421',
    'router_path' => 'node/%',
    'link_title' => 'Employers',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-39',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12422
  $menu_links['menu-megamenu:node/12422'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12422',
    'router_path' => 'node/%',
    'link_title' => 'Pharmacy',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12423
  $menu_links['menu-megamenu:node/12423'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12423',
    'router_path' => 'node/%',
    'link_title' => 'Insurance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12424
  $menu_links['menu-megamenu:node/12424'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12424',
    'router_path' => 'node/%',
    'link_title' => 'Visit Rules',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-38',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12425
  $menu_links['menu-megamenu:node/12425'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12425',
    'router_path' => 'node/%',
    'link_title' => 'Visit Types',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-37',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12426
  $menu_links['menu-megamenu:node/12426'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12426',
    'router_path' => 'node/%',
    'link_title' => 'UpToDate Search',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12427
  $menu_links['menu-megamenu:node/12427'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12427',
    'router_path' => 'node/%',
    'link_title' => 'My Settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12438
  $menu_links['menu-megamenu:node/12438'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12438',
    'router_path' => 'node/%',
    'link_title' => 'Local Settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12439
  $menu_links['menu-megamenu:node/12439'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12439',
    'router_path' => 'node/%',
    'link_title' => 'Export to Outlook',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12440
  $menu_links['menu-megamenu:node/12440'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12440',
    'router_path' => 'node/%',
    'link_title' => 'Security',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12441
  $menu_links['menu-megamenu:node/12441'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12441',
    'router_path' => 'node/%',
    'link_title' => 'P.S.A.C.',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12442
  $menu_links['menu-megamenu:node/12442'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12442',
    'router_path' => 'node/%',
    'link_title' => 'Authentication Settings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12443
  $menu_links['menu-megamenu:node/12443'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12443',
    'router_path' => 'node/%',
    'link_title' => 'Scheduled Jobs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-47',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12444
  $menu_links['menu-megamenu:node/12444'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12444',
    'router_path' => 'node/%',
    'link_title' => 'Actions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12447
  $menu_links['menu-megamenu:node/12447'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12447',
    'router_path' => 'node/%',
    'link_title' => 'Enterprise Directory',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-35',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12448
  $menu_links['menu-megamenu:node/12448'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12448',
    'router_path' => 'node/%',
    'link_title' => 'Patient Portal',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12449
  $menu_links['menu-megamenu:node/12449'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12449',
    'router_path' => 'node/%',
    'link_title' => 'P2P',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12450
  $menu_links['menu-megamenu:node/12450'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12450',
    'router_path' => 'node/%',
    'link_title' => 'eEHX',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12451
  $menu_links['menu-megamenu:node/12451'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12451',
    'router_path' => 'node/%',
    'link_title' => 'Logs',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-46',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12454
  $menu_links['menu-megamenu:node/12454'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12454',
    'router_path' => 'node/%',
    'link_title' => 'UDS Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-41',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/12455
  $menu_links['menu-megamenu:node/12455'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/12455',
    'router_path' => 'node/%',
    'link_title' => 'Kiosk',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-50',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/14592
  $menu_links['menu-megamenu:node/14592'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/14592',
    'router_path' => 'node/%',
    'link_title' => 'eClinicalMobile',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-49',
    'parent_path' => '<front>',
  );
  // Exported menu link: menu-megamenu:node/14626
  $menu_links['menu-megamenu:node/14626'] = array(
    'menu_name' => 'menu-megamenu',
    'link_path' => 'node/14626',
    'router_path' => 'node/%',
    'link_title' => 'eClinicalMessenger',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-48',
    'parent_path' => '<front>',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('5010 Form');
  t('About Claims');
  t('About PN');
  t('About Patient Dashboard');
  t('About Treatment Window');
  t('Accountable Care Org (ACO)');
  t('Accounts Lookup');
  t('Accounts Receivable Management');
  t('Actions');
  t('Ahlers Family Planning');
  t('Alerts');
  t('Allergies-Intolerance');
  t('Anti-Coagulant Flowsheet');
  t('Appt Reminder Systems');
  t('Assessment');
  t('Attorneys');
  t('Authentication Settings');
  t('Billing Alerts');
  t('Bubble Sheets');
  t('CPSP');
  t('CPT Codes');
  t('Capitation');
  t('Case - Case Mgr');
  t('Check In - Check Out');
  t('Chief Complaint');
  t('Claims Batch Management');
  t('Clearinghouses');
  t('CodeCorrect');
  t('Collection Management');
  t('Create/ Manage Claims');
  t('Current Medication');
  t('Data Export');
  t('Departments');
  t('Details - Super Bill ');
  t('Diagnostic Imaging');
  t('Dosage Calculator');
  t('Dragon Naturally Speaking');
  t('ERA');
  t('Employers');
  t('Enterprise Directory');
  t('Examination');
  t('Export to Outlook');
  t('FQHC');
  t('Facility');
  t('Family History');
  t('Fax Inbox');
  t('Fax Outbox');
  t('Fee Schedules');
  t('Flowsheets');
  t('Front Office');
  t('Growth Chart');
  t('HPI');
  t('Hard Close');
  t('Hospitalization');
  t('ICD Codes');
  t('Immunization Registry');
  t('Immunizations/ Injections');
  t('Incoming Referral');
  t('Insurance');
  t('Insurance Payments');
  t('Interface Dashboard');
  t('Kiosk');
  t('Labels');
  t('Labs');
  t('Letters');
  t('Local Settings');
  t('Locking - Unlocking PNs');
  t('Logs');
  t('Lookup Encounters');
  t('Macros');
  t('Medical History');
  t('Medical Summary');
  t('Medication Summary');
  t('Messages');
  t('Misc Config Options');
  t('My Settings');
  t('OB - GYN History');
  t('Occupational Medicine Billing');
  t('Office Visits window');
  t('Order Sets');
  t('Out of Office Visits');
  t('Outgoing Referrals');
  t('P.S.A.C.');
  t('P2P');
  t('PCMH');
  t('PN - Customization');
  t('PQRS');
  t('Past Results');
  t('Patient Appointment');
  t('Patient Education');
  t('Patient Hub');
  t('Patient Insurance Eligiblity');
  t('Patient Lookup');
  t('Patient Payments');
  t('Patient Portal');
  t('Patient Recalls');
  t('Payment Batches');
  t('Payments');
  t('Pharmacy');
  t('Physical Examination');
  t('Physician Reference');
  t('Preventive Medicine');
  t('Printing/ Faxing PNs');
  t('Problem List');
  t('Procedures (Progress Note)');
  t('Procedures (Treatment)');
  t('Process Claims');
  t('Progress Notes Templates');
  t('Provider/ Resource Schedules');
  t('Pt. Info');
  t('Quality Measures and CDSS');
  t('ROS');
  t('Referring Physicians');
  t('Refunds');
  t('Registry');
  t('Resource Schedule');
  t('Resource Setup');
  t('Right Chart Panel');
  t('Rule Engine');
  t('Rx -Prescriptions');
  t('Ryan White HIV/AIDS Program');
  t('Scheduled Jobs');
  t('Security');
  t('Smart Forms');
  t('Social HIstory');
  t('Specialty Forms');
  t('Staff Setup');
  t('Structured Data');
  t('Submit Claims');
  t('Surgical History');
  t('Tel/Web Encounters');
  t('Transcriptions');
  t('Transworld');
  t('UDS Reports');
  t('UpToDate Search');
  t('Using Claims Window');
  t('Using IPE - Encounters');
  t('Visit Rules');
  t('Visit Types');
  t('Vitals');
  t('eCliniForms');
  t('eCliniSense');
  t('eClinicalMessenger');
  t('eClinicalMobile');
  t('eEHX');
  t('ePrescriptions');


  return $menu_links;
}
