

0000000000400480 <_init>:
  400480:	48 83 ec 08          	sub    $0x8,%rsp
  400484:	48 8b 05 6d 0b 20 00 	mov    0x200b6d(%rip),%rax        # 600ff8 <__gmon_start__>
  40048b:	48 85 c0             	test   %rax,%rax
  40048e:	74 05                	je     400495 <_init+0x15>
  400490:	e8 5b 00 00 00       	call   4004f0 <__gmon_start__@plt>
  400495:	48 83 c4 08          	add    $0x8,%rsp
  400499:	c3                   	ret    

00000000004004a0 <.plt>:
  4004a0:	ff 35 62 0b 20 00    	push   0x200b62(%rip)        # 601008 <_GLOBAL_OFFSET_TABLE_+0x8>
  4004a6:	ff 25 64 0b 20 00    	jmp    *0x200b64(%rip)        # 601010 <_GLOBAL_OFFSET_TABLE_+0x10>
  4004ac:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004004b0 <puts@plt>:
  4004b0:	ff 25 62 0b 20 00    	jmp    *0x200b62(%rip)        # 601018 <puts@GLIBC_2.2.5>
  4004b6:	68 00 00 00 00       	push   $0x0
  4004bb:	e9 e0 ff ff ff       	jmp    4004a0 <.plt>

00000000004004c0 <strlen@plt>:
  4004c0:	ff 25 5a 0b 20 00    	jmp    *0x200b5a(%rip)        # 601020 <strlen@GLIBC_2.2.5>
  4004c6:	68 01 00 00 00       	push   $0x1
  4004cb:	e9 d0 ff ff ff       	jmp    4004a0 <.plt>

00000000004004d0 <__libc_start_main@plt>:
  4004d0:	ff 25 52 0b 20 00    	jmp    *0x200b52(%rip)        # 601028 <__libc_start_main@GLIBC_2.2.5>
  4004d6:	68 02 00 00 00       	push   $0x2
  4004db:	e9 c0 ff ff ff       	jmp    4004a0 <.plt>

00000000004004e0 <fprintf@plt>:
  4004e0:	ff 25 4a 0b 20 00    	jmp    *0x200b4a(%rip)        # 601030 <fprintf@GLIBC_2.2.5>
  4004e6:	68 03 00 00 00       	push   $0x3
  4004eb:	e9 b0 ff ff ff       	jmp    4004a0 <.plt>

Disassembly of section .plt.got:

00000000004004f0 <__gmon_start__@plt>:
  4004f0:	ff 25 02 0b 20 00    	jmp    *0x200b02(%rip)        # 600ff8 <__gmon_start__>
  4004f6:	66 90                	xchg   %ax,%ax

0000000000400500 <_start>:
  400500:	31 ed                	xor    %ebp,%ebp
  400502:	49 89 d1             	mov    %rdx,%r9
  400505:	5e                   	pop    %rsi
  400506:	48 89 e2             	mov    %rsp,%rdx
  400509:	48 83 e4 f0          	and    $0xfffffffffffffff0,%rsp
  40050d:	50                   	push   %rax
  40050e:	54                   	push   %rsp
  40050f:	49 c7 c0 60 07 40 00 	mov    $0x400760,%r8
  400516:	48 c7 c1 f0 06 40 00 	mov    $0x4006f0,%rcx
  40051d:	48 c7 c7 75 06 40 00 	mov    $0x400675,%rdi
  400524:	e8 a7 ff ff ff       	call   4004d0 <__libc_start_main@plt>
  400529:	f4                   	hlt    
  40052a:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

