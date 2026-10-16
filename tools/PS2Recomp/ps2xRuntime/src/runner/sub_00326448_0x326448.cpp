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

// Function: sub_00326448
// Address: 0x326448 - 0x326628
void sub_00326448_0x326448(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326448_0x326448");
#endif

    switch (ctx->pc) {
        case 0x326488u: goto label_326488;
        case 0x3264a0u: goto label_3264a0;
        case 0x3264c8u: goto label_3264c8;
        case 0x326538u: goto label_326538;
        case 0x326578u: goto label_326578;
        case 0x326588u: goto label_326588;
        case 0x326590u: goto label_326590;
        case 0x3265a4u: goto label_3265a4;
        case 0x3265b4u: goto label_3265b4;
        case 0x3265c4u: goto label_3265c4;
        case 0x3265ccu: goto label_3265cc;
        default: break;
    }

    ctx->pc = 0x326448u;

    // 0x326448: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x326448u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x32644c: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x32644cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x326450: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x326450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x326454: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x326454u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326458: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x326458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x32645c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x32645cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326460: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x326460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x326464: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x326464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x326468: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x326468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
    // 0x32646c: 0x3c170073  lui         $s7, 0x73
    ctx->pc = 0x32646cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)115 << 16));
    // 0x326470: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x326470u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x326474: 0x26f2bac0  addiu       $s2, $s7, -0x4540
    ctx->pc = 0x326474u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949568));
    // 0x326478: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x326478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x32647c: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x32647cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
    // 0x326480: 0xc0c9520  jal         func_325480
    ctx->pc = 0x326480u;
    SET_GPR_U32(ctx, 31, 0x326488u);
    ctx->pc = 0x326484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326480u;
    // 0x326484: 0xffb00040  sd          $s0, 0x40($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x325480u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x325480u, 0x326480u, 0x326488u)) {
        return;
    }
    ctx->pc = 0x326488u;
label_326488:
    // 0x326488: 0x3c020068  lui         $v0, 0x68
    ctx->pc = 0x326488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)104 << 16));
    // 0x32648c: 0x8c4375dc  lw          $v1, 0x75DC($v0)
    ctx->pc = 0x32648cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6875DCu));
    // 0x326490: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x326490u;
    {
        const bool branch_taken_0x326490 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x326490) {
            ctx->pc = 0x326494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326490u;
            // 0x326494: 0x92220000  lbu         $v0, 0x0($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3264A4u;
            goto label_3264a4;
        }
    }
    ctx->pc = 0x326498u;
    // 0x326498: 0xc0c9542  jal         func_325508
    ctx->pc = 0x326498u;
    SET_GPR_U32(ctx, 31, 0x3264A0u);
    ctx->pc = 0x325508u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x325508u, 0x326498u, 0x3264A0u)) {
        return;
    }
    ctx->pc = 0x3264A0u;
label_3264a0:
    // 0x3264a0: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x3264a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_3264a4:
    // 0x3264a4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3264a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264a8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3264a8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3264ac: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x3264ACu;
    {
        const bool branch_taken_0x3264ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3264B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3264ACu;
        // 0x3264b0: 0xa2420010  sb          $v0, 0x10($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 16), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3264ac) {
            ctx->pc = 0x3264F0u;
            goto label_3264f0;
        }
    }
    ctx->pc = 0x3264B4u;
    // 0x3264b4: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3264b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x3264b8: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3264b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3264bc: 0x3c150073  lui         $s5, 0x73
    ctx->pc = 0x3264bcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)115 << 16));
    // 0x3264c0: 0x3c140073  lui         $s4, 0x73
    ctx->pc = 0x3264c0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
    // 0x3264c4: 0x0  nop
    ctx->pc = 0x3264c4u;
    // NOP
