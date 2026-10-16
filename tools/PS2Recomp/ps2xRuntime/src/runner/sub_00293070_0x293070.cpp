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

// Function: sub_00293070
// Address: 0x293070 - 0x2931d0
void sub_00293070_0x293070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293070_0x293070");
#endif

    switch (ctx->pc) {
        case 0x293070u: goto label_293070;
        case 0x293074u: goto label_293074;
        case 0x293078u: goto label_293078;
        case 0x29307cu: goto label_29307c;
        case 0x293080u: goto label_293080;
        case 0x293084u: goto label_293084;
        case 0x293088u: goto label_293088;
        case 0x29308cu: goto label_29308c;
        case 0x293090u: goto label_293090;
        case 0x293094u: goto label_293094;
        case 0x293098u: goto label_293098;
        case 0x29309cu: goto label_29309c;
        case 0x2930a0u: goto label_2930a0;
        case 0x2930a4u: goto label_2930a4;
        case 0x2930a8u: goto label_2930a8;
        case 0x2930acu: goto label_2930ac;
        case 0x2930b0u: goto label_2930b0;
        case 0x2930b4u: goto label_2930b4;
        case 0x2930b8u: goto label_2930b8;
        case 0x2930bcu: goto label_2930bc;
        case 0x2930c0u: goto label_2930c0;
        case 0x2930c4u: goto label_2930c4;
        case 0x2930c8u: goto label_2930c8;
        case 0x2930ccu: goto label_2930cc;
        case 0x2930d0u: goto label_2930d0;
        case 0x2930d4u: goto label_2930d4;
        case 0x2930d8u: goto label_2930d8;
        case 0x2930dcu: goto label_2930dc;
        case 0x2930e0u: goto label_2930e0;
        case 0x2930e4u: goto label_2930e4;
        case 0x2930e8u: goto label_2930e8;
        case 0x2930ecu: goto label_2930ec;
        case 0x2930f0u: goto label_2930f0;
        case 0x2930f4u: goto label_2930f4;
        case 0x2930f8u: goto label_2930f8;
        case 0x2930fcu: goto label_2930fc;
        case 0x293100u: goto label_293100;
        case 0x293104u: goto label_293104;
        case 0x293108u: goto label_293108;
        case 0x29310cu: goto label_29310c;
        case 0x293110u: goto label_293110;
        case 0x293114u: goto label_293114;
        case 0x293118u: goto label_293118;
        case 0x29311cu: goto label_29311c;
        case 0x293120u: goto label_293120;
        case 0x293124u: goto label_293124;
        case 0x293128u: goto label_293128;
        case 0x29312cu: goto label_29312c;
        case 0x293130u: goto label_293130;
        case 0x293134u: goto label_293134;
        case 0x293138u: goto label_293138;
        case 0x29313cu: goto label_29313c;
        case 0x293140u: goto label_293140;
        case 0x293144u: goto label_293144;
        case 0x293148u: goto label_293148;
        case 0x29314cu: goto label_29314c;
        case 0x293150u: goto label_293150;
        case 0x293154u: goto label_293154;
        case 0x293158u: goto label_293158;
        case 0x29315cu: goto label_29315c;
        case 0x293160u: goto label_293160;
        case 0x293164u: goto label_293164;
        case 0x293168u: goto label_293168;
        case 0x29316cu: goto label_29316c;
        case 0x293170u: goto label_293170;
        case 0x293174u: goto label_293174;
        case 0x293178u: goto label_293178;
        case 0x29317cu: goto label_29317c;
        case 0x293180u: goto label_293180;
        case 0x293184u: goto label_293184;
        case 0x293188u: goto label_293188;
        case 0x29318cu: goto label_29318c;
        case 0x293190u: goto label_293190;
        case 0x293194u: goto label_293194;
        case 0x293198u: goto label_293198;
        case 0x29319cu: goto label_29319c;
        case 0x2931a0u: goto label_2931a0;
        case 0x2931a4u: goto label_2931a4;
        case 0x2931a8u: goto label_2931a8;
        case 0x2931acu: goto label_2931ac;
        case 0x2931b0u: goto label_2931b0;
        case 0x2931b4u: goto label_2931b4;
        case 0x2931b8u: goto label_2931b8;
        case 0x2931bcu: goto label_2931bc;
        case 0x2931c0u: goto label_2931c0;
        case 0x2931c4u: goto label_2931c4;
        case 0x2931c8u: goto label_2931c8;
        case 0x2931ccu: goto label_2931cc;
        default: break;
    }

    ctx->pc = 0x293070u;