0000000000400530 <deregister_tm_clones>:
  400530:	b8 4f 10 60 00       	mov    $0x60104f,%eax
  400535:	55                   	push   %rbp
  400536:	48 2d 48 10 60 00    	sub    $0x601048,%rax
  40053c:	48 83 f8 0e          	cmp    $0xe,%rax
  400540:	48 89 e5             	mov    %rsp,%rbp
  400543:	76 1b                	jbe    400560 <deregister_tm_clones+0x30>
  400545:	b8 00 00 00 00       	mov    $0x0,%eax
  40054a:	48 85 c0             	test   %rax,%rax
  40054d:	74 11                	je     400560 <deregister_tm_clones+0x30>
  40054f:	5d                   	pop    %rbp
  400550:	bf 48 10 60 00       	mov    $0x601048,%edi
  400555:	ff e0                	jmp    *%rax
  400557:	66 0f 1f 84 00 00 00 	nopw   0x0(%rax,%rax,1)
  40055e:	00 00 
  400560:	5d                   	pop    %rbp
  400561:	c3                   	ret    
  400562:	0f 1f 40 00          	nopl   0x0(%rax)
  400566:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
  40056d:	00 00 00 

0000000000400570 <register_tm_clones>:
  400570:	be 48 10 60 00       	mov    $0x601048,%esi
  400575:	55                   	push   %rbp
  400576:	48 81 ee 48 10 60 00 	sub    $0x601048,%rsi
  40057d:	48 c1 fe 03          	sar    $0x3,%rsi
  400581:	48 89 e5             	mov    %rsp,%rbp
  400584:	48 89 f0             	mov    %rsi,%rax
  400587:	48 c1 e8 3f          	shr    $0x3f,%rax
  40058b:	48 01 c6             	add    %rax,%rsi
  40058e:	48 d1 fe             	sar    %rsi
  400591:	74 15                	je     4005a8 <register_tm_clones+0x38>
  400593:	b8 00 00 00 00       	mov    $0x0,%eax
  400598:	48 85 c0             	test   %rax,%rax
  40059b:	74 0b                	je     4005a8 <register_tm_clones+0x38>
  40059d:	5d                   	pop    %rbp
  40059e:	bf 48 10 60 00       	mov    $0x601048,%edi
  4005a3:	ff e0                	jmp    *%rax
  4005a5:	0f 1f 00             	nopl   (%rax)
  4005a8:	5d                   	pop    %rbp
  4005a9:	c3                   	ret    
  4005aa:	66 0f 1f 44 00 00    	nopw   0x0(%rax,%rax,1)

00000000004005b0 <__do_global_dtors_aux>:
  4005b0:	80 3d b1 0a 20 00 00 	cmpb   $0x0,0x200ab1(%rip)        # 601068 <completed.7585>
  4005b7:	75 11                	jne    4005ca <__do_global_dtors_aux+0x1a>
  4005b9:	55                   	push   %rbp
  4005ba:	48 89 e5             	mov    %rsp,%rbp
  4005bd:	e8 6e ff ff ff       	call   400530 <deregister_tm_clones>
  4005c2:	5d                   	pop    %rbp
  4005c3:	c6 05 9e 0a 20 00 01 	movb   $0x1,0x200a9e(%rip)        # 601068 <completed.7585>
  4005ca:	f3 c3                	repz ret 
  4005cc:	0f 1f 40 00          	nopl   0x0(%rax)

00000000004005d0 <frame_dummy>:
  4005d0:	bf 20 0e 60 00       	mov    $0x600e20,%edi
  4005d5:	48 83 3f 00          	cmpq   $0x0,(%rdi)
  4005d9:	75 05                	jne    4005e0 <frame_dummy+0x10>
  4005db:	eb 93                	jmp    400570 <register_tm_clones>
  4005dd:	0f 1f 00             	nopl   (%rax)
  4005e0:	b8 00 00 00 00       	mov    $0x0,%eax
  4005e5:	48 85 c0             	test   %rax,%rax
  4005e8:	74 f1                	je     4005db <frame_dummy+0xb>
  4005ea:	55                   	push   %rbp
  4005eb:	48 89 e5             	mov    %rsp,%rbp
  4005ee:	ff d0                	call   *%rax
  4005f0:	5d                   	pop    %rbp
  4005f1:	e9 7a ff ff ff       	jmp    400570 <register_tm_clones>

