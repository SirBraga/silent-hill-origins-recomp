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

// Function: sub_00262880
// Address: 0x262880 - 0x263260
void sub_00262880_0x262880(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00262880_0x262880");
#endif

    switch (ctx->pc) {
        case 0x2629b8u: goto label_2629b8;
        case 0x262a00u: goto label_262a00;
        case 0x262ae8u: goto label_262ae8;
        case 0x262b30u: goto label_262b30;
        case 0x262c38u: goto label_262c38;
        case 0x262c78u: goto label_262c78;
        case 0x262d78u: goto label_262d78;
        case 0x262db8u: goto label_262db8;
        case 0x262eb0u: goto label_262eb0;
        case 0x262f00u: goto label_262f00;
        case 0x262fa0u: goto label_262fa0;
        case 0x263028u: goto label_263028;
        case 0x263088u: goto label_263088;
        case 0x263110u: goto label_263110;
        case 0x2631b0u: goto label_2631b0;
        case 0x2631e8u: goto label_2631e8;
        default: break;
    }

    ctx->pc = 0x262880u;

    // 0x262880: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x262880u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x262884: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x262884u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x262888: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x262888u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26288c: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x26288cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x262890: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x262890u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x262894: 0x3c040073  lui         $a0, 0x73
    ctx->pc = 0x262894u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)115 << 16));
    // 0x262898: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x262898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x26289c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x26289cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2628a0: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2628a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2628a4: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2628a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2628a8: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x2628a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x2628ac: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x2628acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x2628b0: 0x8c840fcc  lw          $a0, 0xFCC($a0)
    ctx->pc = 0x2628b0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x730FCCu));
    // 0x2628b4: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x2628b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2628b8: 0x8e170008  lw          $s7, 0x8($s0)
    ctx->pc = 0x2628b8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2628bc: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2628bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2628c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2628c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2628c4: 0x244f0018  addiu       $t7, $v0, 0x18
    ctx->pc = 0x2628c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x2628c8: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2628c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2628cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2628ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2628d0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2628d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x2628d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2628D4u;
    {
        const bool branch_taken_0x2628d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2628D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628D4u;
        // 0x2628d8: 0x8dfe000c  lw          $fp, 0xC($t7) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2628d4) {
            ctx->pc = 0x262900u;
            goto label_262900;
        }
    }
    ctx->pc = 0x2628DCu;
    // 0x2628dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2628dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2628e0: 0x2443b838  addiu       $v1, $v0, -0x47C8
    ctx->pc = 0x2628e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948920));
    // 0x2628e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2628e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2628e8: 0x2475000f  addiu       $s5, $v1, 0xF
    ctx->pc = 0x2628e8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x2628ec: 0x90790007  lbu         $t9, 0x7($v1)
    ctx->pc = 0x2628ecu;
    SET_GPR_ZE32(ctx, 25, (uint8_t)FAST_READ8(0x6AB83Fu));
    // 0x2628f0: 0x90760008  lbu         $s6, 0x8($v1)
    ctx->pc = 0x2628f0u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)FAST_READ8(0x6AB840u));
    // 0x2628f4: 0x24730009  addiu       $s3, $v1, 0x9
    ctx->pc = 0x2628f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x2628f8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2628F8u;
    {
        const bool branch_taken_0x2628f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2628FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2628F8u;
        // 0x2628fc: 0x2472000c  addiu       $s2, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2628f8) {
            ctx->pc = 0x262920u;
            goto label_262920;
        }
    }
    ctx->pc = 0x262900u;
label_262900:
    // 0x262900: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x262900u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x262904: 0x2443b838  addiu       $v1, $v0, -0x47C8
    ctx->pc = 0x262904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948920));
    // 0x262908: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x262908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26290c: 0x90790002  lbu         $t9, 0x2($v1)
    ctx->pc = 0x26290cu;
    SET_GPR_ZE32(ctx, 25, (uint8_t)FAST_READ8(0x6AB83Au));
    // 0x262910: 0x24750006  addiu       $s5, $v1, 0x6
    ctx->pc = 0x262910u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x262914: 0x90760003  lbu         $s6, 0x3($v1)
    ctx->pc = 0x262914u;
    SET_GPR_ZE32(ctx, 22, (uint8_t)FAST_READ8(0x6AB83Bu));
    // 0x262918: 0x24730004  addiu       $s3, $v1, 0x4
    ctx->pc = 0x262918u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x26291c: 0x24720005  addiu       $s2, $v1, 0x5
    ctx->pc = 0x26291cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_262920:
    // 0x262920: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x262920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x262924: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x262924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262928: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x262928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26292c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x26292cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x262930: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x262930u;
    {
        const bool branch_taken_0x262930 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262930u;
        // 0x262934: 0x24140002  addiu       $s4, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262930) {
            ctx->pc = 0x262940u;
            goto label_262940;
        }
    }
    ctx->pc = 0x262938u;
    // 0x262938: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x262938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x26293c: 0x2a02b  sltu        $s4, $zero, $v0
    ctx->pc = 0x26293cu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_262940:
    // 0x262940: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x262940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x262944: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x262944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x262948: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x262948u;
    {
        const bool branch_taken_0x262948 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26294Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262948u;
        // 0x26294c: 0x24b8b838  addiu       $t8, $a1, -0x47C8 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262948) {
            ctx->pc = 0x262964u;
            goto label_262964;
        }
    }
    ctx->pc = 0x262950u;
    // 0x262950: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x262950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262954: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x262954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x262958: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x262958u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26295c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26295cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262960: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x262960u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_262964:
    // 0x262964: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x262964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x262968: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x262968u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26296c: 0x50400098  beql        $v0, $zero, . + 4 + (0x98 << 2)
    ctx->pc = 0x26296Cu;
    {
        const bool branch_taken_0x26296c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26296c) {
            ctx->pc = 0x262970u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26296Cu;
            // 0x262970: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262BD0u;
            goto label_262bd0;
        }
    }
    ctx->pc = 0x262974u;
    // 0x262974: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x262974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x262978: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x262978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x26297c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x26297cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x262980: 0x10600044  beqz        $v1, . + 4 + (0x44 << 2)
    ctx->pc = 0x262980u;
    {
        const bool branch_taken_0x262980 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262980u;
        // 0x262984: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262980) {
            ctx->pc = 0x262A94u;
            goto label_262a94;
        }
    }
    ctx->pc = 0x262988u;
    // 0x262988: 0x54400043  bnel        $v0, $zero, . + 4 + (0x43 << 2)
    ctx->pc = 0x262988u;
    {
        const bool branch_taken_0x262988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262988) {
            ctx->pc = 0x26298Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262988u;
            // 0x26298c: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262A98u;
            goto label_262a98;
        }
    }
    ctx->pc = 0x262990u;
    // 0x262990: 0x8de20098  lw          $v0, 0x98($t7)
    ctx->pc = 0x262990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 152)));
    // 0x262994: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x262994u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262998: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x262998u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x26299c: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x26299cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629a0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2629a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2629a4: 0x8ef10008  lw          $s1, 0x8($s7)
    ctx->pc = 0x2629a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x2629a8: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x2629a8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2629ac: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x2629acu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629b0: 0x19800038  blez        $t4, . + 4 + (0x38 << 2)
    ctx->pc = 0x2629B0u;
    {
        const bool branch_taken_0x2629b0 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x2629B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629B0u;
        // 0x2629b4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629b0) {
            ctx->pc = 0x262A94u;
            goto label_262a94;
        }
    }
    ctx->pc = 0x2629B8u;
