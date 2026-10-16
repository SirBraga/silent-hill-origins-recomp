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

// Function: sub_0021FF50
// Address: 0x21ff50 - 0x220178
void sub_0021FF50_0x21ff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021FF50_0x21ff50");
#endif

    switch (ctx->pc) {
        case 0x21ff50u: goto label_21ff50;
        case 0x21ff54u: goto label_21ff54;
        case 0x21ff58u: goto label_21ff58;
        case 0x21ff5cu: goto label_21ff5c;
        case 0x21ff60u: goto label_21ff60;
        case 0x21ff64u: goto label_21ff64;
        case 0x21ff68u: goto label_21ff68;
        case 0x21ff6cu: goto label_21ff6c;
        case 0x21ff70u: goto label_21ff70;
        case 0x21ff74u: goto label_21ff74;
        case 0x21ff78u: goto label_21ff78;
        case 0x21ff7cu: goto label_21ff7c;
        case 0x21ff80u: goto label_21ff80;
        case 0x21ff84u: goto label_21ff84;
        case 0x21ff88u: goto label_21ff88;
        case 0x21ff8cu: goto label_21ff8c;
        case 0x21ff90u: goto label_21ff90;
        case 0x21ff94u: goto label_21ff94;
        case 0x21ff98u: goto label_21ff98;
        case 0x21ff9cu: goto label_21ff9c;
        case 0x21ffa0u: goto label_21ffa0;
        case 0x21ffa4u: goto label_21ffa4;
        case 0x21ffa8u: goto label_21ffa8;
        case 0x21ffacu: goto label_21ffac;
        case 0x21ffb0u: goto label_21ffb0;
        case 0x21ffb4u: goto label_21ffb4;
        case 0x21ffb8u: goto label_21ffb8;
        case 0x21ffbcu: goto label_21ffbc;
        case 0x21ffc0u: goto label_21ffc0;
        case 0x21ffc4u: goto label_21ffc4;
        case 0x21ffc8u: goto label_21ffc8;
        case 0x21ffccu: goto label_21ffcc;
        case 0x21ffd0u: goto label_21ffd0;
        case 0x21ffd4u: goto label_21ffd4;
        case 0x21ffd8u: goto label_21ffd8;
        case 0x21ffdcu: goto label_21ffdc;
        case 0x21ffe0u: goto label_21ffe0;
        case 0x21ffe4u: goto label_21ffe4;
        case 0x21ffe8u: goto label_21ffe8;
        case 0x21ffecu: goto label_21ffec;
        case 0x21fff0u: goto label_21fff0;
        case 0x21fff4u: goto label_21fff4;
        case 0x21fff8u: goto label_21fff8;
        case 0x21fffcu: goto label_21fffc;
        case 0x220000u: goto label_220000;
        case 0x220004u: goto label_220004;
        case 0x220008u: goto label_220008;
        case 0x22000cu: goto label_22000c;
        case 0x220010u: goto label_220010;
        case 0x220014u: goto label_220014;
        case 0x220018u: goto label_220018;
        case 0x22001cu: goto label_22001c;
        case 0x220020u: goto label_220020;
        case 0x220024u: goto label_220024;
        case 0x220028u: goto label_220028;
        case 0x22002cu: goto label_22002c;
        case 0x220030u: goto label_220030;
        case 0x220034u: goto label_220034;
        case 0x220038u: goto label_220038;
        case 0x22003cu: goto label_22003c;
        case 0x220040u: goto label_220040;
        case 0x220044u: goto label_220044;
        case 0x220048u: goto label_220048;
        case 0x22004cu: goto label_22004c;
        case 0x220050u: goto label_220050;
        case 0x220054u: goto label_220054;
        case 0x220058u: goto label_220058;
        case 0x22005cu: goto label_22005c;
        case 0x220060u: goto label_220060;
        case 0x220064u: goto label_220064;
        case 0x220068u: goto label_220068;
        case 0x22006cu: goto label_22006c;
        case 0x220070u: goto label_220070;
        case 0x220074u: goto label_220074;
        case 0x220078u: goto label_220078;
        case 0x22007cu: goto label_22007c;
        case 0x220080u: goto label_220080;
        case 0x220084u: goto label_220084;
        case 0x220088u: goto label_220088;
        case 0x22008cu: goto label_22008c;
        case 0x220090u: goto label_220090;
        case 0x220094u: goto label_220094;
        case 0x220098u: goto label_220098;
        case 0x22009cu: goto label_22009c;
        case 0x2200a0u: goto label_2200a0;
        case 0x2200a4u: goto label_2200a4;
        case 0x2200a8u: goto label_2200a8;
        case 0x2200acu: goto label_2200ac;
        case 0x2200b0u: goto label_2200b0;
        case 0x2200b4u: goto label_2200b4;
        case 0x2200b8u: goto label_2200b8;
        case 0x2200bcu: goto label_2200bc;
        case 0x2200c0u: goto label_2200c0;
        case 0x2200c4u: goto label_2200c4;
        case 0x2200c8u: goto label_2200c8;
        case 0x2200ccu: goto label_2200cc;
        case 0x2200d0u: goto label_2200d0;
        case 0x2200d4u: goto label_2200d4;
        case 0x2200d8u: goto label_2200d8;
        case 0x2200dcu: goto label_2200dc;
        case 0x2200e0u: goto label_2200e0;
        case 0x2200e4u: goto label_2200e4;
        case 0x2200e8u: goto label_2200e8;
        case 0x2200ecu: goto label_2200ec;
        case 0x2200f0u: goto label_2200f0;
        case 0x2200f4u: goto label_2200f4;
        case 0x2200f8u: goto label_2200f8;
        case 0x2200fcu: goto label_2200fc;
        case 0x220100u: goto label_220100;
        case 0x220104u: goto label_220104;
        case 0x220108u: goto label_220108;
        case 0x22010cu: goto label_22010c;
        case 0x220110u: goto label_220110;
        case 0x220114u: goto label_220114;
        case 0x220118u: goto label_220118;
        case 0x22011cu: goto label_22011c;
        case 0x220120u: goto label_220120;
        case 0x220124u: goto label_220124;
        case 0x220128u: goto label_220128;
        case 0x22012cu: goto label_22012c;
        case 0x220130u: goto label_220130;
        case 0x220134u: goto label_220134;
        case 0x220138u: goto label_220138;
        case 0x22013cu: goto label_22013c;
        case 0x220140u: goto label_220140;
        case 0x220144u: goto label_220144;
        case 0x220148u: goto label_220148;
        case 0x22014cu: goto label_22014c;
        case 0x220150u: goto label_220150;
        case 0x220154u: goto label_220154;
        case 0x220158u: goto label_220158;
        case 0x22015cu: goto label_22015c;
        case 0x220160u: goto label_220160;
        case 0x220164u: goto label_220164;
        case 0x220168u: goto label_220168;
        case 0x22016cu: goto label_22016c;
        case 0x220170u: goto label_220170;
        case 0x220174u: goto label_220174;
        default: break;
    }

    ctx->pc = 0x21ff50u;