00000000004005f6 <check_password>:
  4005f6:	55                   	push   %rbp
  4005f7:	48 89 e5             	mov    %rsp,%rbp
  4005fa:	48 83 ec 20          	sub    $0x20,%rsp
  4005fe:	48 89 7d e8          	mov    %rdi,-0x18(%rbp)
  400602:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  400606:	48 89 c7             	mov    %rax,%rdi
  400609:	e8 b2 fe ff ff       	call   4004c0 <strlen@plt>
  40060e:	48 83 f8 04          	cmp    $0x4,%rax
  400612:	74 07                	je     40061b <check_password+0x25>
  400614:	b8 00 00 00 00       	mov    $0x0,%eax
  400619:	eb 58                	jmp    400673 <check_password+0x7d>
  40061b:	c7 45 fc 48 6f 6c 04 	movl   $0x46c6f48,-0x4(%rbp)
  400622:	c6 45 fb ff          	movb   $0xff,-0x5(%rbp)
  400626:	c6 45 fa 00          	movb   $0x0,-0x6(%rbp)
  40062a:	eb 3c                	jmp    400668 <check_password+0x72>
  40062c:	0f b6 55 fa          	movzbl -0x6(%rbp),%edx
  400630:	48 8b 45 e8          	mov    -0x18(%rbp),%rax
  400634:	48 01 d0             	add    %rdx,%rax
  400637:	0f b6 00             	movzbl (%rax),%eax
  40063a:	0f b6 c0             	movzbl %al,%eax
  40063d:	0f b6 55 fa          	movzbl -0x6(%rbp),%edx
  400641:	c1 e2 03             	shl    $0x3,%edx
  400644:	8b 75 fc             	mov    -0x4(%rbp),%esi
  400647:	89 d1                	mov    %edx,%ecx
  400649:	d3 ee                	shr    %cl,%esi
  40064b:	89 f1                	mov    %esi,%ecx
  40064d:	0f b6 55 fb          	movzbl -0x5(%rbp),%edx
  400651:	21 ca                	and    %ecx,%edx
  400653:	39 d0                	cmp    %edx,%eax
  400655:	74 07                	je     40065e <check_password+0x68>
  400657:	b8 00 00 00 00       	mov    $0x0,%eax
  40065c:	eb 15                	jmp    400673 <check_password+0x7d>
  40065e:	0f b6 45 fa          	movzbl -0x6(%rbp),%eax
  400662:	83 c0 01             	add    $0x1,%eax
  400665:	88 45 fa             	mov    %al,-0x6(%rbp)
  400668:	80 7d fa 03          	cmpb   $0x3,-0x6(%rbp)
  40066c:	76 be                	jbe    40062c <check_password+0x36>
  40066e:	b8 01 00 00 00       	mov    $0x1,%eax
  400673:	c9                   	leave  
  400674:	c3                   	ret    

0000000000400675 <main>:
  400675:	55                   	push   %rbp
  400676:	48 89 e5             	mov    %rsp,%rbp
  400679:	48 83 ec 20          	sub    $0x20,%rsp
  40067d:	89 7d ec             	mov    %edi,-0x14(%rbp)
  400680:	48 89 75 e0          	mov    %rsi,-0x20(%rbp)
  400684:	83 7d ec 02          	cmpl   $0x2,-0x14(%rbp)
  					
  					mov rax, 1
  					mov rdi, 1
  					mov rsi, message
  					mov rdx, 13
  					syscall

					mov rax, 60
					xor rdi, rdi
					syscall
  
  400688:	74 27                	je     4006b1 <main+0x3c>
  40068a:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  40068e:	48 8b 10             	mov    (%rax),%rdx
  400691:	48 8b 05 c8 09 20 00 	mov    0x2009c8(%rip),%rax        # 601060 <stderr@GLIBC_2.2.5>
  400698:	be 74 07 40 00       	mov    $0x400774,%esi
  40069d:	48 89 c7             	mov    %rax,%rdi
  4006a0:	b8 00 00 00 00       	mov    $0x0,%eax
  4006a5:	e8 36 fe ff ff       	call   4004e0 <fprintf@plt>
  4006aa:	b8 01 00 00 00       	mov    $0x1,%eax
  4006af:	eb 3c                	jmp    4006ed <main+0x78>
  4006b1:	48 8b 45 e0          	mov    -0x20(%rbp),%rax
  4006b5:	48 83 c0 08          	add    $0x8,%rax
  4006b9:	48 8b 00             	mov    (%rax),%rax
  4006bc:	48 89 c7             	mov    %rax,%rdi
  4006bf:	e8 32 ff ff ff       	call   4005f6 <check_password>
  4006c4:	89 45 fc             	mov    %eax,-0x4(%rbp)
  4006c7:	83 7d fc 01          	cmpl   $0x1,-0x4(%rbp)
  4006cb:	75 11                	jne    4006de <main+0x69>
  4006cd:	bf 88 07 40 00       	mov    $0x400788,%edi
  4006d2:	e8 d9 fd ff ff       	call   4004b0 <puts@plt>
  4006d7:	b8 00 00 00 00       	mov    $0x0,%eax
  4006dc:	eb 0f                	jmp    4006ed <main+0x78>
  4006de:	bf 99 07 40 00       	mov    $0x400799,%edi
  4006e3:	e8 c8 fd ff ff       	call   4004b0 <puts@plt>
  4006e8:	b8 01 00 00 00       	mov    $0x1,%eax
  4006ed:	c9                   	leave  
  4006ee:	c3                   	ret    
  4006ef:	90                   	nop

