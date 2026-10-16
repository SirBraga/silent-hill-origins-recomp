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

// Function: sub_00281910
// Address: 0x281910 - 0x281d28
void sub_00281910_0x281910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281910_0x281910");
#endif

    switch (ctx->pc) {
        case 0x281968u: goto label_281968;
        case 0x281aa0u: goto label_281aa0;
        case 0x281ba0u: goto label_281ba0;
        default: break;
    }

    ctx->pc = 0x281910u;

    // 0x281910: 0x8f828834  lw          $v0, -0x77CC($gp)
    ctx->pc = 0x281910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936628)));
    // 0x281914: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x281914u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x281918: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x281918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28191c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x28191cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x281920: 0x7fb10000  sq          $s1, 0x0($sp)
    ctx->pc = 0x281920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 17));
    // 0x281924: 0x46100e7  bgez        $v1, . + 4 + (0xE7 << 2)
    ctx->pc = 0x281924u;
    {
        const bool branch_taken_0x281924 = (GPR_S64(ctx, 3) >= 0);
        ctx->pc = 0x281928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281924u;
        // 0x281928: 0xaf838834  sw          $v1, -0x77CC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936628), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281924) {
            ctx->pc = 0x281CC4u;
            goto label_281cc4;
        }
    }
    ctx->pc = 0x28192Cu;
    // 0x28192c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x28192cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x281930: 0x2863ffff  slti        $v1, $v1, -0x1
    ctx->pc = 0x281930u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4294967295) ? 1 : 0);
    // 0x281934: 0x24585990  addiu       $t8, $v0, 0x5990
    ctx->pc = 0x281934u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 2), 22928));
    // 0x281938: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x281938u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28193c: 0x270e0008  addiu       $t6, $t8, 0x8
    ctx->pc = 0x28193cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 24), 8));
    // 0x281940: 0x270f0634  addiu       $t7, $t8, 0x634
    ctx->pc = 0x281940u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 24), 1588));
    // 0x281944: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x281944u;
    {
        const bool branch_taken_0x281944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281944u;
        // 0x281948: 0x3c080070  lui         $t0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)112 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281944) {
            ctx->pc = 0x2819ACu;
            goto label_2819ac;
        }
    }
    ctx->pc = 0x28194Cu;
    // 0x28194c: 0x24021105  addiu       $v0, $zero, 0x1105
    ctx->pc = 0x28194cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4357));
    // 0x281950: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x281950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x281954: 0xaf808834  sw          $zero, -0x77CC($gp)
    ctx->pc = 0x281954u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936628), GPR_U32(ctx, 0));
    // 0x281958: 0x2405026f  addiu       $a1, $zero, 0x26F
    ctx->pc = 0x281958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 623));
    // 0x28195c: 0xae225990  sw          $v0, 0x5990($s1)
    ctx->pc = 0x28195cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 22928), GPR_U32(ctx, 2));
    // 0x281960: 0x34630dcd  ori         $v1, $v1, 0xDCD
    ctx->pc = 0x281960u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3533);
    // 0x281964: 0x27040004  addiu       $a0, $t8, 0x4
    ctx->pc = 0x281964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 24), 4));
label_281968:
    // 0x281968: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x281968u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x28196c: 0x24a5fff9  addiu       $a1, $a1, -0x7
    ctx->pc = 0x28196cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967289));
    // 0x281970: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x281970u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x281974: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x281974u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x281978: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x281978u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x28197c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x28197cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x281980: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x281980u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x281984: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x281984u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x281988: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x281988u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x28198c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x28198cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x281990: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x281990u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
    // 0x281994: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x281994u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x281998: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x281998u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x28199c: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x28199cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2819a0: 0xac820018  sw          $v0, 0x18($a0)
    ctx->pc = 0x2819a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
    // 0x2819a4: 0x14a0fff0  bnez        $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2819A4u;
    {
        const bool branch_taken_0x2819a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2819A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2819A4u;
        // 0x2819a8: 0x2484001c  addiu       $a0, $a0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2819a4) {
            ctx->pc = 0x281968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281968;
        }
    }
    ctx->pc = 0x2819ACu;