label_3264c8:
    // 0x3264c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3264c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x3264cc: 0x2a020400  slti        $v0, $s0, 0x400
    ctx->pc = 0x3264ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
    // 0x3264d0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3264D0u;
    {
        const bool branch_taken_0x3264d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3264D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3264D0u;
        // 0x3264d4: 0x2301021  addu        $v0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3264d0) {
            ctx->pc = 0x326500u;
            goto label_326500;
        }
    }
    ctx->pc = 0x3264D8u;
    // 0x3264d8: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x3264d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x3264dc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3264dcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3264e0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3264E0u;
    {
        const bool branch_taken_0x3264e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3264E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3264E0u;
        // 0x3264e4: 0xa0830010  sb          $v1, 0x10($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3264e0) {
            ctx->pc = 0x3264C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3264c8;
        }
    }
    ctx->pc = 0x3264E8u;
    // 0x3264e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3264E8u;
    {
        const bool branch_taken_0x3264e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3264ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3264E8u;
        // 0x3264ec: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3264e8) {
            ctx->pc = 0x326504u;
            goto label_326504;
        }
    }
    ctx->pc = 0x3264F0u;
label_3264f0:
    // 0x3264f0: 0x3c05006b  lui         $a1, 0x6B
    ctx->pc = 0x3264f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
    // 0x3264f4: 0x27b30030  addiu       $s3, $sp, 0x30
    ctx->pc = 0x3264f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3264f8: 0x3c150073  lui         $s5, 0x73
    ctx->pc = 0x3264f8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)115 << 16));
    // 0x3264fc: 0x3c140073  lui         $s4, 0x73
    ctx->pc = 0x3264fcu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)115 << 16));
label_326500:
    // 0x326500: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x326500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_326504:
    // 0x326504: 0x56020004  bnel        $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x326504u;
    {
        const bool branch_taken_0x326504 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x326504) {
            ctx->pc = 0x326508u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x326504u;
            // 0x326508: 0xae56000c  sw          $s6, 0xC($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x326518u;
            goto label_326518;
        }
    }
    ctx->pc = 0x32650Cu;
    // 0x32650c: 0xa240040f  sb          $zero, 0x40F($s2)
    ctx->pc = 0x32650cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1039), (uint8_t)GPR_U32(ctx, 0));
    // 0x326510: 0x241003ff  addiu       $s0, $zero, 0x3FF
    ctx->pc = 0x326510u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x326514: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x326514u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_326518:
    // 0x326518: 0x24a32968  addiu       $v1, $a1, 0x2968
    ctx->pc = 0x326518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 10600));
    // 0x32651c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x32651cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x326520: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x326520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x326524: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x326524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x326528: 0x2694c700  addiu       $s4, $s4, -0x3900
    ctx->pc = 0x326528u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4294952704));
    // 0x32652c: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x32652cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x326530: 0xc0c84c8  jal         func_321320
    ctx->pc = 0x326530u;
    SET_GPR_U32(ctx, 31, 0x326538u);
    ctx->pc = 0x326534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326530u;
    // 0x326534: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321320u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321320u, 0x326530u, 0x326538u)) {
        return;
    }
    ctx->pc = 0x326538u;
label_326538:
    // 0x326538: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x326538u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32653c: 0xae530004  sw          $s3, 0x4($s2)
    ctx->pc = 0x32653cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 19));
    // 0x326540: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x326540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x326544: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x326544u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
    // 0x326548: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x326548u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x32654c: 0x26a4d1c0  addiu       $a0, $s5, -0x2E40
    ctx->pc = 0x32654cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294955456));
    // 0x326550: 0x26e7bac0  addiu       $a3, $s7, -0x4540
    ctx->pc = 0x326550u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 4294949568));
    // 0x326554: 0x26080011  addiu       $t0, $s0, 0x11
    ctx->pc = 0x326554u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), 17));
    // 0x326558: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x326558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x32655c: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x32655cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x326560: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x326560u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x326564: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x326564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x326568: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x326568u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32656c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x32656cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x326570: 0xc0c93c4  jal         func_324F10
    ctx->pc = 0x326570u;
    SET_GPR_U32(ctx, 31, 0x326578u);
    ctx->pc = 0x326574u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326570u;
    // 0x326574: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x324F10u, 0x326570u, 0x326578u)) {
        return;
    }
    ctx->pc = 0x326578u;
label_326578:
    // 0x326578: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x326578u;
    {
        const bool branch_taken_0x326578 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x32657Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326578u;
        // 0x32657c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326578) {
            ctx->pc = 0x326598u;
            goto label_326598;
        }
    }
    ctx->pc = 0x326580u;
    // 0x326580: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x326580u;
    SET_GPR_U32(ctx, 31, 0x326588u);
    ctx->pc = 0x326584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x326580u;
    // 0x326584: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x326580u, 0x326588u)) {
        return;
    }
    ctx->pc = 0x326588u;
