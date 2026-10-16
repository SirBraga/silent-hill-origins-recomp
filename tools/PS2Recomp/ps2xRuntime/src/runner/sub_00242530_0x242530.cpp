#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00242530
// Address: 0x242530 - 0x2428d0
void sub_00242530_0x242530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00242530_0x242530");
#endif

    switch (ctx->pc) {
        case 0x2427a0u: goto label_2427a0;
        case 0x2427e0u: goto label_2427e0;
        case 0x24289cu: goto label_24289c;
        default: break;
    }

    ctx->pc = 0x242530u;

    // 0x242530: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x242530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x242534: 0x3409d81a  ori         $t1, $zero, 0xD81A
    ctx->pc = 0x242534u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55322);
    // 0x242538: 0x94d78  dsll        $t1, $t1, 21
    ctx->pc = 0x242538u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 21);
    // 0x24253c: 0x3529fc00  ori         $t1, $t1, 0xFC00
    ctx->pc = 0x24253cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)64512);
    // 0x242540: 0x94eb8  dsll        $t1, $t1, 26
    ctx->pc = 0x242540u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 26);
    // 0x242544: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x242544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x242548: 0x3c02005c  lui         $v0, 0x5C
    ctx->pc = 0x242548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)92 << 16));
    // 0x24254c: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x24254cu;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x242550: 0x37de000d  ori         $fp, $fp, 0xD
    ctx->pc = 0x242550u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)13);
    // 0x242554: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x242554u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x242558: 0x713e4389  pcpyld      $t0, $t1, $fp
    ctx->pc = 0x242558u;
    SET_GPR_VEC(ctx, 8, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 30)));
    // 0x24255c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x24255cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x242560: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x242560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x242564: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x242564u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x242568: 0x37de0003  ori         $fp, $fp, 0x3
    ctx->pc = 0x242568u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)3);
    // 0x24256c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x24256cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x242570: 0x3409d806  ori         $t1, $zero, 0xD806
    ctx->pc = 0x242570u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55302);
    // 0x242574: 0x94d78  dsll        $t1, $t1, 21
    ctx->pc = 0x242574u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 21);
    // 0x242578: 0x3529fe40  ori         $t1, $t1, 0xFE40
    ctx->pc = 0x242578u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65088);
    // 0x24257c: 0x94eb8  dsll        $t1, $t1, 26
    ctx->pc = 0x24257cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 26);
    // 0x242580: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x242580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x242584: 0x24421110  addiu       $v0, $v0, 0x1110
    ctx->pc = 0x242584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4368));
    // 0x242588: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x242588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x24258c: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x24258cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x242590: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x242590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x242594: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x242594u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242598: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x242598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x24259c: 0x713e3b89  pcpyld      $a3, $t1, $fp
    ctx->pc = 0x24259cu;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 30)));
    // 0x2425a0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2425a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2425a4: 0x24841100  addiu       $a0, $a0, 0x1100
    ctx->pc = 0x2425a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4352));
    // 0x2425a8: 0x7c480000  sq          $t0, 0x0($v0)
    ctx->pc = 0x2425a8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 8));
    // 0x2425ac: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x2425acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x2425b0: 0x7c870000  sq          $a3, 0x0($a0)
    ctx->pc = 0x2425b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 7));
    // 0x2425b4: 0x70633389  pcpyld      $a2, $v1, $v1
    ctx->pc = 0x2425b4u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x2425b8: 0x24a51000  addiu       $a1, $a1, 0x1000
    ctx->pc = 0x2425b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4096));
    // 0x2425bc: 0x3c0144ff  lui         $at, 0x44FF
    ctx->pc = 0x2425bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17663 << 16));
    // 0x2425c0: 0x3421fdff  ori         $at, $at, 0xFDFF
    ctx->pc = 0x2425c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65023);
    // 0x2425c4: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x2425c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2425c8: 0x7ca60000  sq          $a2, 0x0($a1)
    ctx->pc = 0x2425c8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 6));
    // 0x2425cc: 0x3c0f005c  lui         $t7, 0x5C
    ctx->pc = 0x2425ccu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)92 << 16));
    // 0x2425d0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x2425d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x2425d4: 0x8ca53498  lw          $a1, 0x3498($a1)
    ctx->pc = 0x2425d4u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6B3498u));
    // 0x2425d8: 0x341ec001  ori         $fp, $zero, 0xC001
    ctx->pc = 0x2425d8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49153);
    // 0x2425dc: 0x1ef3bc  dsll32      $fp, $fp, 14
    ctx->pc = 0x2425dcu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << (32 + 14));
    // 0x2425e0: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x2425e0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x2425e4: 0x24090412  addiu       $t1, $zero, 0x412
    ctx->pc = 0x2425e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x2425e8: 0x3c0e005c  lui         $t6, 0x5C
    ctx->pc = 0x2425e8u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)92 << 16));
    // 0x2425ec: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x2425ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2425f0: 0x713ec389  pcpyld      $t8, $t1, $fp
    ctx->pc = 0x2425f0u;
    SET_GPR_VEC(ctx, 24, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 30)));
    // 0x2425f4: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x2425f4u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x2425f8: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x2425f8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x2425fc: 0x3c0c005c  lui         $t4, 0x5C
    ctx->pc = 0x2425fcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)92 << 16));
    // 0x242600: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x242600u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x242604: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x242604u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x242608: 0x0  nop
    ctx->pc = 0x242608u;
    // NOP
    // 0x24260c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x24260cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x242610: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x242610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x242614: 0x0  nop
    ctx->pc = 0x242614u;
    // NOP
    // 0x242618: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x242618u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x24261c: 0x707ebb89  pcpyld      $s7, $v1, $fp
    ctx->pc = 0x24261cu;
    SET_GPR_VEC(ctx, 23, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x242620: 0x3c1e6000  lui         $fp, 0x6000
    ctx->pc = 0x242620u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)24576 << 16));
    // 0x242624: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x242624u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x242628: 0x25ce0f90  addiu       $t6, $t6, 0xF90
    ctx->pc = 0x242628u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 3984));
    // 0x24262c: 0x707eb389  pcpyld      $s6, $v1, $fp
    ctx->pc = 0x24262cu;
    SET_GPR_VEC(ctx, 22, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x242630: 0x3c0a005c  lui         $t2, 0x5C
    ctx->pc = 0x242630u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)92 << 16));
    // 0x242634: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x242634u;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
    // 0x242638: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x242638u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x24263c: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x24263cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x242640: 0x707ea389  pcpyld      $s4, $v1, $fp
    ctx->pc = 0x242640u;
    SET_GPR_VEC(ctx, 20, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x242644: 0x258c0f60  addiu       $t4, $t4, 0xF60
    ctx->pc = 0x242644u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 3936));
    // 0x242648: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x242648u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x24264c: 0x37de000a  ori         $fp, $fp, 0xA
    ctx->pc = 0x24264cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)10);
    // 0x242650: 0x254a0f80  addiu       $t2, $t2, 0xF80
    ctx->pc = 0x242650u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 3968));
    // 0x242654: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x242654u;
    ctx->f[1] = FPU_DIV_S(ctx, ctx->f[1], ctx->f[0]);
    // 0x242658: 0x707eab89  pcpyld      $s5, $v1, $fp
    ctx->pc = 0x242658u;
    SET_GPR_VEC(ctx, 21, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x24265c: 0x341ea800  ori         $fp, $zero, 0xA800
    ctx->pc = 0x24265cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)43008);
    // 0x242660: 0x1ef03c  dsll32      $fp, $fp, 0
    ctx->pc = 0x242660u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << (32 + 0));
    // 0x242664: 0x37de8800  ori         $fp, $fp, 0x8800
    ctx->pc = 0x242664u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)34816);
    // 0x242668: 0x1ef378  dsll        $fp, $fp, 13
    ctx->pc = 0x242668u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 13);
    // 0x24266c: 0x3c09005c  lui         $t1, 0x5C
    ctx->pc = 0x24266cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)92 << 16));
    // 0x242670: 0x707e9b89  pcpyld      $s3, $v1, $fp
    ctx->pc = 0x242670u;
    SET_GPR_VEC(ctx, 19, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x242674: 0x25290f70  addiu       $t1, $t1, 0xF70
    ctx->pc = 0x242674u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 3952));
    // 0x242678: 0x341eb800  ori         $fp, $zero, 0xB800
    ctx->pc = 0x242678u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)47104);
    // 0x24267c: 0x1ef03c  dsll32      $fp, $fp, 0
    ctx->pc = 0x24267cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << (32 + 0));
    // 0x242680: 0x37de8000  ori         $fp, $fp, 0x8000
    ctx->pc = 0x242680u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32768);
    // 0x242684: 0x1ef378  dsll        $fp, $fp, 13
    ctx->pc = 0x242684u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 13);
    // 0x242688: 0x3c0d005c  lui         $t5, 0x5C
    ctx->pc = 0x242688u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)92 << 16));
    // 0x24268c: 0x707e9389  pcpyld      $s2, $v1, $fp
    ctx->pc = 0x24268cu;
    SET_GPR_VEC(ctx, 18, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x242690: 0x3c0b005c  lui         $t3, 0x5C
    ctx->pc = 0x242690u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)92 << 16));
    // 0x242694: 0x3c1e1100  lui         $fp, 0x1100
    ctx->pc = 0x242694u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4352 << 16));
    // 0x242698: 0x25ad0f50  addiu       $t5, $t5, 0xF50
    ctx->pc = 0x242698u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 3920));
    // 0x24269c: 0xe5e11070  swc1        $f1, 0x1070($t7)
    ctx->pc = 0x24269cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4208), bits); }
    // 0x2426a0: 0x73c38b89  pcpyld      $s1, $fp, $v1
    ctx->pc = 0x2426a0u;
    SET_GPR_VEC(ctx, 17, PS2_PCPYLD(GPR_VEC(ctx, 30), GPR_VEC(ctx, 3)));
    // 0x2426a4: 0x25ef1070  addiu       $t7, $t7, 0x1070
    ctx->pc = 0x2426a4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4208));
    // 0x2426a8: 0x3c07005c  lui         $a3, 0x5C
    ctx->pc = 0x2426a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)92 << 16));
    // 0x2426ac: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2426acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2426b0: 0x256b0fe0  addiu       $t3, $t3, 0xFE0
    ctx->pc = 0x2426b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4064));
    // 0x2426b4: 0x7dd80000  sq          $t8, 0x0($t6)
    ctx->pc = 0x2426b4u;
    WRITE128(ADD32(GPR_U32(ctx, 14), 0), GPR_VEC(ctx, 24));
    // 0x2426b8: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x2426b8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x2426bc: 0x41043  sra         $v0, $a0, 1
    ctx->pc = 0x2426bcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 4), 1));
    // 0x2426c0: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x2426c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2426c4: 0x0  nop
    ctx->pc = 0x2426c4u;
    // NOP
    // 0x2426c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2426c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x2426cc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2426ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2426d0: 0x0  nop
    ctx->pc = 0x2426d0u;
    // NOP
    // 0x2426d4: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x2426d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x2426d8: 0x7d970000  sq          $s7, 0x0($t4)
    ctx->pc = 0x2426d8u;
    WRITE128(ADD32(GPR_U32(ctx, 12), 0), GPR_VEC(ctx, 23));
    // 0x2426dc: 0x7d560000  sq          $s6, 0x0($t2)
    ctx->pc = 0x2426dcu;
    WRITE128(ADD32(GPR_U32(ctx, 10), 0), GPR_VEC(ctx, 22));
    // 0x2426e0: 0x3c08005c  lui         $t0, 0x5C
    ctx->pc = 0x2426e0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)92 << 16));
    // 0x2426e4: 0x7d340000  sq          $s4, 0x0($t1)
    ctx->pc = 0x2426e4u;
    WRITE128(ADD32(GPR_U32(ctx, 9), 0), GPR_VEC(ctx, 20));
    // 0x2426e8: 0x24e70f40  addiu       $a3, $a3, 0xF40
    ctx->pc = 0x2426e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3904));
    // 0x2426ec: 0x46011081  sub.s       $f2, $f2, $f1
    ctx->pc = 0x2426ecu;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
    // 0x2426f0: 0x707e8389  pcpyld      $s0, $v1, $fp
    ctx->pc = 0x2426f0u;
    SET_GPR_VEC(ctx, 16, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x2426f4: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x2426f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
    // 0x2426f8: 0x250810c0  addiu       $t0, $t0, 0x10C0
    ctx->pc = 0x2426f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4288));
    // 0x2426fc: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x2426fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x242700: 0x341e8000  ori         $fp, $zero, 0x8000
    ctx->pc = 0x242700u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x242704: 0x1ef478  dsll        $fp, $fp, 17
    ctx->pc = 0x242704u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 17);
    // 0x242708: 0x37def081  ori         $fp, $fp, 0xF081
    ctx->pc = 0x242708u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)61569);
    // 0x24270c: 0x1ef438  dsll        $fp, $fp, 16
    ctx->pc = 0x24270cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 16);
    // 0x242710: 0x37de8000  ori         $fp, $fp, 0x8000
    ctx->pc = 0x242710u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)32768);
    // 0x242714: 0x1ef278  dsll        $fp, $fp, 9
    ctx->pc = 0x242714u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 9);
    // 0x242718: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x242718u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[2]);
    // 0x24271c: 0x3c05005c  lui         $a1, 0x5C
    ctx->pc = 0x24271cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)92 << 16));
    // 0x242720: 0x24c610d0  addiu       $a2, $a2, 0x10D0
    ctx->pc = 0x242720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4304));
    // 0x242724: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x242724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x242728: 0x34218312  ori         $at, $at, 0x8312
    ctx->pc = 0x242728u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)33554);
    // 0x24272c: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x24272cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x242730: 0x248210f0  addiu       $v0, $a0, 0x10F0
    ctx->pc = 0x242730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4336));
    // 0x242734: 0x3c19005c  lui         $t9, 0x5C
    ctx->pc = 0x242734u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)92 << 16));
    // 0x242738: 0x707e1b89  pcpyld      $v1, $v1, $fp
    ctx->pc = 0x242738u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x24273c: 0x24a510b0  addiu       $a1, $a1, 0x10B0
    ctx->pc = 0x24273cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4272));
    // 0x242740: 0x272410e0  addiu       $a0, $t9, 0x10E0
    ctx->pc = 0x242740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 25), 4320));
    // 0x242744: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x242744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x242748: 0x34210149  ori         $at, $at, 0x149
    ctx->pc = 0x242748u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)329);
    // 0x24274c: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x24274cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x242750: 0x3c0a005c  lui         $t2, 0x5C
    ctx->pc = 0x242750u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)92 << 16));
    // 0x242754: 0x2409000c  addiu       $t1, $zero, 0xC
    ctx->pc = 0x242754u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x242758: 0xe5e00004  swc1        $f0, 0x4($t7)
    ctx->pc = 0x242758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 15), 4), bits); }
    // 0x24275c: 0x7db50000  sq          $s5, 0x0($t5)
    ctx->pc = 0x24275cu;
    WRITE128(ADD32(GPR_U32(ctx, 13), 0), GPR_VEC(ctx, 21));
    // 0x242760: 0x7d730000  sq          $s3, 0x0($t3)
    ctx->pc = 0x242760u;
    WRITE128(ADD32(GPR_U32(ctx, 11), 0), GPR_VEC(ctx, 19));
    // 0x242764: 0x7cf20000  sq          $s2, 0x0($a3)
    ctx->pc = 0x242764u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 18));
    // 0x242768: 0x7d110000  sq          $s1, 0x0($t0)
    ctx->pc = 0x242768u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 17));
    // 0x24276c: 0x7cd00000  sq          $s0, 0x0($a2)
    ctx->pc = 0x24276cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 16));
    // 0x242770: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x242770u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x242774: 0xe483000c  swc1        $f3, 0xC($a0)
    ctx->pc = 0x242774u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
    // 0x242778: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x242778u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x24277c: 0xe46310f0  swc1        $f3, 0x10F0($v1)
    ctx->pc = 0x24277cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5C10F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5C10F0u, _value); } while (0); }
    // 0x242780: 0xe443000c  swc1        $f3, 0xC($v0)
    ctx->pc = 0x242780u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x242784: 0xe72410e0  swc1        $f4, 0x10E0($t9)
    ctx->pc = 0x242784u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4320), bits); }
    // 0x242788: 0xe4840008  swc1        $f4, 0x8($a0)
    ctx->pc = 0x242788u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x24278c: 0xe4430004  swc1        $f3, 0x4($v0)
    ctx->pc = 0x24278cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x242790: 0xe4430008  swc1        $f3, 0x8($v0)
    ctx->pc = 0x242790u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x242794: 0xe4840004  swc1        $f4, 0x4($a0)
    ctx->pc = 0x242794u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x242798: 0xaf8084fc  sw          $zero, -0x7B04($gp)
    ctx->pc = 0x242798u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935804), GPR_U32(ctx, 0));
    // 0x24279c: 0x0  nop
    ctx->pc = 0x24279cu;
    // NOP