label_2819ac:
    // 0x2819ac: 0x25085994  addiu       $t0, $t0, 0x5994
    ctx->pc = 0x2819acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22932));
    // 0x2819b0: 0x3c0d7fff  lui         $t5, 0x7FFF
    ctx->pc = 0x2819b0u;
    SET_GPR_S32(ctx, 13, (int32_t)((uint32_t)32767 << 16));
    // 0x2819b4: 0x8d0a0000  lw          $t2, 0x0($t0)
    ctx->pc = 0x2819b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x2819b8: 0x3c108000  lui         $s0, 0x8000
    ctx->pc = 0x2819b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)32768 << 16));
    // 0x2819bc: 0x8d0bfffc  lw          $t3, -0x4($t0)
    ctx->pc = 0x2819bcu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294967292)));
    // 0x2819c0: 0x35adffff  ori         $t5, $t5, 0xFFFF
    ctx->pc = 0x2819c0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)65535);
    // 0x2819c4: 0x14d1824  and         $v1, $t2, $t5
    ctx->pc = 0x2819c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & GPR_U64(ctx, 13));
    // 0x2819c8: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x2819c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x2819cc: 0x1701024  and         $v0, $t3, $s0
    ctx->pc = 0x2819ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & GPR_U64(ctx, 16));
    // 0x2819d0: 0x3c0c9908  lui         $t4, 0x9908
    ctx->pc = 0x2819d0u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)39176 << 16));
    // 0x2819d4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2819d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x2819d8: 0x358cb0df  ori         $t4, $t4, 0xB0DF
    ctx->pc = 0x2819d8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)45279);
    // 0x2819dc: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x2819dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x2819e0: 0x31450001  andi        $a1, $t2, 0x1
    ctx->pc = 0x2819e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x2819e4: 0x822026  xor         $a0, $a0, $v0
    ctx->pc = 0x2819e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 2));
    // 0x2819e8: 0x300302d  daddu       $a2, $t8, $zero
    ctx->pc = 0x2819e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 24) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2819ec: 0x8c1026  xor         $v0, $a0, $t4
    ctx->pc = 0x2819ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 12));
    // 0x2819f0: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x2819f0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2819f4: 0x85100a  movz        $v0, $a0, $a1
    ctx->pc = 0x2819f4u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x2819f8: 0x1701824  and         $v1, $t3, $s0
    ctx->pc = 0x2819f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 16));
    // 0x2819fc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2819fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x281a00: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x281a00u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x281a04: 0x2409026f  addiu       $t1, $zero, 0x26F
    ctx->pc = 0x281a04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 623));
    // 0x281a08: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x281a08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x281a0c: 0x8dca0000  lw          $t2, 0x0($t6)
    ctx->pc = 0x281a0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x281a10: 0x2718000c  addiu       $t8, $t8, 0xC
    ctx->pc = 0x281a10u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 12));
    // 0x281a14: 0x8de40000  lw          $a0, 0x0($t7)
    ctx->pc = 0x281a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x281a18: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x281a18u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x281a1c: 0x14d1024  and         $v0, $t2, $t5
    ctx->pc = 0x281a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 13));
    // 0x281a20: 0x31470001  andi        $a3, $t2, 0x1
    ctx->pc = 0x281a20u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x281a24: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x281a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x281a28: 0xaf898834  sw          $t1, -0x77CC($gp)
    ctx->pc = 0x281a28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936628), GPR_U32(ctx, 9));
    // 0x281a2c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x281a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x281a30: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x281a30u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281a34: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x281a34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x281a38: 0x1702824  and         $a1, $t3, $s0
    ctx->pc = 0x281a38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 16));
    // 0x281a3c: 0x8c1026  xor         $v0, $a0, $t4
    ctx->pc = 0x281a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 12));
    // 0x281a40: 0x25ef0004  addiu       $t7, $t7, 0x4
    ctx->pc = 0x281a40u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x281a44: 0x87100a  movz        $v0, $a0, $a3
    ctx->pc = 0x281a44u;
    if (GPR_U64(ctx, 7) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x281a48: 0xaf888f98  sw          $t0, -0x7068($gp)
    ctx->pc = 0x281a48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938520), GPR_U32(ctx, 8));
    // 0x281a4c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x281a4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x281a50: 0x25e90004  addiu       $t1, $t7, 0x4
    ctx->pc = 0x281a50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 15), 4));
    // 0x281a54: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x281a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x281a58: 0x241900e0  addiu       $t9, $zero, 0xE0
    ctx->pc = 0x281a58u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x281a5c: 0x8dca0000  lw          $t2, 0x0($t6)
    ctx->pc = 0x281a5cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x281a60: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x281a60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281a64: 0x8de30000  lw          $v1, 0x0($t7)
    ctx->pc = 0x281a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x281a68: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x281a68u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x281a6c: 0x14d1024  and         $v0, $t2, $t5
    ctx->pc = 0x281a6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 13));
    // 0x281a70: 0x31440001  andi        $a0, $t2, 0x1
    ctx->pc = 0x281a70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x281a74: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x281a74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x281a78: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x281a78u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281a7c: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x281a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x281a80: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x281a80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x281a84: 0x6c1026  xor         $v0, $v1, $t4
    ctx->pc = 0x281a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 12));
    // 0x281a88: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x281a88u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x281a8c: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x281a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x281a90: 0x8dca0000  lw          $t2, 0x0($t6)
    ctx->pc = 0x281a90u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x281a94: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x281a94u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x281a98: 0x1c0382d  daddu       $a3, $t6, $zero
    ctx->pc = 0x281a98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281a9c: 0x0  nop
    ctx->pc = 0x281a9cu;
    // NOP