label_326588:
    // 0x326588: 0xc0c952c  jal         func_3254B0
    ctx->pc = 0x326588u;
    SET_GPR_U32(ctx, 31, 0x326590u);
    ctx->pc = 0x3254B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3254B0u, 0x326588u, 0x326590u)) {
        return;
    }
    ctx->pc = 0x326590u;
label_326590:
    // 0x326590: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x326590u;
    {
        const bool branch_taken_0x326590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x326590u;
        // 0x326594: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326590) {
            ctx->pc = 0x3265D0u;
            goto label_3265d0;
        }
    }
    ctx->pc = 0x326598u;
label_326598:
    // 0x326598: 0x2821025  or          $v0, $s4, $v0
    ctx->pc = 0x326598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
    // 0x32659c: 0xc0c952c  jal         func_3254B0
    ctx->pc = 0x32659Cu;
    SET_GPR_U32(ctx, 31, 0x3265A4u);
    ctx->pc = 0x3265A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32659Cu;
    // 0x3265a0: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3254B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x3254B0u, 0x32659Cu, 0x3265A4u)) {
        return;
    }
    ctx->pc = 0x3265A4u;
label_3265a4:
    // 0x3265a4: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3265A4u;
    {
        const bool branch_taken_0x3265a4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3265a4) {
            ctx->pc = 0x3265BCu;
            goto label_3265bc;
        }
    }
    ctx->pc = 0x3265ACu;
    // 0x3265ac: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x3265ACu;
    SET_GPR_U32(ctx, 31, 0x3265B4u);
    ctx->pc = 0x3265B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3265ACu;
    // 0x3265b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x3265ACu, 0x3265B4u)) {
        return;
    }
    ctx->pc = 0x3265B4u;
label_3265b4:
    // 0x3265b4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3265B4u;
    {
        const bool branch_taken_0x3265b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3265B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265B4u;
        // 0x3265b8: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3265b4) {
            ctx->pc = 0x3265D0u;
            goto label_3265d0;
        }
    }
    ctx->pc = 0x3265BCu;
label_3265bc:
    // 0x3265bc: 0xc0c84d8  jal         func_321360
    ctx->pc = 0x3265BCu;
    SET_GPR_U32(ctx, 31, 0x3265C4u);
    ctx->pc = 0x3265C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3265BCu;
    // 0x3265c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321360u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321360u, 0x3265BCu, 0x3265C4u)) {
        return;
    }
    ctx->pc = 0x3265C4u;
label_3265c4:
    // 0x3265c4: 0xc0c84cc  jal         func_321330
    ctx->pc = 0x3265C4u;
    SET_GPR_U32(ctx, 31, 0x3265CCu);
    ctx->pc = 0x3265C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3265C4u;
    // 0x3265c8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x321330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x321330u, 0x3265C4u, 0x3265CCu)) {
        return;
    }
    ctx->pc = 0x3265CCu;
label_3265cc:
    // 0x3265cc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x3265ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3265d0:
    // 0x3265d0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x3265d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3265d4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x3265d4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3265d8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x3265d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3265dc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x3265dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3265e0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x3265e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3265e4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x3265e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3265e8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x3265e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3265ec: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x3265ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3265f0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x3265f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3265f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3265F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3265F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3265F4u;
        // 0x3265f8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3265F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3265FCu;
    // 0x3265fc: 0x0  nop
    ctx->pc = 0x3265fcu;
    // NOP
    // 0x326600: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x326600u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x326604: 0x0  nop
    ctx->pc = 0x326604u;
    // NOP
    // 0x326608: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326608u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32660c: 0x0  nop
    ctx->pc = 0x32660cu;
    // NOP
    // 0x326610: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x326610u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x326614: 0x0  nop
    ctx->pc = 0x326614u;
    // NOP
    // 0x326618: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x326618u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x32661c: 0x0  nop
    ctx->pc = 0x32661cu;
    // NOP
    // 0x326620: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x326620u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x326624: 0x0  nop
    ctx->pc = 0x326624u;
    // NOP
    ctx->pc = 0x326628u;
}