label_2629b8:
    // 0x2629b8: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x2629b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x2629bc: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x2629bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2629c0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2629C0u;
    {
        const bool branch_taken_0x2629c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2629c0) {
            ctx->pc = 0x2629C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2629C0u;
            // 0x2629c4: 0x8de90090  lw          $t1, 0x90($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2629E4u;
            goto label_2629e4;
        }
    }
    ctx->pc = 0x2629C8u;
    // 0x2629c8: 0x85e200a4  lh          $v0, 0xA4($t7)
    ctx->pc = 0x2629c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 164)));
    // 0x2629cc: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2629ccu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629d0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2629d0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2629d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2629d8: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x2629d8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2629dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2629DCu;
    {
        const bool branch_taken_0x2629dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2629E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629DCu;
        // 0x2629e0: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629dc) {
            ctx->pc = 0x2629ECu;
            goto label_2629ec;
        }
    }
    ctx->pc = 0x2629E4u;
label_2629e4:
    // 0x2629e4: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x2629e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x2629e8: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x2629e8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_2629ec:
    // 0x2629ec: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2629ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2629f0: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2629F0u;
    {
        const bool branch_taken_0x2629f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2629F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2629F0u;
        // 0x2629f4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2629f0) {
            ctx->pc = 0x262A7Cu;
            goto label_262a7c;
        }
    }
    ctx->pc = 0x2629F8u;
    // 0x2629f8: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x2629f8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2629fc: 0x0  nop
    ctx->pc = 0x2629fcu;
    // NOP
label_262a00:
    // 0x262a00: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x262a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x262a04: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x262a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x262a08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x262a08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262a0c: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x262a0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x262a10: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x262a10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x262a14: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x262a14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x262a18: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x262a18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x262a1c: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x262a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x262a20: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x262a20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x262a24: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x262a24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x262a28: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x262a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x262a2c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x262a2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262a30: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x262a30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262a34: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x262a34u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x262a38: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x262a38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x262a3c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x262a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x262a40: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x262a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x262a44: 0x4e1818  mult        $v1, $v0, $t6
    ctx->pc = 0x262a44u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x262a48: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x262a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x262a4c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x262a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262a50: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x262a50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x262a54: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x262a54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x262a58: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x262a58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262a5c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x262a5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x262a60: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x262a60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x262a64: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x262a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262a68: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x262a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x262a6c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x262a6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x262a70: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x262a70u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x262a74: 0x14a0ffe2  bnez        $a1, . + 4 + (-0x1E << 2)
    ctx->pc = 0x262A74u;
    {
        const bool branch_taken_0x262a74 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x262A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A74u;
        // 0x262a78: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a74) {
            ctx->pc = 0x262A00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262a00;
        }
    }
    ctx->pc = 0x262A7Cu;
label_262a7c:
    // 0x262a7c: 0x85e200a0  lh          $v0, 0xA0($t7)
    ctx->pc = 0x262a7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 160)));
    // 0x262a80: 0x1545023  subu        $t2, $t2, $s4
    ctx->pc = 0x262a80u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
    // 0x262a84: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x262a84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x262a88: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x262a88u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x262a8c: 0x1d80ffca  bgtz        $t4, . + 4 + (-0x36 << 2)
    ctx->pc = 0x262A8Cu;
    {
        const bool branch_taken_0x262a8c = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x262A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262A8Cu;
        // 0x262a90: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262a8c) {
            ctx->pc = 0x2629B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2629b8;
        }
    }
    ctx->pc = 0x262A94u;
label_262a94:
    // 0x262a94: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x262a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_262a98:
    // 0x262a98: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x262a98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x262a9c: 0x5040004c  beql        $v0, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x262A9Cu;
    {
        const bool branch_taken_0x262a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262a9c) {
            ctx->pc = 0x262AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262A9Cu;
            // 0x262aa0: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262BD0u;
            goto label_262bd0;
        }
    }
    ctx->pc = 0x262AA4u;
    // 0x262aa4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x262aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x262aa8: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x262aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x262aac: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x262aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x262ab0: 0x10600046  beqz        $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x262AB0u;
    {
        const bool branch_taken_0x262ab0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262AB0u;
        // 0x262ab4: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ab0) {
            ctx->pc = 0x262BCCu;
            goto label_262bcc;
        }
    }
    ctx->pc = 0x262AB8u;
    // 0x262ab8: 0x54400045  bnel        $v0, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x262AB8u;
    {
        const bool branch_taken_0x262ab8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262ab8) {
            ctx->pc = 0x262ABCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262AB8u;
            // 0x262abc: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262BD0u;
            goto label_262bd0;
        }
    }
    ctx->pc = 0x262AC0u;
    // 0x262ac0: 0x8de200b0  lw          $v0, 0xB0($t7)
    ctx->pc = 0x262ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 176)));
    // 0x262ac4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x262ac4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ac8: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x262ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x262acc: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x262accu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ad0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x262ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x262ad4: 0x8ef10008  lw          $s1, 0x8($s7)
    ctx->pc = 0x262ad4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x262ad8: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x262ad8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262adc: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x262adcu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ae0: 0x1980003a  blez        $t4, . + 4 + (0x3A << 2)
    ctx->pc = 0x262AE0u;
    {
        const bool branch_taken_0x262ae0 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x262AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262AE0u;
        // 0x262ae4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ae0) {
            ctx->pc = 0x262BCCu;
            goto label_262bcc;
        }
    }
    ctx->pc = 0x262AE8u;