label_293070:
    // 0x293070: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x293070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_293074:
    // 0x293074: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x293074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
label_293078:
    // 0x293078: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x293078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_29307c:
    // 0x29307c: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x29307cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_293080:
    // 0x293080: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x293080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_293084:
    // 0x293084: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x293084u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_293088:
    // 0x293088: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x293088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_29308c:
    // 0x29308c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x29308cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_293090:
    // 0x293090: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x293090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_293094:
    // 0x293094: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x293094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_293098:
    // 0x293098: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x293098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_29309c:
    // 0x29309c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x29309cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2930a0:
    // 0x2930a0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2930a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_2930a4:
    // 0x2930a4: 0x8ed10018  lw          $s1, 0x18($s6)
    ctx->pc = 0x2930a4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 24)));
label_2930a8:
    // 0x2930a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2930a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2930ac:
    // 0x2930ac: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2930acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2930b0:
    // 0x2930b0: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_2930b4:
    if (ctx->pc == 0x2930B4u) {
        ctx->pc = 0x2930B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930B0u;
        // 0x2930b4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930B8u;
        goto label_2930b8;
    }
    ctx->pc = 0x2930B0u;
    {
        const bool branch_taken_0x2930b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2930B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930B0u;
        // 0x2930b4: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930b0) {
            ctx->pc = 0x293198u;
            goto label_293198;
        }
    }
    ctx->pc = 0x2930B8u;
label_2930b8:
    // 0x2930b8: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
label_2930bc:
    if (ctx->pc == 0x2930BCu) {
        ctx->pc = 0x2930BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930B8u;
        // 0x2930bc: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930C0u;
        goto label_2930c0;
    }
    ctx->pc = 0x2930B8u;
    {
        const bool branch_taken_0x2930b8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2930BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930B8u;
        // 0x2930bc: 0x2c0102d  daddu       $v0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930b8) {
            ctx->pc = 0x29319Cu;
            goto label_29319c;
        }
    }
    ctx->pc = 0x2930C0u;
label_2930c0:
    // 0x2930c0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2930c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2930c4:
    // 0x2930c4: 0x18400034  blez        $v0, . + 4 + (0x34 << 2)
label_2930c8:
    if (ctx->pc == 0x2930C8u) {
        ctx->pc = 0x2930C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930C4u;
        // 0x2930c8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930CCu;
        goto label_2930cc;
    }
    ctx->pc = 0x2930C4u;
    {
        const bool branch_taken_0x2930c4 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2930C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930C4u;
        // 0x2930c8: 0x3c030073  lui         $v1, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930c4) {
            ctx->pc = 0x293198u;
            goto label_293198;
        }
    }
    ctx->pc = 0x2930CCu;
label_2930cc:
    // 0x2930cc: 0x8e300014  lw          $s0, 0x14($s1)
    ctx->pc = 0x2930ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2930d0:
    // 0x2930d0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x2930d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2930d4:
    // 0x2930d4: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2930d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2930d8:
    // 0x2930d8: 0x2040018  mult        $zero, $s0, $a0
    ctx->pc = 0x2930d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_2930dc:
    // 0x2930dc: 0x24630fc8  addiu       $v1, $v1, 0xFC8
    ctx->pc = 0x2930dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4040));
label_2930e0:
    // 0x2930e0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x2930e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_2930e4:
    // 0x2930e4: 0x34a50198  ori         $a1, $a1, 0x198
    ctx->pc = 0x2930e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)408);