label_21ff50:
    // 0x21ff50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x21ff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_21ff54:
    // 0x21ff54: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x21ff54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_21ff58:
    // 0x21ff58: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x21ff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_21ff5c:
    // 0x21ff5c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x21ff5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_21ff60:
    // 0x21ff60: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x21ff60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_21ff64:
    // 0x21ff64: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x21ff64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_21ff68:
    // 0x21ff68: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21ff68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21ff6c:
    // 0x21ff6c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x21ff6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_21ff70:
    // 0x21ff70: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x21ff70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_21ff74:
    // 0x21ff74: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x21ff74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_21ff78:
    // 0x21ff78: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x21ff78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_21ff7c:
    // 0x21ff7c: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x21ff7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_21ff80:
    // 0x21ff80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21ff80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21ff84:
    // 0x21ff84: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x21ff84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_21ff88:
    // 0x21ff88: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x21ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21ff8c:
    // 0x21ff8c: 0x40f809  jalr        $v0
label_21ff90:
    if (ctx->pc == 0x21FF90u) {
        ctx->pc = 0x21FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF8Cu;
        // 0x21ff90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FF94u;
        goto label_21ff94;
    }
    ctx->pc = 0x21FF8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21FF94u);
        ctx->pc = 0x21FF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FF8Cu;
        // 0x21ff90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FF8Cu, 0x21FF94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21FF94u;