00000000004006f0 <__libc_csu_init>:
  4006f0:	41 57                	push   %r15
  4006f2:	41 56                	push   %r14
  4006f4:	41 89 ff             	mov    %edi,%r15d
  4006f7:	41 55                	push   %r13
  4006f9:	41 54                	push   %r12
  4006fb:	4c 8d 25 0e 07 20 00 	lea    0x20070e(%rip),%r12        # 600e10 <__frame_dummy_init_array_entry>
  400702:	55                   	push   %rbp
  400703:	48 8d 2d 0e 07 20 00 	lea    0x20070e(%rip),%rbp        # 600e18 <__do_global_dtors_aux_fini_array_entry>
  40070a:	53                   	push   %rbx
  40070b:	49 89 f6             	mov    %rsi,%r14
  40070e:	49 89 d5             	mov    %rdx,%r13
  400711:	4c 29 e5             	sub    %r12,%rbp
  400714:	48 83 ec 08          	sub    $0x8,%rsp
  400718:	48 c1 fd 03          	sar    $0x3,%rbp
  40071c:	e8 5f fd ff ff       	call   400480 <_init>
  400721:	48 85 ed             	test   %rbp,%rbp
  400724:	74 20                	je     400746 <__libc_csu_init+0x56>
  400726:	31 db                	xor    %ebx,%ebx
  400728:	0f 1f 84 00 00 00 00 	nopl   0x0(%rax,%rax,1)
  40072f:	00 
  400730:	4c 89 ea             	mov    %r13,%rdx
  400733:	4c 89 f6             	mov    %r14,%rsi
  400736:	44 89 ff             	mov    %r15d,%edi
  400739:	41 ff 14 dc          	call   *(%r12,%rbx,8)
  40073d:	48 83 c3 01          	add    $0x1,%rbx
  400741:	48 39 eb             	cmp    %rbp,%rbx
  400744:	75 ea                	jne    400730 <__libc_csu_init+0x40>
  400746:	48 83 c4 08          	add    $0x8,%rsp
  40074a:	5b                   	pop    %rbx
  40074b:	5d                   	pop    %rbp
  40074c:	41 5c                	pop    %r12
  40074e:	41 5d                	pop    %r13
  400750:	41 5e                	pop    %r14
  400752:	41 5f                	pop    %r15
  400754:	c3                   	ret    
  400755:	90                   	nop
  400756:	66 2e 0f 1f 84 00 00 	cs nopw 0x0(%rax,%rax,1)
  40075d:	00 00 00 

0000000000400760 <__libc_csu_fini>:
  400760:	f3 c3                	repz ret 

0000000000400764 <_fini>:
  400764:	48 83 ec 08          	sub    $0x8,%rsp
  400768:	48 83 c4 08          	add    $0x8,%rsp
  40076c:	c3                   	ret    