label_2427a0:
    // 0x2427a0: 0x8f8684fc  lw          $a2, -0x7B04($gp)
    ctx->pc = 0x2427a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935804)));
    // 0x2427a4: 0x24c40001  addiu       $a0, $a2, 0x1
    ctx->pc = 0x2427a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x2427a8: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x2427a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x2427ac: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x2427acu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2427b0: 0x892818  mult        $a1, $a0, $t1
    ctx->pc = 0x2427b0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2427b4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2427b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2427b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2427b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2427bc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2427bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x2427c0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2427c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x2427c4: 0x2c4201ff  sltiu       $v0, $v0, 0x1FF
    ctx->pc = 0x2427c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)511) ? 1 : 0);
    // 0x2427c8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x2427C8u;
    {
        const bool branch_taken_0x2427c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2427CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2427C8u;
        // 0x2427cc: 0xaf8484fc  sw          $a0, -0x7B04($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935804), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2427c8) {
            ctx->pc = 0x2427A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2427a0;
        }
    }
    ctx->pc = 0x2427D0u;
    // 0x2427d0: 0xaf8684fc  sw          $a2, -0x7B04($gp)
    ctx->pc = 0x2427d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935804), GPR_U32(ctx, 6));
    // 0x2427d4: 0xaf8084f8  sw          $zero, -0x7B08($gp)
    ctx->pc = 0x2427d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935800), GPR_U32(ctx, 0));
    // 0x2427d8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2427d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2427dc: 0x0  nop
    ctx->pc = 0x2427dcu;
    // NOP