label_2930e8:
    // 0x2930e8: 0x2012  mflo        $a0
    ctx->pc = 0x2930e8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_2930ec:
    // 0x2930ec: 0x40f809  jalr        $v0
label_2930f0:
    if (ctx->pc == 0x2930F0u) {
        ctx->pc = 0x2930F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930ECu;
        // 0x2930f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930F4u;
        goto label_2930f4;
    }
    ctx->pc = 0x2930ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2930F4u);
        ctx->pc = 0x2930F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930ECu;
        // 0x2930f0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2930ECu, 0x2930F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2930F4u;
label_2930f4:
    // 0x2930f4: 0x8ec40004  lw          $a0, 0x4($s6)
    ctx->pc = 0x2930f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2930f8:
    // 0x2930f8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2930f8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2930fc:
    // 0x2930fc: 0xc08994a  jal         func_226528
label_293100:
    if (ctx->pc == 0x293100u) {
        ctx->pc = 0x293100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930FCu;
        // 0x293100: 0x8e35005c  lw          $s5, 0x5C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293104u;
        goto label_293104;
    }
    ctx->pc = 0x2930FCu;
    SET_GPR_U32(ctx, 31, 0x293104u);
    ctx->pc = 0x293100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2930FCu;
    // 0x293100: 0x8e35005c  lw          $s5, 0x5C($s1) (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x226528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x226528u, 0x2930FCu, 0x293104u)) {
        return;
    }
    ctx->pc = 0x293104u;
label_293104:
    // 0x293104: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x293104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_293108:
    // 0x293108: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x293108u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29310c:
    // 0x29310c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x29310cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_293110:
    // 0x293110: 0xc093afa  jal         func_24EBE8
label_293114:
    if (ctx->pc == 0x293114u) {
        ctx->pc = 0x293114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293110u;
        // 0x293114: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293118u;
        goto label_293118;
    }
    ctx->pc = 0x293110u;
    SET_GPR_U32(ctx, 31, 0x293118u);
    ctx->pc = 0x293114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293110u;
    // 0x293114: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24EBE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24EBE8u, 0x293110u, 0x293118u)) {
        return;
    }
    ctx->pc = 0x293118u;
label_293118:
    // 0x293118: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x293118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_29311c:
    // 0x29311c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_293120:
    if (ctx->pc == 0x293120u) {
        ctx->pc = 0x293120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29311Cu;
        // 0x293120: 0x8e370034  lw          $s7, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293124u;
        goto label_293124;
    }
    ctx->pc = 0x29311Cu;
    {
        const bool branch_taken_0x29311c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29311Cu;
        // 0x293120: 0x8e370034  lw          $s7, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29311c) {
            ctx->pc = 0x293184u;
            goto label_293184;
        }
    }
    ctx->pc = 0x293124u;
label_293124:
    // 0x293124: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x293124u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293128:
    // 0x293128: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x293128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_29312c:
    // 0x29312c: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x29312cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_293130:
    // 0x293130: 0x538021  addu        $s0, $v0, $s3
    ctx->pc = 0x293130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_293134:
    // 0x293134: 0x8e850008  lw          $a1, 0x8($s4)
    ctx->pc = 0x293134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_293138:
    // 0x293138: 0x96030006  lhu         $v1, 0x6($s0)
    ctx->pc = 0x293138u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
label_29313c:
    // 0x29313c: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x29313cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_293140:
    // 0x293140: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x293140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_293144:
    // 0x293144: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x293144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_293148:
    // 0x293148: 0x40f809  jalr        $v0
label_29314c:
    if (ctx->pc == 0x29314Cu) {
        ctx->pc = 0x29314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293148u;
        // 0x29314c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293150u;
        goto label_293150;
    }
    ctx->pc = 0x293148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x293150u);
        ctx->pc = 0x29314Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293148u;
        // 0x29314c: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293148u, 0x293150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x293150u;