label_262ae8:
    // 0x262ae8: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x262ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x262aec: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x262aecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x262af0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x262AF0u;
    {
        const bool branch_taken_0x262af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262af0) {
            ctx->pc = 0x262AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262AF0u;
            // 0x262af4: 0x8de900a8  lw          $t1, 0xA8($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262B14u;
            goto label_262b14;
        }
    }
    ctx->pc = 0x262AF8u;
    // 0x262af8: 0x85e200bc  lh          $v0, 0xBC($t7)
    ctx->pc = 0x262af8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 188)));
    // 0x262afc: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x262afcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b00: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x262b00u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b04: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x262b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x262b08: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x262b08u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x262b0c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x262B0Cu;
    {
        const bool branch_taken_0x262b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B0Cu;
        // 0x262b10: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b0c) {
            ctx->pc = 0x262B1Cu;
            goto label_262b1c;
        }
    }
    ctx->pc = 0x262B14u;
label_262b14:
    // 0x262b14: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x262b14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x262b18: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x262b18u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_262b1c:
    // 0x262b1c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x262b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b20: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x262B20u;
    {
        const bool branch_taken_0x262b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262B20u;
        // 0x262b24: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262b20) {
            ctx->pc = 0x262BB4u;
            goto label_262bb4;
        }
    }
    ctx->pc = 0x262B28u;
    // 0x262b28: 0x240e000c  addiu       $t6, $zero, 0xC
    ctx->pc = 0x262b28u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x262b2c: 0x0  nop
    ctx->pc = 0x262b2cu;
    // NOP
label_262b30:
    // 0x262b30: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x262b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x262b34: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x262b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x262b38: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x262b38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262b3c: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x262b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x262b40: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x262b40u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x262b44: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x262b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x262b48: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x262b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x262b4c: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x262b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x262b50: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x262b50u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x262b54: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x262b54u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x262b58: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x262b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x262b5c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x262b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262b60: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x262b60u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262b64: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x262b64u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x262b68: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x262b68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x262b6c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x262b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x262b70: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x262b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x262b74: 0x4e1818  mult        $v1, $v0, $t6
    ctx->pc = 0x262b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 14); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x262b78: 0x711021  addu        $v0, $v1, $s1
    ctx->pc = 0x262b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x262b7c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x262b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262b80: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x262b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x262b84: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x262b84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x262b88: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x262b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262b8c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x262b8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x262b90: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x262b90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x262b94: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x262b94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262b98: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x262b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x262b9c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x262b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x262ba0: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x262ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x262ba4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x262ba4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x262ba8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x262ba8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x262bac: 0x14a0ffe0  bnez        $a1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x262BACu;
    {
        const bool branch_taken_0x262bac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x262BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BACu;
        // 0x262bb0: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bac) {
            ctx->pc = 0x262B30u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262b30;
        }
    }
    ctx->pc = 0x262BB4u;
label_262bb4:
    // 0x262bb4: 0x85e200b8  lh          $v0, 0xB8($t7)
    ctx->pc = 0x262bb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 184)));
    // 0x262bb8: 0x1545023  subu        $t2, $t2, $s4
    ctx->pc = 0x262bb8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
    // 0x262bbc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x262bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x262bc0: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x262bc0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x262bc4: 0x1d80ffc8  bgtz        $t4, . + 4 + (-0x38 << 2)
    ctx->pc = 0x262BC4u;
    {
        const bool branch_taken_0x262bc4 = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x262BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BC4u;
        // 0x262bc8: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262bc4) {
            ctx->pc = 0x262AE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262ae8;
        }
    }
    ctx->pc = 0x262BCCu;
label_262bcc:
    // 0x262bcc: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x262bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_262bd0:
    // 0x262bd0: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x262bd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x262bd4: 0x504000a2  beql        $v0, $zero, . + 4 + (0xA2 << 2)
    ctx->pc = 0x262BD4u;
    {
        const bool branch_taken_0x262bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262bd4) {
            ctx->pc = 0x262BD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262BD4u;
            // 0x262bd8: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262E60u;
            goto label_262e60;
        }
    }
    ctx->pc = 0x262BDCu;
    // 0x262bdc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x262bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x262be0: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x262be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x262be4: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x262be4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x262be8: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
    ctx->pc = 0x262BE8u;
    {
        const bool branch_taken_0x262be8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262BE8u;
        // 0x262bec: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262be8) {
            ctx->pc = 0x262D00u;
            goto label_262d00;
        }
    }
    ctx->pc = 0x262BF0u;
    // 0x262bf0: 0x54400044  bnel        $v0, $zero, . + 4 + (0x44 << 2)
    ctx->pc = 0x262BF0u;
    {
        const bool branch_taken_0x262bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262bf0) {
            ctx->pc = 0x262BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262BF0u;
            // 0x262bf4: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262D04u;
            goto label_262d04;
        }
    }
    ctx->pc = 0x262BF8u;
    // 0x262bf8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x262bf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262bfc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x262bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x262c00: 0x30420084  andi        $v0, $v0, 0x84
    ctx->pc = 0x262c00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)132);
    // 0x262c04: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
    ctx->pc = 0x262C04u;
    {
        const bool branch_taken_0x262c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262c04) {
            ctx->pc = 0x262C08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262C04u;
            // 0x262c08: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262D04u;
            goto label_262d04;
        }
    }
    ctx->pc = 0x262C0Cu;
    // 0x262c0c: 0x8de200c8  lw          $v0, 0xC8($t7)
    ctx->pc = 0x262c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 200)));
    // 0x262c10: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x262c10u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c14: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x262c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x262c18: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x262c18u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c1c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x262c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x262c20: 0x8eee0010  lw          $t6, 0x10($s7)
    ctx->pc = 0x262c20u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x262c24: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x262c24u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262c28: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x262c28u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c2c: 0x19800034  blez        $t4, . + 4 + (0x34 << 2)
    ctx->pc = 0x262C2Cu;
    {
        const bool branch_taken_0x262c2c = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x262C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C2Cu;
        // 0x262c30: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c2c) {
            ctx->pc = 0x262D00u;
            goto label_262d00;
        }
    }
    ctx->pc = 0x262C34u;
    // 0x262c34: 0x0  nop
    ctx->pc = 0x262c34u;
    // NOP