label_281aa0:
    // 0x281aa0: 0x14d1024  and         $v0, $t2, $t5
    ctx->pc = 0x281aa0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 13));
    // 0x281aa4: 0x1701824  and         $v1, $t3, $s0
    ctx->pc = 0x281aa4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 16));
    // 0x281aa8: 0x8d240000  lw          $a0, 0x0($t1)
    ctx->pc = 0x281aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x281aac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x281aacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x281ab0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x281ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x281ab4: 0x31460001  andi        $a2, $t2, 0x1
    ctx->pc = 0x281ab4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x281ab8: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x281ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x281abc: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x281abcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281ac0: 0x8c1026  xor         $v0, $a0, $t4
    ctx->pc = 0x281ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 12));
    // 0x281ac4: 0x1702824  and         $a1, $t3, $s0
    ctx->pc = 0x281ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 16));
    // 0x281ac8: 0x86100a  movz        $v0, $a0, $a2
    ctx->pc = 0x281ac8u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x281acc: 0x27180010  addiu       $t8, $t8, 0x10
    ctx->pc = 0x281accu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 16));
    // 0x281ad0: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x281ad0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x281ad4: 0x25ce0010  addiu       $t6, $t6, 0x10
    ctx->pc = 0x281ad4u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
    // 0x281ad8: 0x2739fffc  addiu       $t9, $t9, -0x4
    ctx->pc = 0x281ad8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967292));
    // 0x281adc: 0x8cea0000  lw          $t2, 0x0($a3)
    ctx->pc = 0x281adcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x281ae0: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x281ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x281ae4: 0x14d1024  and         $v0, $t2, $t5
    ctx->pc = 0x281ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 13));
    // 0x281ae8: 0x31460001  andi        $a2, $t2, 0x1
    ctx->pc = 0x281ae8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x281aec: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x281aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x281af0: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x281af0u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281af4: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x281af4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x281af8: 0x1702024  and         $a0, $t3, $s0
    ctx->pc = 0x281af8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 16));
    // 0x281afc: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x281afcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x281b00: 0x6c1026  xor         $v0, $v1, $t4
    ctx->pc = 0x281b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 12));
    // 0x281b04: 0x66100a  movz        $v0, $v1, $a2
    ctx->pc = 0x281b04u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x281b08: 0xad020008  sw          $v0, 0x8($t0)
    ctx->pc = 0x281b08u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 2));
    // 0x281b0c: 0x8cea0004  lw          $t2, 0x4($a3)
    ctx->pc = 0x281b0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x281b10: 0x8d230008  lw          $v1, 0x8($t1)
    ctx->pc = 0x281b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x281b14: 0x14d1024  and         $v0, $t2, $t5
    ctx->pc = 0x281b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 13));
    // 0x281b18: 0x31460001  andi        $a2, $t2, 0x1
    ctx->pc = 0x281b18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x281b1c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x281b1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x281b20: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x281b20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b24: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x281b24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x281b28: 0x1702824  and         $a1, $t3, $s0
    ctx->pc = 0x281b28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 16));
    // 0x281b2c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x281b2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x281b30: 0x6c1026  xor         $v0, $v1, $t4
    ctx->pc = 0x281b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 12));
    // 0x281b34: 0x66100a  movz        $v0, $v1, $a2
    ctx->pc = 0x281b34u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x281b38: 0xad02000c  sw          $v0, 0xC($t0)
    ctx->pc = 0x281b38u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 2));
    // 0x281b3c: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x281b3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
    // 0x281b40: 0x8cea0008  lw          $t2, 0x8($a3)
    ctx->pc = 0x281b40u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x281b44: 0x8d23000c  lw          $v1, 0xC($t1)
    ctx->pc = 0x281b44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x281b48: 0x14d1024  and         $v0, $t2, $t5
    ctx->pc = 0x281b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 13));
    // 0x281b4c: 0x31440001  andi        $a0, $t2, 0x1
    ctx->pc = 0x281b4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x281b50: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x281b50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x281b54: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x281b54u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b58: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x281b58u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x281b5c: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x281b5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
    // 0x281b60: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x281b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x281b64: 0x6c1026  xor         $v0, $v1, $t4
    ctx->pc = 0x281b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 12));
    // 0x281b68: 0x64100a  movz        $v0, $v1, $a0
    ctx->pc = 0x281b68u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x281b6c: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x281b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
    // 0x281b70: 0x8cea000c  lw          $t2, 0xC($a3)
    ctx->pc = 0x281b70u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x281b74: 0x1720ffca  bnez        $t9, . + 4 + (-0x36 << 2)
    ctx->pc = 0x281B74u;
    {
        const bool branch_taken_0x281b74 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x281B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281B74u;
        // 0x281b78: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281b74) {
            ctx->pc = 0x281AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281aa0;
        }
    }
    ctx->pc = 0x281B7Cu;
    // 0x281b7c: 0x3c0c7fff  lui         $t4, 0x7FFF
    ctx->pc = 0x281b7cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32767 << 16));
    // 0x281b80: 0x3c099908  lui         $t1, 0x9908
    ctx->pc = 0x281b80u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)39176 << 16));
    // 0x281b84: 0x1c0402d  daddu       $t0, $t6, $zero
    ctx->pc = 0x281b84u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281b88: 0x2419018c  addiu       $t9, $zero, 0x18C
    ctx->pc = 0x281b88u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 396));
    // 0x281b8c: 0x3c0e8000  lui         $t6, 0x8000
    ctx->pc = 0x281b8cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)32768 << 16));
    // 0x281b90: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x281b90u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x281b94: 0x3529b0df  ori         $t1, $t1, 0xB0DF
    ctx->pc = 0x281b94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)45279);
    // 0x281b98: 0x2707fffc  addiu       $a3, $t8, -0x4
    ctx->pc = 0x281b98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 24), 4294967292));
    // 0x281b9c: 0x262d5990  addiu       $t5, $s1, 0x5990
    ctx->pc = 0x281b9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 17), 22928));