label_21ff94:
    // 0x21ff94: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x21ff94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_21ff98:
    // 0x21ff98: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21ff9c:
    // 0x21ff9c: 0xae5701a8  sw          $s7, 0x1A8($s2)
    ctx->pc = 0x21ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 424), GPR_U32(ctx, 23));
label_21ffa0:
    // 0x21ffa0: 0x24420178  addiu       $v0, $v0, 0x178
    ctx->pc = 0x21ffa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 376));
label_21ffa4:
    // 0x21ffa4: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_21ffa8:
    if (ctx->pc == 0x21FFA8u) {
        ctx->pc = 0x21FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFA4u;
        // 0x21ffa8: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFACu;
        goto label_21ffac;
    }
    ctx->pc = 0x21FFA4u;
    {
        const bool branch_taken_0x21ffa4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFA4u;
        // 0x21ffa8: 0xaee20000  sw          $v0, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffa4) {
            ctx->pc = 0x21FFC8u;
            goto label_21ffc8;
        }
    }
    ctx->pc = 0x21FFACu;
label_21ffac:
    // 0x21ffac: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x21ffacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21ffb0:
    // 0x21ffb0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x21ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_21ffb4:
    // 0x21ffb4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x21ffb4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_21ffb8:
    // 0x21ffb8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21ffb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21ffbc:
    // 0x21ffbc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21ffbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21ffc0:
    // 0x21ffc0: 0x60f809  jalr        $v1
label_21ffc4:
    if (ctx->pc == 0x21FFC4u) {
        ctx->pc = 0x21FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFC0u;
        // 0x21ffc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFC8u;
        goto label_21ffc8;
    }
    ctx->pc = 0x21FFC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21FFC8u);
        ctx->pc = 0x21FFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFC0u;
        // 0x21ffc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FFC0u, 0x21FFC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21FFC8u;
label_21ffc8:
    // 0x21ffc8: 0x8e4201c4  lw          $v0, 0x1C4($s2)
    ctx->pc = 0x21ffc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 452)));
label_21ffcc:
    // 0x21ffcc: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x21ffccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_21ffd0:
    // 0x21ffd0: 0x50600040  beql        $v1, $zero, . + 4 + (0x40 << 2)
label_21ffd4:
    if (ctx->pc == 0x21FFD4u) {
        ctx->pc = 0x21FFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFD0u;
        // 0x21ffd4: 0x8e54013c  lw          $s4, 0x13C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFD8u;
        goto label_21ffd8;
    }
    ctx->pc = 0x21FFD0u;
    {
        const bool branch_taken_0x21ffd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x21ffd0) {
            ctx->pc = 0x21FFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21FFD0u;
            // 0x21ffd4: 0x8e54013c  lw          $s4, 0x13C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2200D4u;
            goto label_2200d4;
        }
    }
    ctx->pc = 0x21FFD8u;
label_21ffd8:
    // 0x21ffd8: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x21ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
label_21ffdc:
    // 0x21ffdc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x21ffdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_21ffe0:
    // 0x21ffe0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_21ffe4:
    if (ctx->pc == 0x21FFE4u) {
        ctx->pc = 0x21FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFE0u;
        // 0x21ffe4: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21FFE8u;
        goto label_21ffe8;
    }
    ctx->pc = 0x21FFE0u;
    {
        const bool branch_taken_0x21ffe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21FFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFE0u;
        // 0x21ffe4: 0x2403002f  addiu       $v1, $zero, 0x2F (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21ffe0) {
            ctx->pc = 0x220000u;
            goto label_220000;
        }
    }
    ctx->pc = 0x21FFE8u;