label_262c38:
    // 0x262c38: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x262c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x262c3c: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x262c3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x262c40: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x262C40u;
    {
        const bool branch_taken_0x262c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262c40) {
            ctx->pc = 0x262C44u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262C40u;
            // 0x262c44: 0x8de900c0  lw          $t1, 0xC0($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 192)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262C64u;
            goto label_262c64;
        }
    }
    ctx->pc = 0x262C48u;
    // 0x262c48: 0x85e200d4  lh          $v0, 0xD4($t7)
    ctx->pc = 0x262c48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 212)));
    // 0x262c4c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x262c4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c50: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x262c50u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c54: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x262c54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x262c58: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x262c58u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x262c5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x262C5Cu;
    {
        const bool branch_taken_0x262c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C5Cu;
        // 0x262c60: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c5c) {
            ctx->pc = 0x262C6Cu;
            goto label_262c6c;
        }
    }
    ctx->pc = 0x262C64u;
label_262c64:
    // 0x262c64: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x262c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x262c68: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x262c68u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_262c6c:
    // 0x262c6c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x262c6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262c70: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x262C70u;
    {
        const bool branch_taken_0x262c70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262C70u;
        // 0x262c74: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262c70) {
            ctx->pc = 0x262CE8u;
            goto label_262ce8;
        }
    }
    ctx->pc = 0x262C78u;
label_262c78:
    // 0x262c78: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x262c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x262c7c: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x262c7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x262c80: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x262c80u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262c84: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x262c84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x262c88: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x262c88u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x262c8c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x262c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x262c90: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x262c90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x262c94: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x262c94u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x262c98: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x262c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x262c9c: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x262c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x262ca0: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x262ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x262ca4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x262ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ca8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x262ca8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262cac: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x262cacu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x262cb0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x262cb0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x262cb4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x262cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x262cb8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x262cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x262cbc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x262cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x262cc0: 0x1c21021  addu        $v0, $t6, $v0
    ctx->pc = 0x262cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x262cc4: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x262cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262cc8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x262cc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x262ccc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x262cccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x262cd0: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x262cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262cd4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x262cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x262cd8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x262cd8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x262cdc: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x262cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x262ce0: 0x14a0ffe5  bnez        $a1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x262CE0u;
    {
        const bool branch_taken_0x262ce0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x262CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262CE0u;
        // 0x262ce4: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ce0) {
            ctx->pc = 0x262C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262c78;
        }
    }
    ctx->pc = 0x262CE8u;
label_262ce8:
    // 0x262ce8: 0x85e200d0  lh          $v0, 0xD0($t7)
    ctx->pc = 0x262ce8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 208)));
    // 0x262cec: 0x1545023  subu        $t2, $t2, $s4
    ctx->pc = 0x262cecu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
    // 0x262cf0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x262cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x262cf4: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x262cf4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x262cf8: 0x1d80ffcf  bgtz        $t4, . + 4 + (-0x31 << 2)
    ctx->pc = 0x262CF8u;
    {
        const bool branch_taken_0x262cf8 = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x262CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262CF8u;
        // 0x262cfc: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262cf8) {
            ctx->pc = 0x262C38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262c38;
        }
    }
    ctx->pc = 0x262D00u;
label_262d00:
    // 0x262d00: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x262d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_262d04:
    // 0x262d04: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x262d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x262d08: 0x50400055  beql        $v0, $zero, . + 4 + (0x55 << 2)
    ctx->pc = 0x262D08u;
    {
        const bool branch_taken_0x262d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262d08) {
            ctx->pc = 0x262D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262D08u;
            // 0x262d0c: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262E60u;
            goto label_262e60;
        }
    }
    ctx->pc = 0x262D10u;
    // 0x262d10: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x262d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x262d14: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x262d14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x262d18: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x262d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x262d1c: 0x1060004f  beqz        $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x262D1Cu;
    {
        const bool branch_taken_0x262d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D1Cu;
        // 0x262d20: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d1c) {
            ctx->pc = 0x262E5Cu;
            goto label_262e5c;
        }
    }
    ctx->pc = 0x262D24u;
    // 0x262d24: 0x5440004e  bnel        $v0, $zero, . + 4 + (0x4E << 2)
    ctx->pc = 0x262D24u;
    {
        const bool branch_taken_0x262d24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262d24) {
            ctx->pc = 0x262D28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262D24u;
            // 0x262d28: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262E60u;
            goto label_262e60;
        }
    }
    ctx->pc = 0x262D2Cu;
    // 0x262d2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x262d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262d30: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x262d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x262d34: 0x30820084  andi        $v0, $a0, 0x84
    ctx->pc = 0x262d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)132);
    // 0x262d38: 0x10400048  beqz        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x262D38u;
    {
        const bool branch_taken_0x262d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D38u;
        // 0x262d3c: 0x30840080  andi        $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d38) {
            ctx->pc = 0x262E5Cu;
            goto label_262e5c;
        }
    }
    ctx->pc = 0x262D40u;
    // 0x262d40: 0x8de200e0  lw          $v0, 0xE0($t7)
    ctx->pc = 0x262d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 224)));
    // 0x262d44: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x262d44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x262d48: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x262d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x262d4c: 0x8ef10010  lw          $s1, 0x10($s7)
    ctx->pc = 0x262d4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x262d50: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x262d50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262d54: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x262d54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d58: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x262D58u;
    {
        const bool branch_taken_0x262d58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x262D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D58u;
        // 0x262d5c: 0x220702d  daddu       $t6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d58) {
            ctx->pc = 0x262D64u;
            goto label_262d64;
        }
    }
    ctx->pc = 0x262D60u;
    // 0x262d60: 0x8eee0014  lw          $t6, 0x14($s7)
    ctx->pc = 0x262d60u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 20)));