label_281ba0:
    // 0x281ba0: 0x14c1024  and         $v0, $t2, $t4
    ctx->pc = 0x281ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x281ba4: 0x16e1824  and         $v1, $t3, $t6
    ctx->pc = 0x281ba4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 14));
    // 0x281ba8: 0x8da40000  lw          $a0, 0x0($t5)
    ctx->pc = 0x281ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x281bac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x281bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x281bb0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x281bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x281bb4: 0x31460001  andi        $a2, $t2, 0x1
    ctx->pc = 0x281bb4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x281bb8: 0x832026  xor         $a0, $a0, $v1
    ctx->pc = 0x281bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
    // 0x281bbc: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x281bbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bc0: 0x891026  xor         $v0, $a0, $t1
    ctx->pc = 0x281bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 9));
    // 0x281bc4: 0x16e2824  and         $a1, $t3, $t6
    ctx->pc = 0x281bc4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & GPR_U64(ctx, 14));
    // 0x281bc8: 0x86100a  movz        $v0, $a0, $a2
    ctx->pc = 0x281bc8u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
    // 0x281bcc: 0x2718000c  addiu       $t8, $t8, 0xC
    ctx->pc = 0x281bccu;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 24), 12));
    // 0x281bd0: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x281bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
    // 0x281bd4: 0x2739fffd  addiu       $t9, $t9, -0x3
    ctx->pc = 0x281bd4u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 4294967293));
    // 0x281bd8: 0x8d0a0000  lw          $t2, 0x0($t0)
    ctx->pc = 0x281bd8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x281bdc: 0x8da30004  lw          $v1, 0x4($t5)
    ctx->pc = 0x281bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 4)));
    // 0x281be0: 0x14c1024  and         $v0, $t2, $t4
    ctx->pc = 0x281be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x281be4: 0x31460001  andi        $a2, $t2, 0x1
    ctx->pc = 0x281be4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x281be8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x281be8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x281bec: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x281becu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281bf0: 0x52842  srl         $a1, $a1, 1
    ctx->pc = 0x281bf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
    // 0x281bf4: 0x16e2024  and         $a0, $t3, $t6
    ctx->pc = 0x281bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 14));
    // 0x281bf8: 0x651826  xor         $v1, $v1, $a1
    ctx->pc = 0x281bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 5));
    // 0x281bfc: 0x691026  xor         $v0, $v1, $t1
    ctx->pc = 0x281bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 9));
    // 0x281c00: 0x66100a  movz        $v0, $v1, $a2
    ctx->pc = 0x281c00u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x281c04: 0xace20008  sw          $v0, 0x8($a3)
    ctx->pc = 0x281c04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 2));
    // 0x281c08: 0x24e7000c  addiu       $a3, $a3, 0xC
    ctx->pc = 0x281c08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 12));
    // 0x281c0c: 0x8d0a0004  lw          $t2, 0x4($t0)
    ctx->pc = 0x281c0cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x281c10: 0x8da30008  lw          $v1, 0x8($t5)
    ctx->pc = 0x281c10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 8)));
    // 0x281c14: 0x14c1024  and         $v0, $t2, $t4
    ctx->pc = 0x281c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 12));
    // 0x281c18: 0x31450001  andi        $a1, $t2, 0x1
    ctx->pc = 0x281c18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x281c1c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x281c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x281c20: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x281c20u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281c24: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x281c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x281c28: 0x25ad000c  addiu       $t5, $t5, 0xC
    ctx->pc = 0x281c28u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 12));
    // 0x281c2c: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x281c2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
    // 0x281c30: 0x691026  xor         $v0, $v1, $t1
    ctx->pc = 0x281c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 9));
    // 0x281c34: 0x65100a  movz        $v0, $v1, $a1
    ctx->pc = 0x281c34u;
    if (GPR_U64(ctx, 5) == 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
    // 0x281c38: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x281c38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
    // 0x281c3c: 0x8d0a0008  lw          $t2, 0x8($t0)
    ctx->pc = 0x281c3cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x281c40: 0x1720ffd7  bnez        $t9, . + 4 + (-0x29 << 2)
    ctx->pc = 0x281C40u;
    {
        const bool branch_taken_0x281c40 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x281C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C40u;
        // 0x281c44: 0x2508000c  addiu       $t0, $t0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c40) {
            ctx->pc = 0x281BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281ba0;
        }
    }
    ctx->pc = 0x281C48u;
    // 0x281c48: 0x8e2a5990  lw          $t2, 0x5990($s1)
    ctx->pc = 0x281c48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 22928)));
    // 0x281c4c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x281c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x281c50: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x281c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x281c54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x281c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x281c58: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x281c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x281c5c: 0x1631824  and         $v1, $t3, $v1
    ctx->pc = 0x281c5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & GPR_U64(ctx, 3));
    // 0x281c60: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x281c60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x281c64: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x281c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x281c68: 0x8c855fc0  lw          $a1, 0x5FC0($a0)
    ctx->pc = 0x281c68u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x705FC0u));
    // 0x281c6c: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x281c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x281c70: 0x31420001  andi        $v0, $t2, 0x1
    ctx->pc = 0x281c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x281c74: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x281C74u;
    {
        const bool branch_taken_0x281c74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x281C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281C74u;
        // 0x281c78: 0xa32826  xor         $a1, $a1, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281c74) {
            ctx->pc = 0x281C88u;
            goto label_281c88;
        }
    }
    ctx->pc = 0x281C7Cu;
    // 0x281c7c: 0x3c029908  lui         $v0, 0x9908
    ctx->pc = 0x281c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)39176 << 16));
    // 0x281c80: 0x3442b0df  ori         $v0, $v0, 0xB0DF
    ctx->pc = 0x281c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45279);
    // 0x281c84: 0xa22826  xor         $a1, $a1, $v0
    ctx->pc = 0x281c84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) ^ GPR_U64(ctx, 2));