label_21ffe8:
    // 0x21ffe8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x21ffe8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21ffec:
    // 0x21ffec: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x21ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_21fff0:
    // 0x21fff0: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21fff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21fff4:
    // 0x21fff4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21fff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21fff8:
    // 0x21fff8: 0x60f809  jalr        $v1
label_21fffc:
    if (ctx->pc == 0x21FFFCu) {
        ctx->pc = 0x21FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFF8u;
        // 0x21fffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220000u;
        goto label_220000;
    }
    ctx->pc = 0x21FFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x220000u);
        ctx->pc = 0x21FFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21FFF8u;
        // 0x21fffc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21FFF8u, 0x220000u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x220000u;
label_220000:
    // 0x220000: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x220000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_220004:
    // 0x220004: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220008:
    // 0x220008: 0x8e460024  lw          $a2, 0x24($s2)
    ctx->pc = 0x220008u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_22000c:
    // 0x22000c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22000cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_220010:
    // 0x220010: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x220010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_220014:
    // 0x220014: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x220014u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_220018:
    // 0x220018: 0x8e5501a8  lw          $s5, 0x1A8($s2)
    ctx->pc = 0x220018u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 424)));
label_22001c:
    // 0x22001c: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x22001cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
label_220020:
    // 0x220020: 0x40f809  jalr        $v0
label_220024:
    if (ctx->pc == 0x220024u) {
        ctx->pc = 0x220024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220020u;
        // 0x220024: 0x8e50013c  lw          $s0, 0x13C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220028u;
        goto label_220028;
    }
    ctx->pc = 0x220020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220028u);
        ctx->pc = 0x220024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220020u;
        // 0x220024: 0x8e50013c  lw          $s0, 0x13C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220020u, 0x220028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x220028u;
label_220028:
    // 0x220028: 0xaea20038  sw          $v0, 0x38($s5)
    ctx->pc = 0x220028u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 56), GPR_U32(ctx, 2));
label_22002c:
    // 0x22002c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x22002cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_220030:
    // 0x220030: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x220030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_220034:
    // 0x220034: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x220034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_220038:
    // 0x220038: 0xaea2003c  sw          $v0, 0x3C($s5)
    ctx->pc = 0x220038u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 60), GPR_U32(ctx, 2));
label_22003c:
    // 0x22003c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x22003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_220040:
    // 0x220040: 0x18400022  blez        $v0, . + 4 + (0x22 << 2)
label_220044:
    if (ctx->pc == 0x220044u) {
        ctx->pc = 0x220044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220040u;
        // 0x220044: 0x8e5300d8  lw          $s3, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220048u;
        goto label_220048;
    }
    ctx->pc = 0x220040u;
    {
        const bool branch_taken_0x220040 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x220044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220040u;
        // 0x220044: 0x8e5300d8  lw          $s3, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220040) {
            ctx->pc = 0x2200CCu;
            goto label_2200cc;
        }
    }
    ctx->pc = 0x220048u;
label_220048:
    // 0x220048: 0x26160004  addiu       $s6, $s0, 0x4
    ctx->pc = 0x220048u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_22004c:
    // 0x22004c: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x22004cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_220050:
    // 0x220050: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x220050u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_220054:
    // 0x220054: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x220054u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_220058:
    // 0x220058: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x220058u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22005c:
    // 0x22005c: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x22005cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
label_220060:
    // 0x220060: 0x26730054  addiu       $s3, $s3, 0x54
    ctx->pc = 0x220060u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 84));
label_220064:
    // 0x220064: 0x2038018  mult        $s0, $s0, $v1
    ctx->pc = 0x220064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_220068:
    // 0x220068: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_22006c:
    if (ctx->pc == 0x22006Cu) {
        ctx->pc = 0x22006Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220068u;
        // 0x22006c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x220070u;
        goto label_220070;
    }
    ctx->pc = 0x220068u;
    {
        const bool branch_taken_0x220068 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220068) {
            ctx->pc = 0x22006Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220068u;
            // 0x22006c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x220070u;
            goto label_220070;
        }
    }
    ctx->pc = 0x220070u;