label_262d64:
    // 0x262d64: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x262d64u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d68: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x262d68u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d6c: 0x1980003b  blez        $t4, . + 4 + (0x3B << 2)
    ctx->pc = 0x262D6Cu;
    {
        const bool branch_taken_0x262d6c = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x262D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D6Cu;
        // 0x262d70: 0x2c0502d  daddu       $t2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d6c) {
            ctx->pc = 0x262E5Cu;
            goto label_262e5c;
        }
    }
    ctx->pc = 0x262D74u;
    // 0x262d74: 0x0  nop
    ctx->pc = 0x262d74u;
    // NOP
label_262d78:
    // 0x262d78: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x262d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x262d7c: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x262d7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x262d80: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x262D80u;
    {
        const bool branch_taken_0x262d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262d80) {
            ctx->pc = 0x262D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262D80u;
            // 0x262d84: 0x8de900d8  lw          $t1, 0xD8($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 216)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262DA4u;
            goto label_262da4;
        }
    }
    ctx->pc = 0x262D88u;
    // 0x262d88: 0x85e200ec  lh          $v0, 0xEC($t7)
    ctx->pc = 0x262d88u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 236)));
    // 0x262d8c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x262d8cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d90: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x262d90u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262d94: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x262d94u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x262d98: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x262d98u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x262d9c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x262D9Cu;
    {
        const bool branch_taken_0x262d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262D9Cu;
        // 0x262da0: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262d9c) {
            ctx->pc = 0x262DACu;
            goto label_262dac;
        }
    }
    ctx->pc = 0x262DA4u;
label_262da4:
    // 0x262da4: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x262da4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x262da8: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x262da8u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_262dac:
    // 0x262dac: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x262dacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262db0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x262DB0u;
    {
        const bool branch_taken_0x262db0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262DB0u;
        // 0x262db4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262db0) {
            ctx->pc = 0x262E44u;
            goto label_262e44;
        }
    }
    ctx->pc = 0x262DB8u;
label_262db8:
    // 0x262db8: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x262db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x262dbc: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x262dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x262dc0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x262dc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262dc4: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x262dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x262dc8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x262dc8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x262dcc: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x262dccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x262dd0: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x262dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x262dd4: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x262dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x262dd8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x262dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x262ddc: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x262ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x262de0: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x262de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x262de4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x262de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262de8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x262de8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262dec: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x262decu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x262df0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x262df0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x262df4: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x262df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x262df8: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x262df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x262dfc: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x262dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x262e00: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x262e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x262e04: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x262e04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262e08: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x262e08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x262e0c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x262e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x262e10: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x262e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262e14: 0x1c21821  addu        $v1, $t6, $v0
    ctx->pc = 0x262e14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x262e18: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x262e18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x262e1c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x262e1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x262e20: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x262e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262e24: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x262e24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x262e28: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x262e28u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x262e2c: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x262e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x262e30: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x262e30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x262e34: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x262e34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x262e38: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x262e38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x262e3c: 0x14a0ffde  bnez        $a1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x262E3Cu;
    {
        const bool branch_taken_0x262e3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x262E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E3Cu;
        // 0x262e40: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e3c) {
            ctx->pc = 0x262DB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262db8;
        }
    }
    ctx->pc = 0x262E44u;
label_262e44:
    // 0x262e44: 0x85e200e8  lh          $v0, 0xE8($t7)
    ctx->pc = 0x262e44u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 232)));
    // 0x262e48: 0x1545023  subu        $t2, $t2, $s4
    ctx->pc = 0x262e48u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
    // 0x262e4c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x262e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x262e50: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x262e50u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x262e54: 0x1d80ffc8  bgtz        $t4, . + 4 + (-0x38 << 2)
    ctx->pc = 0x262E54u;
    {
        const bool branch_taken_0x262e54 = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x262E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E54u;
        // 0x262e58: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e54) {
            ctx->pc = 0x262D78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262d78;
        }
    }
    ctx->pc = 0x262E5Cu;
label_262e5c:
    // 0x262e5c: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x262e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_262e60:
    // 0x262e60: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x262e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x262e64: 0x5040005b  beql        $v0, $zero, . + 4 + (0x5B << 2)
    ctx->pc = 0x262E64u;
    {
        const bool branch_taken_0x262e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262e64) {
            ctx->pc = 0x262E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262E64u;
            // 0x262e68: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262FD4u;
            goto label_262fd4;
        }
    }
    ctx->pc = 0x262E6Cu;
    // 0x262e6c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x262e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x262e70: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x262e70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x262e74: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x262e74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x262e78: 0x10600055  beqz        $v1, . + 4 + (0x55 << 2)
    ctx->pc = 0x262E78u;
    {
        const bool branch_taken_0x262e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262E78u;
        // 0x262e7c: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262e78) {
            ctx->pc = 0x262FD0u;
            goto label_262fd0;
        }
    }
    ctx->pc = 0x262E80u;
    // 0x262e80: 0x54400054  bnel        $v0, $zero, . + 4 + (0x54 << 2)
    ctx->pc = 0x262E80u;
    {
        const bool branch_taken_0x262e80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262e80) {
            ctx->pc = 0x262E84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262E80u;
            // 0x262e84: 0x8e020034  lw          $v0, 0x34($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262FD4u;
            goto label_262fd4;
        }
    }
    ctx->pc = 0x262E88u;
    // 0x262e88: 0x8de200f8  lw          $v0, 0xF8($t7)
    ctx->pc = 0x262e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 248)));
    // 0x262e8c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x262e8cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e90: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x262e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x262e94: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x262e94u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262e98: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x262e98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x262e9c: 0x8ef10030  lw          $s1, 0x30($s7)
    ctx->pc = 0x262e9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 48)));
    // 0x262ea0: 0x627021  addu        $t6, $v1, $v0
    ctx->pc = 0x262ea0u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x262ea4: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x262ea4u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ea8: 0x19800049  blez        $t4, . + 4 + (0x49 << 2)
    ctx->pc = 0x262EA8u;
    {
        const bool branch_taken_0x262ea8 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x262EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262EA8u;
        // 0x262eac: 0x1c0582d  daddu       $t3, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ea8) {
            ctx->pc = 0x262FD0u;
            goto label_262fd0;
        }
    }
    ctx->pc = 0x262EB0u;