label_281c88:
    // 0x281c88: 0xa1ac2  srl         $v1, $t2, 11
    ctx->pc = 0x281c88u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 11));
    // 0x281c8c: 0x3c029d2c  lui         $v0, 0x9D2C
    ctx->pc = 0x281c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40236 << 16));
    // 0x281c90: 0x1435026  xor         $t2, $t2, $v1
    ctx->pc = 0x281c90u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x281c94: 0x34425680  ori         $v0, $v0, 0x5680
    ctx->pc = 0x281c94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)22144);
    // 0x281c98: 0xa19c0  sll         $v1, $t2, 7
    ctx->pc = 0x281c98u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), 7));
    // 0x281c9c: 0x3c04efc6  lui         $a0, 0xEFC6
    ctx->pc = 0x281c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61382 << 16));
    // 0x281ca0: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x281ca0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x281ca4: 0xaf050000  sw          $a1, 0x0($t8)
    ctx->pc = 0x281ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 5));
    // 0x281ca8: 0x1435026  xor         $t2, $t2, $v1
    ctx->pc = 0x281ca8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
    // 0x281cac: 0xa13c0  sll         $v0, $t2, 15
    ctx->pc = 0x281cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 15));
    // 0x281cb0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x281cb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x281cb4: 0x1425026  xor         $t2, $t2, $v0
    ctx->pc = 0x281cb4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 2));
    // 0x281cb8: 0xa1c82  srl         $v1, $t2, 18
    ctx->pc = 0x281cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 10), 18));
    // 0x281cbc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x281CBCu;
    {
        const bool branch_taken_0x281cbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281CBCu;
        // 0x281cc0: 0x1433026  xor         $a2, $t2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281cbc) {
            ctx->pc = 0x281D08u;
            goto label_281d08;
        }
    }
    ctx->pc = 0x281CC4u;
