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

// Function: sub_00307318
// Address: 0x307318 - 0x307448
void sub_00307318_0x307318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00307318_0x307318");
#endif

    switch (ctx->pc) {
        case 0x307344u: goto label_307344;
        case 0x30734cu: goto label_30734c;
        case 0x307354u: goto label_307354;
        case 0x307360u: goto label_307360;
        case 0x30736cu: goto label_30736c;
        default: break;
    }

    ctx->pc = 0x307318u;

    // 0x307318: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x307318u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x30731c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x30731cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x307320: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x307320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x307324: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x307324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307328: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x307328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30732c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x30732cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307330: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x307330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x307334: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x307334u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307338: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x307338u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x30733c: 0xc0c1c50  jal         func_307140
    ctx->pc = 0x30733Cu;
    SET_GPR_U32(ctx, 31, 0x307344u);
    ctx->pc = 0x307340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30733Cu;
    // 0x307340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307140u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x307140u, 0x30733Cu, 0x307344u)) {
        return;
    }
    ctx->pc = 0x307344u;
label_307344:
    // 0x307344: 0xc0c1c80  jal         func_307200
    ctx->pc = 0x307344u;
    SET_GPR_U32(ctx, 31, 0x30734Cu);
    ctx->pc = 0x307348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307344u;
    // 0x307348: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x307200u, 0x307344u, 0x30734Cu)) {
        return;
    }
    ctx->pc = 0x30734Cu;
label_30734c:
    // 0x30734c: 0xc0c1c82  jal         func_307208
    ctx->pc = 0x30734Cu;
    SET_GPR_U32(ctx, 31, 0x307354u);
    ctx->pc = 0x307350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30734Cu;
    // 0x307350: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307208u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x307208u, 0x30734Cu, 0x307354u)) {
        return;
    }
    ctx->pc = 0x307354u;
label_307354:
    // 0x307354: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x307354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307358: 0xc0c1c86  jal         func_307218
    ctx->pc = 0x307358u;
    SET_GPR_U32(ctx, 31, 0x307360u);
    ctx->pc = 0x30735Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307358u;
    // 0x30735c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307218u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x307218u, 0x307358u, 0x307360u)) {
        return;
    }
    ctx->pc = 0x307360u;
label_307360:
    // 0x307360: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x307360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x307364: 0xc0c1c96  jal         func_307258
    ctx->pc = 0x307364u;
    SET_GPR_U32(ctx, 31, 0x30736Cu);
    ctx->pc = 0x307368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x307364u;
    // 0x307368: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307258u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x307258u, 0x307364u, 0x30736Cu)) {
        return;
    }
    ctx->pc = 0x30736Cu;
label_30736c:
    // 0x30736c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x30736cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x307370: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x307370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x307374: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x307374u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x307378: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x307378u;
    {
        const bool branch_taken_0x307378 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x30737Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307378u;
        // 0x30737c: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307378) {
            ctx->pc = 0x3073B4u;
            goto label_3073b4;
        }
    }
    ctx->pc = 0x307380u;
    // 0x307380: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x307380u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x307384: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307384u;
    {
        const bool branch_taken_0x307384 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x307388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307384u;
        // 0x307388: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307384) {
            ctx->pc = 0x307398u;
            goto label_307398;
        }
    }
    ctx->pc = 0x30738Cu;
    // 0x30738c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x30738cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
    // 0x307390: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x307390u;
    {
        const bool branch_taken_0x307390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x307390) {
            ctx->pc = 0x307394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x307390u;
            // 0x307394: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3073ACu;
            goto label_3073ac;
        }
    }
    ctx->pc = 0x307398u;
label_307398:
    // 0x307398: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x307398u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x30739c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x30739cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3073a0: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x3073a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x3073a4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x3073A4u;
    {
        const bool branch_taken_0x3073a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3073A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073A4u;
        // 0x3073a8: 0x34420004  ori         $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3073a4) {
            ctx->pc = 0x307408u;
            goto label_307408;
        }
    }
    ctx->pc = 0x3073ACu;