label_2427e0:
    // 0x2427e0: 0x8f8884f8  lw          $t0, -0x7B08($gp)
    ctx->pc = 0x2427e0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935800)));
    // 0x2427e4: 0x25040001  addiu       $a0, $t0, 0x1
    ctx->pc = 0x2427e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2427e8: 0x25030010  addiu       $v1, $t0, 0x10
    ctx->pc = 0x2427e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x2427ec: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x2427ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2427f0: 0x862818  mult        $a1, $a0, $a2
    ctx->pc = 0x2427f0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
    // 0x2427f4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x2427f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2427f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2427f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2427fc: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x2427fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x242800: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x242800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x242804: 0x2c4201ff  sltiu       $v0, $v0, 0x1FF
    ctx->pc = 0x242804u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)511) ? 1 : 0);
    // 0x242808: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x242808u;
    {
        const bool branch_taken_0x242808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24280Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x242808u;
        // 0x24280c: 0xaf8484f8  sw          $a0, -0x7B08($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935800), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242808) {
            ctx->pc = 0x2427E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2427e0;
        }
    }
    ctx->pc = 0x242810u;
    // 0x242810: 0x341e8800  ori         $fp, $zero, 0x8800
    ctx->pc = 0x242810u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34816);
    // 0x242814: 0x1ef03c  dsll32      $fp, $fp, 0
    ctx->pc = 0x242814u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << (32 + 0));
    // 0x242818: 0x37de8800  ori         $fp, $fp, 0x8800
    ctx->pc = 0x242818u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)34816);
    // 0x24281c: 0x1ef378  dsll        $fp, $fp, 13
    ctx->pc = 0x24281cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) << 13);
    // 0x242820: 0x3c091100  lui         $t1, 0x1100
    ctx->pc = 0x242820u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4352 << 16));
    // 0x242824: 0x713e2b89  pcpyld      $a1, $t1, $fp
    ctx->pc = 0x242824u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 30)));
    // 0x242828: 0x3c04005c  lui         $a0, 0x5C
    ctx->pc = 0x242828u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)92 << 16));
    // 0x24282c: 0x24840fb0  addiu       $a0, $a0, 0xFB0
    ctx->pc = 0x24282cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4016));
    // 0x242830: 0x3c1e1100  lui         $fp, 0x1100
    ctx->pc = 0x242830u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4352 << 16));
    // 0x242834: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x242834u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x242838: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x242838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x24283c: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x24283cu;
    do { __m128i _value = (GPR_VEC(ctx, 5)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5C0FB0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5C0FB0u, _value); } while (0);
    // 0x242840: 0x713e3b89  pcpyld      $a3, $t1, $fp
    ctx->pc = 0x242840u;
    SET_GPR_VEC(ctx, 7, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 30)));
    // 0x242844: 0x24630ff0  addiu       $v1, $v1, 0xFF0
    ctx->pc = 0x242844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4080));
    // 0x242848: 0x3c1e1000  lui         $fp, 0x1000
    ctx->pc = 0x242848u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)4096 << 16));
    // 0x24284c: 0x37de0001  ori         $fp, $fp, 0x1
    ctx->pc = 0x24284cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)1);
    // 0x242850: 0x7c670000  sq          $a3, 0x0($v1)
    ctx->pc = 0x242850u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 7));
    // 0x242854: 0x3409d802  ori         $t1, $zero, 0xD802
    ctx->pc = 0x242854u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)55298);
    // 0x242858: 0x94d78  dsll        $t1, $t1, 21
    ctx->pc = 0x242858u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 21);
    // 0x24285c: 0x3529f500  ori         $t1, $t1, 0xF500
    ctx->pc = 0x24285cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)62720);
    // 0x242860: 0x94c78  dsll        $t1, $t1, 17
    ctx->pc = 0x242860u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 17);
    // 0x242864: 0x35298002  ori         $t1, $t1, 0x8002
    ctx->pc = 0x242864u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32770);
    // 0x242868: 0x94a78  dsll        $t1, $t1, 9
    ctx->pc = 0x242868u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << 9);
    // 0x24286c: 0x35290004  ori         $t1, $t1, 0x4
    ctx->pc = 0x24286cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)4);
    // 0x242870: 0x25420fd0  addiu       $v0, $t2, 0xFD0
    ctx->pc = 0x242870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), 4048));
    // 0x242874: 0xaf8884f8  sw          $t0, -0x7B08($gp)
    ctx->pc = 0x242874u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935800), GPR_U32(ctx, 8));
    // 0x242878: 0xad400fd0  sw          $zero, 0xFD0($t2)
    ctx->pc = 0x242878u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4048), GPR_U32(ctx, 0));
    // 0x24287c: 0x713e3389  pcpyld      $a2, $t1, $fp
    ctx->pc = 0x24287cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 9), GPR_VEC(ctx, 30)));
    // 0x242880: 0x2445008f  addiu       $a1, $v0, 0x8F
    ctx->pc = 0x242880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 143));
    // 0x242884: 0x2444fff0  addiu       $a0, $v0, -0x10
    ctx->pc = 0x242884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x242888: 0x7c46fff0  sq          $a2, -0x10($v0)
    ctx->pc = 0x242888u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 4294967280), GPR_VEC(ctx, 6));
    // 0x24288c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x24288cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x242890: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x242890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
    // 0x242894: 0xc0c86e4  jal         func_321B90
    ctx->pc = 0x242894u;
    SET_GPR_U32(ctx, 31, 0x24289Cu);
    ctx->pc = 0x242898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x242894u;
    // 0x242898: 0xac40000c  sw          $zero, 0xC($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321B90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321B90u, 0x242894u, 0x24289Cu)) {
        return;
    }
    ctx->pc = 0x24289Cu;
label_24289c:
    // 0x24289c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x24289cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2428a0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2428a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2428a4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2428a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2428a8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2428a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2428ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2428acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2428b0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2428b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2428b4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2428b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2428b8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2428b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2428bc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2428bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2428c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2428c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2428c4: 0x3e00008  jr          $ra
    ctx->pc = 0x2428C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2428C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2428C4u;
        // 0x2428c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2428C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2428CCu;
    // 0x2428cc: 0x0  nop
    ctx->pc = 0x2428ccu;
    // NOP
    ctx->pc = 0x2428d0u;
}