label_220070:
    // 0x220070: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x220070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_220074:
    // 0x220074: 0x202001a  div         $zero, $s0, $v0
    ctx->pc = 0x220074u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 16);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_220078:
    // 0x220078: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x220078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_22007c:
    // 0x22007c: 0x8012  mflo        $s0
    ctx->pc = 0x22007cu;
    SET_GPR_U64(ctx, 16, ctx->lo);
label_220080:
    // 0x220080: 0x2168818  mult        $s1, $s0, $s6
    ctx->pc = 0x220080u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_220084:
    // 0x220084: 0x40f809  jalr        $v0
label_220088:
    if (ctx->pc == 0x220088u) {
        ctx->pc = 0x220088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220084u;
        // 0x220088: 0x1130c0  sll         $a2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22008Cu;
        goto label_22008c;
    }
    ctx->pc = 0x220084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22008Cu);
        ctx->pc = 0x220088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220084u;
        // 0x220088: 0x1130c0  sll         $a2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220084u, 0x22008Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x22008Cu;
label_22008c:
    // 0x22008c: 0x8ea30038  lw          $v1, 0x38($s5)
    ctx->pc = 0x22008cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 56)));
label_220090:
    // 0x220090: 0x142080  sll         $a0, $s4, 2
    ctx->pc = 0x220090u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
label_220094:
    // 0x220094: 0x108080  sll         $s0, $s0, 2
    ctx->pc = 0x220094u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_220098:
    // 0x220098: 0x118880  sll         $s1, $s1, 2
    ctx->pc = 0x220098u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_22009c:
    // 0x22009c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x22009cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2200a0:
    // 0x2200a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2200a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2200a4:
    // 0x2200a4: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2200a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2200a8:
    // 0x2200a8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x2200a8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_2200ac:
    // 0x2200ac: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2200acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2200b0:
    // 0x2200b0: 0x8ea3003c  lw          $v1, 0x3C($s5)
    ctx->pc = 0x2200b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 60)));
label_2200b4:
    // 0x2200b4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2200b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2200b8:
    // 0x2200b8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2200b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2200bc:
    // 0x2200bc: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2200bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2200c0:
    // 0x2200c0: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x2200c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2200c4:
    // 0x2200c4: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
label_2200c8:
    if (ctx->pc == 0x2200C8u) {
        ctx->pc = 0x2200C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200C4u;
        // 0x2200c8: 0x8e630024  lw          $v1, 0x24($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2200CCu;
        goto label_2200cc;
    }
    ctx->pc = 0x2200C4u;
    {
        const bool branch_taken_0x2200c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2200c4) {
            ctx->pc = 0x2200C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2200C4u;
            // 0x2200c8: 0x8e630024  lw          $v1, 0x24($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x220050u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_220050;
        }
    }
    ctx->pc = 0x2200CCu;
label_2200cc:
    // 0x2200cc: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x2200ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
label_2200d0:
    // 0x2200d0: 0x24540002  addiu       $s4, $v0, 0x2
    ctx->pc = 0x2200d0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_2200d4:
    // 0x2200d4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2200d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2200d8:
    // 0x2200d8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2200d8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2200dc:
    // 0x2200dc: 0x1840001b  blez        $v0, . + 4 + (0x1B << 2)
label_2200e0:
    if (ctx->pc == 0x2200E0u) {
        ctx->pc = 0x2200E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200DCu;
        // 0x2200e0: 0x8e5000d8  lw          $s0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2200E4u;
        goto label_2200e4;
    }
    ctx->pc = 0x2200DCu;
    {
        const bool branch_taken_0x2200dc = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x2200E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2200DCu;
        // 0x2200e0: 0x8e5000d8  lw          $s0, 0xD8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2200dc) {
            ctx->pc = 0x22014Cu;
            goto label_22014c;
        }
    }
    ctx->pc = 0x2200E4u;