label_262eb0:
    // 0x262eb0: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x262eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x262eb4: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x262eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x262eb8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x262EB8u;
    {
        const bool branch_taken_0x262eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262eb8) {
            ctx->pc = 0x262EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262EB8u;
            // 0x262ebc: 0x8de900f0  lw          $t1, 0xF0($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x262EDCu;
            goto label_262edc;
        }
    }
    ctx->pc = 0x262EC0u;
    // 0x262ec0: 0x85e20104  lh          $v0, 0x104($t7)
    ctx->pc = 0x262ec0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 260)));
    // 0x262ec4: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x262ec4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ec8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x262ec8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262ecc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x262eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x262ed0: 0x1c27023  subu        $t6, $t6, $v0
    ctx->pc = 0x262ed0u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x262ed4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x262ED4u;
    {
        const bool branch_taken_0x262ed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262ED4u;
        // 0x262ed8: 0x1c0582d  daddu       $t3, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ed4) {
            ctx->pc = 0x262EE4u;
            goto label_262ee4;
        }
    }
    ctx->pc = 0x262EDCu;
label_262edc:
    // 0x262edc: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x262edcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x262ee0: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x262ee0u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_262ee4:
    // 0x262ee4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x262ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x262ee8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x262ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x262eec: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x262eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x262ef0: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x262EF0u;
    {
        const bool branch_taken_0x262ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262EF0u;
        // 0x262ef4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ef0) {
            ctx->pc = 0x262F90u;
            goto label_262f90;
        }
    }
    ctx->pc = 0x262EF8u;
    // 0x262ef8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x262EF8u;
    {
        const bool branch_taken_0x262ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262EF8u;
        // 0x262efc: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262ef8) {
            ctx->pc = 0x262FB8u;
            goto label_262fb8;
        }
    }
    ctx->pc = 0x262F00u;
label_262f00:
    // 0x262f00: 0x26d1021  addu        $v0, $s3, $t5
    ctx->pc = 0x262f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x262f04: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x262f04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x262f08: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x262f08u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262f0c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x262f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x262f10: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x262f10u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x262f14: 0x2ad4021  addu        $t0, $s5, $t5
    ctx->pc = 0x262f14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x262f18: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x262f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x262f1c: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x262f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x262f20: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x262f20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x262f24: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x262f24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x262f28: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x262f28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x262f2c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x262f2cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x262f30: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x262f30u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x262f34: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x262f34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262f38: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x262f38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x262f3c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x262f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x262f40: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x262f40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x262f44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x262f44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x262f48: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x262f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x262f4c: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x262f4cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x262f50: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x262f50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x262f54: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x262f54u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x262f58: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x262f58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x262f5c: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x262f5cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x262f60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x262f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x262f64: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x262f64u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x262f68: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x262f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x262f6c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x262f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x262f70: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x262f70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x262f74: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x262f74u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x262f78: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x262f78u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x262f7c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x262f7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x262f80: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x262F80u;
    {
        const bool branch_taken_0x262f80 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x262F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F80u;
        // 0x262f84: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f80) {
            ctx->pc = 0x262F00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262f00;
        }
    }
    ctx->pc = 0x262F88u;
    // 0x262f88: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x262F88u;
    {
        const bool branch_taken_0x262f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x262F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F88u;
        // 0x262f8c: 0x85e20100  lh          $v0, 0x100($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f88) {
            ctx->pc = 0x262FBCu;
            goto label_262fbc;
        }
    }
    ctx->pc = 0x262F90u;
label_262f90:
    // 0x262f90: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x262F90u;
    {
        const bool branch_taken_0x262f90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x262F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262F90u;
        // 0x262f94: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262f90) {
            ctx->pc = 0x262FB8u;
            goto label_262fb8;
        }
    }
    ctx->pc = 0x262F98u;
    // 0x262f98: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x262f98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x262f9c: 0x0  nop
    ctx->pc = 0x262f9cu;
    // NOP
label_262fa0:
    // 0x262fa0: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x262fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x262fa4: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x262fa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x262fa8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x262fa8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x262fac: 0x0  nop
    ctx->pc = 0x262facu;
    // NOP
    // 0x262fb0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x262FB0u;
    {
        const bool branch_taken_0x262fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x262FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262FB0u;
        // 0x262fb4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262fb0) {
            ctx->pc = 0x262FA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262fa0;
        }
    }
    ctx->pc = 0x262FB8u;
label_262fb8:
    // 0x262fb8: 0x85e20100  lh          $v0, 0x100($t7)
    ctx->pc = 0x262fb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 256)));
label_262fbc:
    // 0x262fbc: 0x1545023  subu        $t2, $t2, $s4
    ctx->pc = 0x262fbcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
    // 0x262fc0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x262fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x262fc4: 0x1c27021  addu        $t6, $t6, $v0
    ctx->pc = 0x262fc4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 2)));
    // 0x262fc8: 0x1d80ffb9  bgtz        $t4, . + 4 + (-0x47 << 2)
    ctx->pc = 0x262FC8u;
    {
        const bool branch_taken_0x262fc8 = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x262FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262FC8u;
        // 0x262fcc: 0x1c0582d  daddu       $t3, $t6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x262fc8) {
            ctx->pc = 0x262EB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_262eb0;
        }
    }
    ctx->pc = 0x262FD0u;