label_3073ac:
    // 0x3073ac: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3073ACu;
    {
        const bool branch_taken_0x3073ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3073B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073ACu;
        // 0x3073b0: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3073ac) {
            ctx->pc = 0x3073CCu;
            goto label_3073cc;
        }
    }
    ctx->pc = 0x3073B4u;
label_3073b4:
    // 0x3073b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3073b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3073b8: 0xa2420029  sb          $v0, 0x29($s2)
    ctx->pc = 0x3073b8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x3073bc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x3073bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x3073c0: 0x90633550  lbu         $v1, 0x3550($v1)
    ctx->pc = 0x3073c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x3073c4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x3073C4u;
    {
        const bool branch_taken_0x3073c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3073C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073C4u;
        // 0x3073c8: 0xa2430028  sb          $v1, 0x28($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3073c4) {
            ctx->pc = 0x30740Cu;
            goto label_30740c;
        }
    }
    ctx->pc = 0x3073CCu;
label_3073cc:
    // 0x3073cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3073CCu;
    {
        const bool branch_taken_0x3073cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3073D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073CCu;
        // 0x3073d0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3073cc) {
            ctx->pc = 0x3073E8u;
            goto label_3073e8;
        }
    }
    ctx->pc = 0x3073D4u;
    // 0x3073d4: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x3073d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x3073d8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3073d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x3073dc: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x3073dcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x3073e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3073E0u;
    {
        const bool branch_taken_0x3073e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3073E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073E0u;
        // 0x3073e4: 0x34420010  ori         $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3073e0) {
            ctx->pc = 0x307408u;
            goto label_307408;
        }
    }
    ctx->pc = 0x3073E8u;
label_3073e8:
    // 0x3073e8: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x3073e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x3073ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3073ECu;
    {
        const bool branch_taken_0x3073ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3073F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3073ECu;
        // 0x3073f0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3073ec) {
            ctx->pc = 0x3073F8u;
            goto label_3073f8;
        }
    }
    ctx->pc = 0x3073F4u;
    // 0x3073f4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x3073f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3073f8:
    // 0x3073f8: 0xa2430029  sb          $v1, 0x29($s2)
    ctx->pc = 0x3073f8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x3073fc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3073fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x307400: 0x90423550  lbu         $v0, 0x3550($v0)
    ctx->pc = 0x307400u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x307404: 0x34420014  ori         $v0, $v0, 0x14
    ctx->pc = 0x307404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20);
label_307408:
    // 0x307408: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x307408u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_30740c:
    // 0x30740c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x30740cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x307410: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x307410u;
    {
        const bool branch_taken_0x307410 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x307414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x307410u;
        // 0x307414: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x307410) {
            ctx->pc = 0x307424u;
            goto label_307424;
        }
    }
    ctx->pc = 0x307418u;
    // 0x307418: 0x92420028  lbu         $v0, 0x28($s2)
    ctx->pc = 0x307418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x30741c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x30741cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x307420: 0xa2420028  sb          $v0, 0x28($s2)
    ctx->pc = 0x307420u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 40), (uint8_t)GPR_U32(ctx, 2));
label_307424:
    // 0x307424: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x307424u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x307428: 0xa243002a  sb          $v1, 0x2A($s2)
    ctx->pc = 0x307428u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 42), (uint8_t)GPR_U32(ctx, 3));
    // 0x30742c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30742cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x307430: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x307430u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x307434: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x307434u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x307438: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x307438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30743c: 0x3e00008  jr          $ra
    ctx->pc = 0x30743Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x307440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30743Cu;
        // 0x307440: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x30743Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x307444u;
    // 0x307444: 0x0  nop
    ctx->pc = 0x307444u;
    // NOP
    ctx->pc = 0x307448u;
}