label_2200e4:
    // 0x2200e4: 0x26f10008  addiu       $s1, $s7, 0x8
    ctx->pc = 0x2200e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_2200e8:
    // 0x2200e8: 0x8e080024  lw          $t0, 0x24($s0)
    ctx->pc = 0x2200e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_2200ec:
    // 0x2200ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2200ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2200f0:
    // 0x2200f0: 0x8e07000c  lw          $a3, 0xC($s0)
    ctx->pc = 0x2200f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2200f4:
    // 0x2200f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2200f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2200f8:
    // 0x2200f8: 0x8e42013c  lw          $v0, 0x13C($s2)
    ctx->pc = 0x2200f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 316)));
label_2200fc:
    // 0x2200fc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2200fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_220100:
    // 0x220100: 0xe83818  mult        $a3, $a3, $t0
    ctx->pc = 0x220100u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 7, (int32_t)result); }
label_220104:
    // 0x220104: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_220108:
    if (ctx->pc == 0x220108u) {
        ctx->pc = 0x220108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220104u;
        // 0x220108: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x22010Cu;
        goto label_22010c;
    }
    ctx->pc = 0x220104u;
    {
        const bool branch_taken_0x220104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x220104) {
            ctx->pc = 0x220108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x220104u;
            // 0x220108: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x22010Cu;
            goto label_22010c;
        }
    }
    ctx->pc = 0x22010Cu;
label_22010c:
    // 0x22010c: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x22010cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_220110:
    // 0x220110: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x220110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_220114:
    // 0x220114: 0xe2001a  div         $zero, $a3, $v0
    ctx->pc = 0x220114u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_220118:
    // 0x220118: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x220118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_22011c:
    // 0x22011c: 0x3812  mflo        $a3
    ctx->pc = 0x22011cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_220120:
    // 0x220120: 0xc80018  mult        $zero, $a2, $t0
    ctx->pc = 0x220120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 8); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_220124:
    // 0x220124: 0x3012  mflo        $a2
    ctx->pc = 0x220124u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_220128:
    // 0x220128: 0xf40018  mult        $zero, $a3, $s4
    ctx->pc = 0x220128u;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 20); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_22012c:
    // 0x22012c: 0x3812  mflo        $a3
    ctx->pc = 0x22012cu;
    SET_GPR_U64(ctx, 7, ctx->lo);
label_220130:
    // 0x220130: 0x40f809  jalr        $v0
label_220134:
    if (ctx->pc == 0x220134u) {
        ctx->pc = 0x220134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220130u;
        // 0x220134: 0x26100054  addiu       $s0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220138u;
        goto label_220138;
    }
    ctx->pc = 0x220130u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x220138u);
        ctx->pc = 0x220134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220130u;
        // 0x220134: 0x26100054  addiu       $s0, $s0, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 84));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220130u, 0x220138u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x220138u;
label_220138:
    // 0x220138: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x220138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_22013c:
    // 0x22013c: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x22013cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_220140:
    // 0x220140: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x220140u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_220144:
    // 0x220144: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_220148:
    if (ctx->pc == 0x220148u) {
        ctx->pc = 0x220148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220144u;
        // 0x220148: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x22014Cu;
        goto label_22014c;
    }
    ctx->pc = 0x220144u;
    {
        const bool branch_taken_0x220144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x220148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220144u;
        // 0x220148: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x220144) {
            ctx->pc = 0x2200E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2200e8;
        }
    }
    ctx->pc = 0x22014Cu;
label_22014c:
    // 0x22014c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x22014cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_220150:
    // 0x220150: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x220150u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_220154:
    // 0x220154: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x220154u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_220158:
    // 0x220158: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x220158u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22015c:
    // 0x22015c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x22015cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_220160:
    // 0x220160: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x220160u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_220164:
    // 0x220164: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x220164u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_220168:
    // 0x220168: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x220168u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22016c:
    // 0x22016c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x22016cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_220170:
    // 0x220170: 0x3e00008  jr          $ra
label_220174:
    if (ctx->pc == 0x220174u) {
        ctx->pc = 0x220174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220170u;
        // 0x220174: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x220178u;
        goto label_fallthrough_0x220170;
    }
    ctx->pc = 0x220170u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x220170u;
        // 0x220174: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x220170u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x220170:
    ctx->pc = 0x220178u;
}