label_281cc4:
    // 0x281cc4: 0x8f828f98  lw          $v0, -0x7068($gp)
    ctx->pc = 0x281cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938520)));
    // 0x281cc8: 0x3c049d2c  lui         $a0, 0x9D2C
    ctx->pc = 0x281cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40236 << 16));
    // 0x281ccc: 0x34845680  ori         $a0, $a0, 0x5680
    ctx->pc = 0x281cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)22144);
    // 0x281cd0: 0x3c05efc6  lui         $a1, 0xEFC6
    ctx->pc = 0x281cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61382 << 16));
    // 0x281cd4: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x281cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x281cd8: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x281cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x281cdc: 0x61ac2  srl         $v1, $a2, 11
    ctx->pc = 0x281cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 11));
    // 0x281ce0: 0xaf828f98  sw          $v0, -0x7068($gp)
    ctx->pc = 0x281ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938520), GPR_U32(ctx, 2));
    // 0x281ce4: 0xc33026  xor         $a2, $a2, $v1
    ctx->pc = 0x281ce4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x281ce8: 0x611c0  sll         $v0, $a2, 7
    ctx->pc = 0x281ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 7));
    // 0x281cec: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x281cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x281cf0: 0xc23026  xor         $a2, $a2, $v0
    ctx->pc = 0x281cf0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
    // 0x281cf4: 0x61bc0  sll         $v1, $a2, 15
    ctx->pc = 0x281cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 15));
    // 0x281cf8: 0x651824  and         $v1, $v1, $a1
    ctx->pc = 0x281cf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 5));
    // 0x281cfc: 0xc33026  xor         $a2, $a2, $v1
    ctx->pc = 0x281cfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 3));
    // 0x281d00: 0x61482  srl         $v0, $a2, 18
    ctx->pc = 0x281d00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 18));
    // 0x281d04: 0xc23026  xor         $a2, $a2, $v0
    ctx->pc = 0x281d04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) ^ GPR_U64(ctx, 2));
label_281d08:
    // 0x281d08: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x281d08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281d0c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x281d0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281d10: 0x7bb10000  lq          $s1, 0x0($sp)
    ctx->pc = 0x281d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281d14: 0x3e00008  jr          $ra
    ctx->pc = 0x281D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x281D14u;
        // 0x281d18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x281D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x281D1Cu;
    // 0x281d1c: 0x0  nop
    ctx->pc = 0x281d1cu;
    // NOP
    // 0x281d20: 0x0  nop
    ctx->pc = 0x281d20u;
    // NOP
    // 0x281d24: 0x0  nop
    ctx->pc = 0x281d24u;
    // NOP
    ctx->pc = 0x281d28u;
}