label_262fd0:
    // 0x262fd0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x262fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_262fd4:
    // 0x262fd4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x262fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x262fd8: 0x50400095  beql        $v0, $zero, . + 4 + (0x95 << 2)
    ctx->pc = 0x262FD8u;
    {
        const bool branch_taken_0x262fd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x262fd8) {
            ctx->pc = 0x262FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262FD8u;
            // 0x262fdc: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263230u;
            goto label_263230;
        }
    }
    ctx->pc = 0x262FE0u;
    // 0x262fe0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x262fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x262fe4: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x262fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x262fe8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x262fe8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x262fec: 0x1060008f  beqz        $v1, . + 4 + (0x8F << 2)
    ctx->pc = 0x262FECu;
    {
        const bool branch_taken_0x262fec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x262FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x262FECu;
        // 0x262ff0: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x262fec) {
            ctx->pc = 0x26322Cu;
            goto label_26322c;
        }
    }
    ctx->pc = 0x262FF4u;
    // 0x262ff4: 0x5440008e  bnel        $v0, $zero, . + 4 + (0x8E << 2)
    ctx->pc = 0x262FF4u;
    {
        const bool branch_taken_0x262ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x262ff4) {
            ctx->pc = 0x262FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x262FF4u;
            // 0x262ff8: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263230u;
            goto label_263230;
        }
    }
    ctx->pc = 0x262FFCu;
    // 0x262ffc: 0x8de20110  lw          $v0, 0x110($t7)
    ctx->pc = 0x262ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 272)));
    // 0x263000: 0x2c0502d  daddu       $t2, $s6, $zero
    ctx->pc = 0x263000u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263004: 0x8de30008  lw          $v1, 0x8($t7)
    ctx->pc = 0x263004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 8)));
    // 0x263008: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x263008u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26300c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26300cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x263010: 0x8eee000c  lw          $t6, 0xC($s7)
    ctx->pc = 0x263010u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
    // 0x263014: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x263014u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x263018: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x263018u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26301c: 0x19800083  blez        $t4, . + 4 + (0x83 << 2)
    ctx->pc = 0x26301Cu;
    {
        const bool branch_taken_0x26301c = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x263020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26301Cu;
        // 0x263020: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26301c) {
            ctx->pc = 0x26322Cu;
            goto label_26322c;
        }
    }
    ctx->pc = 0x263024u;
    // 0x263024: 0x0  nop
    ctx->pc = 0x263024u;
    // NOP
label_263028:
    // 0x263028: 0x8de20018  lw          $v0, 0x18($t7)
    ctx->pc = 0x263028u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 24)));
    // 0x26302c: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x26302cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x263030: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x263030u;
    {
        const bool branch_taken_0x263030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x263030) {
            ctx->pc = 0x263034u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x263030u;
            // 0x263034: 0x8de90108  lw          $t1, 0x108($t7) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x263054u;
            goto label_263054;
        }
    }
    ctx->pc = 0x263038u;
    // 0x263038: 0x85e2011c  lh          $v0, 0x11C($t7)
    ctx->pc = 0x263038u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 284)));
    // 0x26303c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x26303cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263040: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x263040u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263044: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x263044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x263048: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x263048u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x26304c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x26304Cu;
    {
        const bool branch_taken_0x26304c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26304Cu;
        // 0x263050: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26304c) {
            ctx->pc = 0x26305Cu;
            goto label_26305c;
        }
    }
    ctx->pc = 0x263054u;
label_263054:
    // 0x263054: 0x1341023  subu        $v0, $t1, $s4
    ctx->pc = 0x263054u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 20)));
    // 0x263058: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x263058u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_26305c:
    // 0x26305c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x26305cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x263060: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x263060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x263064: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x263064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x263068: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
    ctx->pc = 0x263068u;
    {
        const bool branch_taken_0x263068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26306Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263068u;
        // 0x26306c: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263068) {
            ctx->pc = 0x263198u;
            goto label_263198;
        }
    }
    ctx->pc = 0x263070u;
    // 0x263070: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x263070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x263074: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x263074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x263078: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x263078u;
    {
        const bool branch_taken_0x263078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26307Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263078u;
        // 0x26307c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263078) {
            ctx->pc = 0x263108u;
            goto label_263108;
        }
    }
    ctx->pc = 0x263080u;
    // 0x263080: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x263080u;
    {
        const bool branch_taken_0x263080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x263084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263080u;
        // 0x263084: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263080) {
            ctx->pc = 0x263214u;
            goto label_263214;
        }
    }
    ctx->pc = 0x263088u;
label_263088:
    // 0x263088: 0x26d1821  addu        $v1, $s3, $t5
    ctx->pc = 0x263088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x26308c: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x26308cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x263090: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x263090u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x263094: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x263094u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x263098: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x263098u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26309c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x26309cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x2630a0: 0x4a1004  sllv        $v0, $t2, $v0
    ctx->pc = 0x2630a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x2630a4: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x2630a4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x2630a8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2630a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x2630ac: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x2630acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x2630b0: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x2630b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x2630b4: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x2630b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2630b8: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x2630b8u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2630bc: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x2630bcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2630c0: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2630c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2630c4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2630c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2630c8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2630c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2630cc: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x2630ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x2630d0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2630d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2630d4: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x2630d4u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2630d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2630d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2630dc: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x2630dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x2630e0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x2630e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2630e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2630e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2630e8: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2630e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2630ec: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x2630ecu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2630f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2630f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2630f4: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2630f4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2630f8: 0x14c0ffe3  bnez        $a2, . + 4 + (-0x1D << 2)
    ctx->pc = 0x2630F8u;
    {
        const bool branch_taken_0x2630f8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2630FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2630F8u;
        // 0x2630fc: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2630f8) {
            ctx->pc = 0x263088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263088;
        }
    }
    ctx->pc = 0x263100u;
    // 0x263100: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x263100u;
    {
        const bool branch_taken_0x263100 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263100u;
        // 0x263104: 0x85e20118  lh          $v0, 0x118($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263100) {
            ctx->pc = 0x263218u;
            goto label_263218;
        }
    }
    ctx->pc = 0x263108u;