label_293150:
    // 0x293150: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_293154:
    if (ctx->pc == 0x293154u) {
        ctx->pc = 0x293154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293150u;
        // 0x293154: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293158u;
        goto label_293158;
    }
    ctx->pc = 0x293150u;
    {
        const bool branch_taken_0x293150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x293154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293150u;
        // 0x293154: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293150) {
            ctx->pc = 0x293170u;
            goto label_293170;
        }
    }
    ctx->pc = 0x293158u;
label_293158:
    // 0x293158: 0x96080004  lhu         $t0, 0x4($s0)
    ctx->pc = 0x293158u;
    SET_GPR_ZE32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_29315c:
    // 0x29315c: 0x8ea50014  lw          $a1, 0x14($s5)
    ctx->pc = 0x29315cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_293160:
    // 0x293160: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x293160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_293164:
    // 0x293164: 0x96060000  lhu         $a2, 0x0($s0)
    ctx->pc = 0x293164u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_293168:
    // 0x293168: 0xc0a4baa  jal         func_292EA8
label_29316c:
    if (ctx->pc == 0x29316Cu) {
        ctx->pc = 0x29316Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293168u;
        // 0x29316c: 0x96070002  lhu         $a3, 0x2($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293170u;
        goto label_293170;
    }
    ctx->pc = 0x293168u;
    SET_GPR_U32(ctx, 31, 0x293170u);
    ctx->pc = 0x29316Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293168u;
    // 0x29316c: 0x96070002  lhu         $a3, 0x2($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292EA8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x292EA8u, 0x293168u, 0x293170u)) {
        return;
    }
    ctx->pc = 0x293170u;
label_293170:
    // 0x293170: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x293170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_293174:
    // 0x293174: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x293174u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_293178:
    // 0x293178: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x293178u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_29317c:
    // 0x29317c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_293180:
    if (ctx->pc == 0x293180u) {
        ctx->pc = 0x293180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29317Cu;
        // 0x293180: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293184u;
        goto label_293184;
    }
    ctx->pc = 0x29317Cu;
    {
        const bool branch_taken_0x29317c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x293180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29317Cu;
        // 0x293180: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29317c) {
            ctx->pc = 0x293128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_293128;
        }
    }
    ctx->pc = 0x293184u;
label_293184:
    // 0x293184: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x293184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_293188:
    // 0x293188: 0x24430fc8  addiu       $v1, $v0, 0xFC8
    ctx->pc = 0x293188u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
label_29318c:
    // 0x29318c: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x29318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_293190:
    // 0x293190: 0x40f809  jalr        $v0
label_293194:
    if (ctx->pc == 0x293194u) {
        ctx->pc = 0x293194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293190u;
        // 0x293194: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293198u;
        goto label_293198;
    }
    ctx->pc = 0x293190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x293198u);
        ctx->pc = 0x293194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293190u;
        // 0x293194: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293190u, 0x293198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x293198u;
label_293198:
    // 0x293198: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x293198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29319c:
    // 0x29319c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x29319cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2931a0:
    // 0x2931a0: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2931a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2931a4:
    // 0x2931a4: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2931a4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2931a8:
    // 0x2931a8: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2931a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2931ac:
    // 0x2931ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2931acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2931b0:
    // 0x2931b0: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2931b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2931b4:
    // 0x2931b4: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2931b4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2931b8:
    // 0x2931b8: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x2931b8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2931bc:
    // 0x2931bc: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x2931bcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2931c0:
    // 0x2931c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2931c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2931c4:
    // 0x2931c4: 0x3e00008  jr          $ra
label_2931c8:
    if (ctx->pc == 0x2931C8u) {
        ctx->pc = 0x2931C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931C4u;
        // 0x2931c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2931CCu;
        goto label_2931cc;
    }
    ctx->pc = 0x2931C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2931C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2931C4u;
        // 0x2931c8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2931C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2931CCu;
label_2931cc:
    // 0x2931cc: 0x0  nop
    ctx->pc = 0x2931ccu;
    // NOP
    ctx->pc = 0x2931d0u;
}