label_263108:
    // 0x263108: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x263108u;
    {
        const bool branch_taken_0x263108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26310Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263108u;
        // 0x26310c: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263108) {
            ctx->pc = 0x263214u;
            goto label_263214;
        }
    }
    ctx->pc = 0x263110u;
label_263110:
    // 0x263110: 0x26d1821  addu        $v1, $s3, $t5
    ctx->pc = 0x263110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x263114: 0x24d2821  addu        $a1, $s2, $t5
    ctx->pc = 0x263114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 13)));
    // 0x263118: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x263118u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26311c: 0x2ad3821  addu        $a3, $s5, $t5
    ctx->pc = 0x26311cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 13)));
    // 0x263120: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x263120u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x263124: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x263124u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x263128: 0x4a1004  sllv        $v0, $t2, $v0
    ctx->pc = 0x263128u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x26312c: 0x992006  srlv        $a0, $t9, $a0
    ctx->pc = 0x26312cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 25), GPR_U32(ctx, 4) & 0x1F));
    // 0x263130: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x263130u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x263134: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x263134u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x263138: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x263138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x26313c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x26313cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x263140: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x263140u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x263144: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x263144u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x263148: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x263148u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x26314c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26314cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x263150: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x263150u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x263154: 0x1c31821  addu        $v1, $t6, $v1
    ctx->pc = 0x263154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), GPR_U32(ctx, 3)));
    // 0x263158: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x263158u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26315c: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x26315cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x263160: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x263160u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x263164: 0x90620001  lbu         $v0, 0x1($v1)
    ctx->pc = 0x263164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x263168: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x263168u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x26316c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x26316cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x263170: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x263170u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x263174: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x263174u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x263178: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x263178u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x26317c: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x26317cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x263180: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x263180u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x263184: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x263184u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x263188: 0x14c0ffe1  bnez        $a2, . + 4 + (-0x1F << 2)
    ctx->pc = 0x263188u;
    {
        const bool branch_taken_0x263188 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x26318Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263188u;
        // 0x26318c: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263188) {
            ctx->pc = 0x263110u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263110;
        }
    }
    ctx->pc = 0x263190u;
    // 0x263190: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x263190u;
    {
        const bool branch_taken_0x263190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x263194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263190u;
        // 0x263194: 0x85e20118  lh          $v0, 0x118($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263190) {
            ctx->pc = 0x263218u;
            goto label_263218;
        }
    }
    ctx->pc = 0x263198u;
label_263198:
    // 0x263198: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x263198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x26319c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x26319cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2631a0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2631A0u;
    {
        const bool branch_taken_0x2631a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2631A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631A0u;
        // 0x2631a4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2631a0) {
            ctx->pc = 0x2631DCu;
            goto label_2631dc;
        }
    }
    ctx->pc = 0x2631A8u;
    // 0x2631a8: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2631A8u;
    {
        const bool branch_taken_0x2631a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2631ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631A8u;
        // 0x2631ac: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2631a8) {
            ctx->pc = 0x263214u;
            goto label_263214;
        }
    }
    ctx->pc = 0x2631B0u;
label_2631b0:
    // 0x2631b0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2631b0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2631b4: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2631b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2631b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2631b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2631bc: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2631bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2631c0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2631c0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2631c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2631c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2631c8: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2631c8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2631cc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2631CCu;
    {
        const bool branch_taken_0x2631cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2631D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631CCu;
        // 0x2631d0: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2631cc) {
            ctx->pc = 0x2631B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2631b0;
        }
    }
    ctx->pc = 0x2631D4u;
    // 0x2631d4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2631D4u;
    {
        const bool branch_taken_0x2631d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2631D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631D4u;
        // 0x2631d8: 0x85e20118  lh          $v0, 0x118($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2631d4) {
            ctx->pc = 0x263218u;
            goto label_263218;
        }
    }
    ctx->pc = 0x2631DCu;
label_2631dc:
    // 0x2631dc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2631DCu;
    {
        const bool branch_taken_0x2631dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2631E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2631DCu;
        // 0x2631e0: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2631dc) {
            ctx->pc = 0x263214u;
            goto label_263214;
        }
    }
    ctx->pc = 0x2631E4u;
    // 0x2631e4: 0x0  nop
    ctx->pc = 0x2631e4u;
    // NOP
label_2631e8:
    // 0x2631e8: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2631e8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2631ec: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2631ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2631f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2631f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2631f4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2631f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2631f8: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2631f8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2631fc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2631fcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x263200: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x263200u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x263204: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x263204u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x263208: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x263208u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26320c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x26320Cu;
    {
        const bool branch_taken_0x26320c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x263210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26320Cu;
        // 0x263210: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26320c) {
            ctx->pc = 0x2631E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2631e8;
        }
    }
    ctx->pc = 0x263214u;
label_263214:
    // 0x263214: 0x85e20118  lh          $v0, 0x118($t7)
    ctx->pc = 0x263214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 15), 280)));
label_263218:
    // 0x263218: 0x1545023  subu        $t2, $t2, $s4
    ctx->pc = 0x263218u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 20)));
    // 0x26321c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26321cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x263220: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x263220u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x263224: 0x1d80ff80  bgtz        $t4, . + 4 + (-0x80 << 2)
    ctx->pc = 0x263224u;
    {
        const bool branch_taken_0x263224 = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x263228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263224u;
        // 0x263228: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x263224) {
            ctx->pc = 0x263028u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_263028;
        }
    }
    ctx->pc = 0x26322Cu;
label_26322c:
    // 0x26322c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x26322cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_263230:
    // 0x263230: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x263230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x263234: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x263234u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x263238: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x263238u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26323c: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x26323cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x263240: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x263240u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x263244: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x263244u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x263248: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x263248u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26324c: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x26324cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x263250: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x263250u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x263254: 0x3e00008  jr          $ra
    ctx->pc = 0x263254u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x263258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x263254u;
        // 0x263258: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x263254u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26325Cu;
    // 0x26325c: 0x0  nop
    ctx->pc = 0x26325cu;
    // NOP
    ctx->pc = 0x263260u;
}
