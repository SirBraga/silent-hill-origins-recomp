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

// Function: sub_00260F58
// Address: 0x260f58 - 0x261f38
void sub_00260F58_0x260f58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260F58_0x260f58");
#endif

    switch (ctx->pc) {
        case 0x261128u: goto label_261128;
        case 0x261178u: goto label_261178;
        case 0x261278u: goto label_261278;
        case 0x2612c8u: goto label_2612c8;
        case 0x2613d0u: goto label_2613d0;
        case 0x261448u: goto label_261448;
        case 0x261500u: goto label_261500;
        case 0x2615c8u: goto label_2615c8;
        case 0x261600u: goto label_261600;
        case 0x2616d8u: goto label_2616d8;
        case 0x261720u: goto label_261720;
        case 0x2617f0u: goto label_2617f0;
        case 0x261858u: goto label_261858;
        case 0x261910u: goto label_261910;
        case 0x2619d8u: goto label_2619d8;
        case 0x261a10u: goto label_261a10;
        case 0x261ad8u: goto label_261ad8;
        case 0x261b28u: goto label_261b28;
        case 0x261c50u: goto label_261c50;
        case 0x261ca0u: goto label_261ca0;
        case 0x261dc8u: goto label_261dc8;
        case 0x261e20u: goto label_261e20;
        case 0x261ec0u: goto label_261ec0;
        default: break;
    }

    ctx->pc = 0x260f58u;

    // 0x260f58: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x260f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x260f5c: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x260f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x260f60: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x260f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x260f64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x260f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260f68: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x260f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x260f6c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x260f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x260f70: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x260f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x260f74: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x260f74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x260f78: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x260f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x260f7c: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x260f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x260f80: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x260f80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x260f84: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x260f84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x260f88: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x260f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x260f8c: 0x8c790018  lw          $t9, 0x18($v1)
    ctx->pc = 0x260f8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x260f90: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x260f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x260f94: 0x2463004c  addiu       $v1, $v1, 0x4C
    ctx->pc = 0x260f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 76));
    // 0x260f98: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x260f98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x260f9c: 0x248e0018  addiu       $t6, $a0, 0x18
    ctx->pc = 0x260f9cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x260fa0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x260fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x260fa4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x260fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x260fa8: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x260fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x260fac: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x260FACu;
    {
        const bool branch_taken_0x260fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FACu;
        // 0x260fb0: 0x8dde000c  lw          $fp, 0xC($t6) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fac) {
            ctx->pc = 0x260FD8u;
            goto label_260fd8;
        }
    }
    ctx->pc = 0x260FB4u;
    // 0x260fb4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x260fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x260fb8: 0x2443b820  addiu       $v1, $v0, -0x47E0
    ctx->pc = 0x260fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948896));
    // 0x260fbc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260fc0: 0x2476000f  addiu       $s6, $v1, 0xF
    ctx->pc = 0x260fc0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
    // 0x260fc4: 0x90700007  lbu         $s0, 0x7($v1)
    ctx->pc = 0x260fc4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x6AB827u));
    // 0x260fc8: 0x90770008  lbu         $s7, 0x8($v1)
    ctx->pc = 0x260fc8u;
    SET_GPR_ZE32(ctx, 23, (uint8_t)FAST_READ8(0x6AB828u));
    // 0x260fcc: 0x24740009  addiu       $s4, $v1, 0x9
    ctx->pc = 0x260fccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 9));
    // 0x260fd0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x260FD0u;
    {
        const bool branch_taken_0x260fd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FD0u;
        // 0x260fd4: 0x2473000c  addiu       $s3, $v1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fd0) {
            ctx->pc = 0x260FF8u;
            goto label_260ff8;
        }
    }
    ctx->pc = 0x260FD8u;
label_260fd8:
    // 0x260fd8: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x260fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x260fdc: 0x2443b820  addiu       $v1, $v0, -0x47E0
    ctx->pc = 0x260fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948896));
    // 0x260fe0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x260fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x260fe4: 0x90700002  lbu         $s0, 0x2($v1)
    ctx->pc = 0x260fe4u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)FAST_READ8(0x6AB822u));
    // 0x260fe8: 0x24760006  addiu       $s6, $v1, 0x6
    ctx->pc = 0x260fe8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 3), 6));
    // 0x260fec: 0x90770003  lbu         $s7, 0x3($v1)
    ctx->pc = 0x260fecu;
    SET_GPR_ZE32(ctx, 23, (uint8_t)FAST_READ8(0x6AB823u));
    // 0x260ff0: 0x24740004  addiu       $s4, $v1, 0x4
    ctx->pc = 0x260ff0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x260ff4: 0x24730005  addiu       $s3, $v1, 0x5
    ctx->pc = 0x260ff4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
label_260ff8:
    // 0x260ff8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x260ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x260ffc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x260ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261000: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x261000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261004: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x261004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x261008: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x261008u;
    {
        const bool branch_taken_0x261008 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261008u;
        // 0x26100c: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261008) {
            ctx->pc = 0x261018u;
            goto label_261018;
        }
    }
    ctx->pc = 0x261010u;
    // 0x261010: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x261010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x261014: 0x2a82b  sltu        $s5, $zero, $v0
    ctx->pc = 0x261014u;
    SET_GPR_U64(ctx, 21, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_261018:
    // 0x261018: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x261018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x26101c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x26101cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x261020: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x261020u;
    {
        const bool branch_taken_0x261020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261020u;
        // 0x261024: 0x24b8b820  addiu       $t8, $a1, -0x47E0 (Delay Slot)
        SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948896));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261020) {
            ctx->pc = 0x26103Cu;
            goto label_26103c;
        }
    }
    ctx->pc = 0x261028u;
    // 0x261028: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x261028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26102c: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x26102cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x261030: 0x260a02d  daddu       $s4, $s3, $zero
    ctx->pc = 0x261030u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261034: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x261034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261038: 0x8c780000  lw          $t8, 0x0($v1)
    ctx->pc = 0x261038u;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26103c:
    // 0x26103c: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x26103cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x261040: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261044: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x261044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x261048: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x261048u;
    {
        const bool branch_taken_0x261048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261048u;
        // 0x26104c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261048) {
            ctx->pc = 0x26106Cu;
            goto label_26106c;
        }
    }
    ctx->pc = 0x261050u;
    // 0x261050: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x261050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x261054: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x261054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x261058: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x261058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26105c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x26105Cu;
    {
        const bool branch_taken_0x26105c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26105Cu;
        // 0x261060: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26105c) {
            ctx->pc = 0x26106Cu;
            goto label_26106c;
        }
    }
    ctx->pc = 0x261064u;
    // 0x261064: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x261064u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x261068: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x261068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_26106c:
    // 0x26106c: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x26106cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
    // 0x261070: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x261070u;
    {
        const bool branch_taken_0x261070 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261070u;
        // 0x261074: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261070) {
            ctx->pc = 0x261094u;
            goto label_261094;
        }
    }
    ctx->pc = 0x261078u;
    // 0x261078: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x261078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x26107c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x26107cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x261080: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x261080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x261084: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x261084u;
    {
        const bool branch_taken_0x261084 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261084u;
        // 0x261088: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261084) {
            ctx->pc = 0x261094u;
            goto label_261094;
        }
    }
    ctx->pc = 0x26108Cu;
    // 0x26108c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x26108cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x261090: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x261090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_261094:
    // 0x261094: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x261094u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x261098: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x261098u;
    {
        const bool branch_taken_0x261098 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26109Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261098u;
        // 0x26109c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261098) {
            ctx->pc = 0x2610BCu;
            goto label_2610bc;
        }
    }
    ctx->pc = 0x2610A0u;
    // 0x2610a0: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2610a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2610a4: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x2610a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x2610a8: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x2610a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2610ac: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2610ACu;
    {
        const bool branch_taken_0x2610ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2610B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610ACu;
        // 0x2610b0: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610ac) {
            ctx->pc = 0x2610BCu;
            goto label_2610bc;
        }
    }
    ctx->pc = 0x2610B4u;
    // 0x2610b4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2610b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x2610b8: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x2610b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_2610bc:
    // 0x2610bc: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2610bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2610c0: 0x8f24005c  lw          $a0, 0x5C($t9)
    ctx->pc = 0x2610c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
    // 0x2610c4: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x2610c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2610c8: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x2610c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2610cc: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x2610ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2610d0: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x2610d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2610d4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2610d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2610d8: 0x10800053  beqz        $a0, . + 4 + (0x53 << 2)
    ctx->pc = 0x2610D8u;
    {
        const bool branch_taken_0x2610d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2610DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610D8u;
        // 0x2610dc: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2610d8) {
            ctx->pc = 0x261228u;
            goto label_261228;
        }
    }
    ctx->pc = 0x2610E0u;
    // 0x2610e0: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x2610e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x2610e4: 0x8dc30098  lw          $v1, 0x98($t6)
    ctx->pc = 0x2610e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 152)));
    // 0x2610e8: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x2610e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x2610ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2610ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2610f0: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x2610f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2610f4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2610f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2610f8: 0xa35821  addu        $t3, $a1, $v1
    ctx->pc = 0x2610f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x2610fc: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2610fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x261100: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261100u;
    {
        const bool branch_taken_0x261100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261100u;
        // 0x261104: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261100) {
            ctx->pc = 0x261114u;
            goto label_261114;
        }
    }
    ctx->pc = 0x261108u;
    // 0x261108: 0x8dc2009c  lw          $v0, 0x9C($t6)
    ctx->pc = 0x261108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 156)));
    // 0x26110c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26110cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261110: 0xa25821  addu        $t3, $a1, $v0
    ctx->pc = 0x261110u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_261114:
    // 0x261114: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x261114u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261118: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x261118u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26111c: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x26111cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261120: 0x19800040  blez        $t4, . + 4 + (0x40 << 2)
    ctx->pc = 0x261120u;
    {
        const bool branch_taken_0x261120 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x261124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261120u;
        // 0x261124: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261120) {
            ctx->pc = 0x261224u;
            goto label_261224;
        }
    }
    ctx->pc = 0x261128u;
label_261128:
    // 0x261128: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x261128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x26112c: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x26112cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x261130: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x261130u;
    {
        const bool branch_taken_0x261130 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261130u;
        // 0x261134: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261130) {
            ctx->pc = 0x261154u;
            goto label_261154;
        }
    }
    ctx->pc = 0x261138u;
    // 0x261138: 0x85c200a4  lh          $v0, 0xA4($t6)
    ctx->pc = 0x261138u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 164)));
    // 0x26113c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x26113cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261140: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x261140u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261144: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x261144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261148: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x261148u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x26114c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26114Cu;
    {
        const bool branch_taken_0x26114c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26114Cu;
        // 0x261150: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26114c) {
            ctx->pc = 0x261168u;
            goto label_261168;
        }
    }
    ctx->pc = 0x261154u;
label_261154:
    // 0x261154: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x261154u;
    {
        const bool branch_taken_0x261154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261154u;
        // 0x261158: 0x8dc90090  lw          $t1, 0x90($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261154) {
            ctx->pc = 0x261160u;
            goto label_261160;
        }
    }
    ctx->pc = 0x26115Cu;
    // 0x26115c: 0x8dc90094  lw          $t1, 0x94($t6)
    ctx->pc = 0x26115cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 148)));
label_261160:
    // 0x261160: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x261160u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x261164: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x261164u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_261168:
    // 0x261168: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x261168u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26116c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x26116Cu;
    {
        const bool branch_taken_0x26116c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26116Cu;
        // 0x261170: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26116c) {
            ctx->pc = 0x2611F8u;
            goto label_2611f8;
        }
    }
    ctx->pc = 0x261174u;
    // 0x261174: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x261174u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_261178:
    // 0x261178: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x261178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x26117c: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x26117cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x261180: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x261180u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261184: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x261184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x261188: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x261188u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26118c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x26118cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x261190: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x261190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x261194: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x261194u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x261198: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x261198u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x26119c: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x26119cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x2611a0: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x2611a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x2611a4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2611a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2611a8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2611a8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2611ac: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x2611acu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x2611b0: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2611b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2611b4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2611b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2611b8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2611b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x2611bc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2611bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2611c0: 0x600013  mtlo        $v1
    ctx->pc = 0x2611c0u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x2611c4: 0x704f1000  madd        $v0, $v0, $t7
    ctx->pc = 0x2611c4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x2611c8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2611c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2611cc: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2611ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2611d0: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2611d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2611d4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x2611d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2611d8: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2611d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2611dc: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2611dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2611e0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x2611e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2611e4: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x2611e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x2611e8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x2611e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x2611ec: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2611ecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2611f0: 0x14a0ffe1  bnez        $a1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x2611F0u;
    {
        const bool branch_taken_0x2611f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2611F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611F0u;
        // 0x2611f4: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611f0) {
            ctx->pc = 0x261178u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261178;
        }
    }
    ctx->pc = 0x2611F8u;
label_2611f8:
    // 0x2611f8: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x2611f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x2611fc: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x2611fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x261200: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261204: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x261204u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x261208: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x261208u;
    {
        const bool branch_taken_0x261208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26120Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261208u;
        // 0x26120c: 0x85c900a0  lh          $t1, 0xA0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261208) {
            ctx->pc = 0x261214u;
            goto label_261214;
        }
    }
    ctx->pc = 0x261210u;
    // 0x261210: 0x85c900a2  lh          $t1, 0xA2($t6)
    ctx->pc = 0x261210u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 162)));
label_261214:
    // 0x261214: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x261214u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x261218: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x261218u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x26121c: 0x1d80ffc2  bgtz        $t4, . + 4 + (-0x3E << 2)
    ctx->pc = 0x26121Cu;
    {
        const bool branch_taken_0x26121c = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x261220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26121Cu;
        // 0x261220: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26121c) {
            ctx->pc = 0x261128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261128;
        }
    }
    ctx->pc = 0x261224u;
label_261224:
    // 0x261224: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x261224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_261228:
    // 0x261228: 0x10800055  beqz        $a0, . + 4 + (0x55 << 2)
    ctx->pc = 0x261228u;
    {
        const bool branch_taken_0x261228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261228u;
        // 0x26122c: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261228) {
            ctx->pc = 0x261380u;
            goto label_261380;
        }
    }
    ctx->pc = 0x261230u;
    // 0x261230: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x261230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x261234: 0x8dc300b0  lw          $v1, 0xB0($t6)
    ctx->pc = 0x261234u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 176)));
    // 0x261238: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x261238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x26123c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26123cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261240: 0x8e460014  lw          $a2, 0x14($s2)
    ctx->pc = 0x261240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x261244: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x261244u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x261248: 0xa35821  addu        $t3, $a1, $v1
    ctx->pc = 0x261248u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x26124c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x26124cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x261250: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261250u;
    {
        const bool branch_taken_0x261250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261250u;
        // 0x261254: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261250) {
            ctx->pc = 0x261264u;
            goto label_261264;
        }
    }
    ctx->pc = 0x261258u;
    // 0x261258: 0x8dc200b4  lw          $v0, 0xB4($t6)
    ctx->pc = 0x261258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 180)));
    // 0x26125c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26125cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261260: 0xa25821  addu        $t3, $a1, $v0
    ctx->pc = 0x261260u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_261264:
    // 0x261264: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x261264u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261268: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x261268u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26126c: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x26126cu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261270: 0x19800042  blez        $t4, . + 4 + (0x42 << 2)
    ctx->pc = 0x261270u;
    {
        const bool branch_taken_0x261270 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x261274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261270u;
        // 0x261274: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261270) {
            ctx->pc = 0x26137Cu;
            goto label_26137c;
        }
    }
    ctx->pc = 0x261278u;
label_261278:
    // 0x261278: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x261278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x26127c: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x26127cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x261280: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x261280u;
    {
        const bool branch_taken_0x261280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261280u;
        // 0x261284: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261280) {
            ctx->pc = 0x2612A4u;
            goto label_2612a4;
        }
    }
    ctx->pc = 0x261288u;
    // 0x261288: 0x85c200bc  lh          $v0, 0xBC($t6)
    ctx->pc = 0x261288u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 188)));
    // 0x26128c: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x26128cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261290: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x261290u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261294: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x261294u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261298: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x261298u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x26129c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x26129Cu;
    {
        const bool branch_taken_0x26129c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2612A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26129Cu;
        // 0x2612a0: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26129c) {
            ctx->pc = 0x2612B8u;
            goto label_2612b8;
        }
    }
    ctx->pc = 0x2612A4u;
label_2612a4:
    // 0x2612a4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2612A4u;
    {
        const bool branch_taken_0x2612a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2612A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612A4u;
        // 0x2612a8: 0x8dc900a8  lw          $t1, 0xA8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2612a4) {
            ctx->pc = 0x2612B0u;
            goto label_2612b0;
        }
    }
    ctx->pc = 0x2612ACu;
    // 0x2612ac: 0x8dc900ac  lw          $t1, 0xAC($t6)
    ctx->pc = 0x2612acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 172)));
label_2612b0:
    // 0x2612b0: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x2612b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x2612b4: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x2612b4u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_2612b8:
    // 0x2612b8: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2612b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2612bc: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2612BCu;
    {
        const bool branch_taken_0x2612bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2612C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612BCu;
        // 0x2612c0: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2612bc) {
            ctx->pc = 0x261350u;
            goto label_261350;
        }
    }
    ctx->pc = 0x2612C4u;
    // 0x2612c4: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x2612c4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_2612c8:
    // 0x2612c8: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x2612c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x2612cc: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x2612ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x2612d0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2612d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2612d4: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x2612d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x2612d8: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x2612d8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2612dc: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x2612dcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x2612e0: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x2612e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x2612e4: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x2612e4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x2612e8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2612e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x2612ec: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x2612ecu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x2612f0: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x2612f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x2612f4: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x2612f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2612f8: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x2612f8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2612fc: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x2612fcu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x261300: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x261300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x261304: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x261304u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x261308: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x261308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x26130c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x26130cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x261310: 0x600013  mtlo        $v1
    ctx->pc = 0x261310u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x261314: 0x704f1000  madd        $v0, $v0, $t7
    ctx->pc = 0x261314u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x261318: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x261318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26131c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x26131cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x261320: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x261320u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x261324: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x261324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261328: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x261328u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x26132c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x26132cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x261330: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x261330u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261334: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x261334u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x261338: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x261338u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x26133c: 0xad000000  sw          $zero, 0x0($t0)
    ctx->pc = 0x26133cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 0));
    // 0x261340: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x261340u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x261344: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x261344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x261348: 0x14a0ffdf  bnez        $a1, . + 4 + (-0x21 << 2)
    ctx->pc = 0x261348u;
    {
        const bool branch_taken_0x261348 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26134Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261348u;
        // 0x26134c: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261348) {
            ctx->pc = 0x2612C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2612c8;
        }
    }
    ctx->pc = 0x261350u;
label_261350:
    // 0x261350: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x261350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x261354: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x261354u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x261358: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26135c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x26135cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x261360: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x261360u;
    {
        const bool branch_taken_0x261360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261360u;
        // 0x261364: 0x85c900b8  lh          $t1, 0xB8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 184)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261360) {
            ctx->pc = 0x26136Cu;
            goto label_26136c;
        }
    }
    ctx->pc = 0x261368u;
    // 0x261368: 0x85c900ba  lh          $t1, 0xBA($t6)
    ctx->pc = 0x261368u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 186)));
label_26136c:
    // 0x26136c: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x26136cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x261370: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x261370u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x261374: 0x1d80ffc0  bgtz        $t4, . + 4 + (-0x40 << 2)
    ctx->pc = 0x261374u;
    {
        const bool branch_taken_0x261374 = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x261378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261374u;
        // 0x261378: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261374) {
            ctx->pc = 0x261278u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261278;
        }
    }
    ctx->pc = 0x26137Cu;
label_26137c:
    // 0x26137c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x26137cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_261380:
    // 0x261380: 0x108000b6  beqz        $a0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x261380u;
    {
        const bool branch_taken_0x261380 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x261384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261380u;
        // 0x261384: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261380) {
            ctx->pc = 0x26165Cu;
            goto label_26165c;
        }
    }
    ctx->pc = 0x261388u;
    // 0x261388: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x261388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x26138c: 0x8dc30110  lw          $v1, 0x110($t6)
    ctx->pc = 0x26138cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 272)));
    // 0x261390: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x261390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x261394: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261398: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x261398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x26139c: 0x8e520018  lw          $s2, 0x18($s2)
    ctx->pc = 0x26139cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2613a0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2613a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x2613a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2613A4u;
    {
        const bool branch_taken_0x2613a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2613A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613A4u;
        // 0x2613a8: 0xa35821  addu        $t3, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2613a4) {
            ctx->pc = 0x2613B8u;
            goto label_2613b8;
        }
    }
    ctx->pc = 0x2613ACu;
    // 0x2613ac: 0x8dc20114  lw          $v0, 0x114($t6)
    ctx->pc = 0x2613acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 276)));
    // 0x2613b0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2613b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2613b4: 0xa25821  addu        $t3, $a1, $v0
    ctx->pc = 0x2613b4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2613b8:
    // 0x2613b8: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x2613b8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613bc: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2613bcu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613c0: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x2613c0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613c4: 0x198000a4  blez        $t4, . + 4 + (0xA4 << 2)
    ctx->pc = 0x2613C4u;
    {
        const bool branch_taken_0x2613c4 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x2613C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613C4u;
        // 0x2613c8: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2613c4) {
            ctx->pc = 0x261658u;
            goto label_261658;
        }
    }
    ctx->pc = 0x2613CCu;
    // 0x2613cc: 0x0  nop
    ctx->pc = 0x2613ccu;
    // NOP
label_2613d0:
    // 0x2613d0: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x2613d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x2613d4: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x2613d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2613d8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2613D8u;
    {
        const bool branch_taken_0x2613d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2613DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613D8u;
        // 0x2613dc: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2613d8) {
            ctx->pc = 0x2613FCu;
            goto label_2613fc;
        }
    }
    ctx->pc = 0x2613E0u;
    // 0x2613e0: 0x85c2011c  lh          $v0, 0x11C($t6)
    ctx->pc = 0x2613e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 284)));
    // 0x2613e4: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2613e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613e8: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2613e8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2613ec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2613ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2613f0: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x2613f0u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2613f4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2613F4u;
    {
        const bool branch_taken_0x2613f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2613F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613F4u;
        // 0x2613f8: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2613f4) {
            ctx->pc = 0x261410u;
            goto label_261410;
        }
    }
    ctx->pc = 0x2613FCu;
label_2613fc:
    // 0x2613fc: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2613FCu;
    {
        const bool branch_taken_0x2613fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613FCu;
        // 0x261400: 0x8dc90108  lw          $t1, 0x108($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2613fc) {
            ctx->pc = 0x261408u;
            goto label_261408;
        }
    }
    ctx->pc = 0x261404u;
    // 0x261404: 0x8dc9010c  lw          $t1, 0x10C($t6)
    ctx->pc = 0x261404u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 268)));
label_261408:
    // 0x261408: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x261408u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x26140c: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x26140cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_261410:
    // 0x261410: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x261410u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x261414: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x261414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x261418: 0x10400064  beqz        $v0, . + 4 + (0x64 << 2)
    ctx->pc = 0x261418u;
    {
        const bool branch_taken_0x261418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26141Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261418u;
        // 0x26141c: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261418) {
            ctx->pc = 0x2615ACu;
            goto label_2615ac;
        }
    }
    ctx->pc = 0x261420u;
    // 0x261420: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x261420u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x261424: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x261424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x261428: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x261428u;
    {
        const bool branch_taken_0x261428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26142Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261428u;
        // 0x26142c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261428) {
            ctx->pc = 0x2614ECu;
            goto label_2614ec;
        }
    }
    ctx->pc = 0x261430u;
    // 0x261430: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x261430u;
    {
        const bool branch_taken_0x261430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261430u;
        // 0x261434: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261430) {
            ctx->pc = 0x26162Cu;
            goto label_26162c;
        }
    }
    ctx->pc = 0x261438u;
    // 0x261438: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x261438u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x26143c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x26143cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261440: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x261440u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x261444: 0x0  nop
    ctx->pc = 0x261444u;
    // NOP
label_261448:
    // 0x261448: 0x28d1821  addu        $v1, $s4, $t5
    ctx->pc = 0x261448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x26144c: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x26144cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x261450: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x261450u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261454: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x261454u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x261458: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x261458u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26145c: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x26145cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x261460: 0x4a1004  sllv        $v0, $t2, $v0
    ctx->pc = 0x261460u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x261464: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x261464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x261468: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x261468u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x26146c: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x26146cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x261470: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x261470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x261474: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x261474u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x261478: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x261478u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26147c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x26147cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261480: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x261480u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x261484: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x261484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x261488: 0x6f1018  mult        $v0, $v1, $t7
    ctx->pc = 0x261488u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26148c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x26148cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x261490: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x261490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261494: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x261494u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261498: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x261498u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x26149c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x26149cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2614a0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x2614a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2614a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2614a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2614a8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2614a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2614ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2614acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2614b0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2614b0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2614b4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2614b4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2614b8: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x2614b8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2614bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2614bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2614c0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2614c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2614c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2614c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2614c8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2614c8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2614cc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2614ccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2614d0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x2614d0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2614d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2614d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2614d8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2614d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2614dc: 0x14c0ffda  bnez        $a2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2614DCu;
    {
        const bool branch_taken_0x2614dc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2614E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614DCu;
        // 0x2614e0: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2614dc) {
            ctx->pc = 0x261448u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261448;
        }
    }
    ctx->pc = 0x2614E4u;
    // 0x2614e4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2614E4u;
    {
        const bool branch_taken_0x2614e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2614E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614E4u;
        // 0x2614e8: 0x8f220018  lw          $v0, 0x18($t9) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2614e4) {
            ctx->pc = 0x261630u;
            goto label_261630;
        }
    }
    ctx->pc = 0x2614ECu;
label_2614ec:
    // 0x2614ec: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2614ECu;
    {
        const bool branch_taken_0x2614ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2614F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614ECu;
        // 0x2614f0: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2614ec) {
            ctx->pc = 0x26162Cu;
            goto label_26162c;
        }
    }
    ctx->pc = 0x2614F4u;
    // 0x2614f4: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x2614f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x2614f8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x2614f8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2614fc: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x2614fcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_261500:
    // 0x261500: 0x28d1821  addu        $v1, $s4, $t5
    ctx->pc = 0x261500u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x261504: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x261504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x261508: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x261508u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26150c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x26150cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x261510: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x261510u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x261514: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x261514u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x261518: 0x4a1004  sllv        $v0, $t2, $v0
    ctx->pc = 0x261518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x26151c: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x26151cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x261520: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x261520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x261524: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x261524u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x261528: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x261528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x26152c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x26152cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x261530: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x261530u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261534: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x261534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261538: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x261538u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x26153c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26153cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x261540: 0x6f1018  mult        $v0, $v1, $t7
    ctx->pc = 0x261540u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x261544: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x261544u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x261548: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x261548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26154c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26154cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261550: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x261550u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x261554: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x261554u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x261558: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x261558u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x26155c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x26155cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x261560: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x261560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261564: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x261564u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261568: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x261568u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x26156c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x26156cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x261570: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x261570u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x261574: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x261574u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x261578: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x261578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26157c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26157cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261580: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x261580u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x261584: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x261584u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x261588: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x261588u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x26158c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x26158cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x261590: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x261590u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x261594: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x261594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x261598: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x261598u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x26159c: 0x14c0ffd8  bnez        $a2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x26159Cu;
    {
        const bool branch_taken_0x26159c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2615A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26159Cu;
        // 0x2615a0: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26159c) {
            ctx->pc = 0x261500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261500;
        }
    }
    ctx->pc = 0x2615A4u;
    // 0x2615a4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2615A4u;
    {
        const bool branch_taken_0x2615a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2615A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615A4u;
        // 0x2615a8: 0x8f220018  lw          $v0, 0x18($t9) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615a4) {
            ctx->pc = 0x261630u;
            goto label_261630;
        }
    }
    ctx->pc = 0x2615ACu;
label_2615ac:
    // 0x2615ac: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2615acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x2615b0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2615b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2615b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2615B4u;
    {
        const bool branch_taken_0x2615b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2615B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615B4u;
        // 0x2615b8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615b4) {
            ctx->pc = 0x2615F4u;
            goto label_2615f4;
        }
    }
    ctx->pc = 0x2615BCu;
    // 0x2615bc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2615BCu;
    {
        const bool branch_taken_0x2615bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2615C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615BCu;
        // 0x2615c0: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615bc) {
            ctx->pc = 0x26162Cu;
            goto label_26162c;
        }
    }
    ctx->pc = 0x2615C4u;
    // 0x2615c4: 0x0  nop
    ctx->pc = 0x2615c4u;
    // NOP
label_2615c8:
    // 0x2615c8: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2615c8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2615cc: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2615ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2615d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2615d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2615d4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2615d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2615d8: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2615d8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2615dc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2615dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2615e0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2615e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2615e4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2615E4u;
    {
        const bool branch_taken_0x2615e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2615E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615E4u;
        // 0x2615e8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615e4) {
            ctx->pc = 0x2615C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2615c8;
        }
    }
    ctx->pc = 0x2615ECu;
    // 0x2615ec: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2615ECu;
    {
        const bool branch_taken_0x2615ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2615F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615ECu;
        // 0x2615f0: 0x8f220018  lw          $v0, 0x18($t9) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615ec) {
            ctx->pc = 0x261630u;
            goto label_261630;
        }
    }
    ctx->pc = 0x2615F4u;
label_2615f4:
    // 0x2615f4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2615F4u;
    {
        const bool branch_taken_0x2615f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2615F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2615F4u;
        // 0x2615f8: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2615f4) {
            ctx->pc = 0x26162Cu;
            goto label_26162c;
        }
    }
    ctx->pc = 0x2615FCu;
    // 0x2615fc: 0x0  nop
    ctx->pc = 0x2615fcu;
    // NOP
label_261600:
    // 0x261600: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x261600u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x261604: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x261604u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261608: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x261608u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x26160c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x26160cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x261610: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x261610u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x261614: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x261614u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x261618: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x261618u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x26161c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x26161cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x261620: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x261620u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x261624: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x261624u;
    {
        const bool branch_taken_0x261624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261624u;
        // 0x261628: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261624) {
            ctx->pc = 0x261600u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261600;
        }
    }
    ctx->pc = 0x26162Cu;
label_26162c:
    // 0x26162c: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x26162cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_261630:
    // 0x261630: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x261630u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x261634: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261638: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x261638u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x26163c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x26163Cu;
    {
        const bool branch_taken_0x26163c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26163Cu;
        // 0x261640: 0x85c90118  lh          $t1, 0x118($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 280)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26163c) {
            ctx->pc = 0x261648u;
            goto label_261648;
        }
    }
    ctx->pc = 0x261644u;
    // 0x261644: 0x85c9011a  lh          $t1, 0x11A($t6)
    ctx->pc = 0x261644u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 282)));
label_261648:
    // 0x261648: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x261648u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x26164c: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x26164cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x261650: 0x1d80ff5f  bgtz        $t4, . + 4 + (-0xA1 << 2)
    ctx->pc = 0x261650u;
    {
        const bool branch_taken_0x261650 = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x261654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261650u;
        // 0x261654: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261650) {
            ctx->pc = 0x2613D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2613d0;
        }
    }
    ctx->pc = 0x261658u;
label_261658:
    // 0x261658: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x261658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_26165c:
    // 0x26165c: 0x84620004  lh          $v0, 0x4($v1)
    ctx->pc = 0x26165cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x261660: 0xadc20024  sw          $v0, 0x24($t6)
    ctx->pc = 0x261660u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 36), GPR_U32(ctx, 2));
    // 0x261664: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x261664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x261668: 0x84830006  lh          $v1, 0x6($a0)
    ctx->pc = 0x261668u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 6)));
    // 0x26166c: 0xadc30028  sw          $v1, 0x28($t6)
    ctx->pc = 0x26166cu;
    WRITE32(ADD32(GPR_U32(ctx, 14), 40), GPR_U32(ctx, 3));
    // 0x261670: 0x8f240018  lw          $a0, 0x18($t9)
    ctx->pc = 0x261670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x261674: 0xadc4002c  sw          $a0, 0x2C($t6)
    ctx->pc = 0x261674u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 44), GPR_U32(ctx, 4));
    // 0x261678: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x261678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x26167c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x26167cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x261680: 0x544000f5  bnel        $v0, $zero, . + 4 + (0xF5 << 2)
    ctx->pc = 0x261680u;
    {
        const bool branch_taken_0x261680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261680) {
            ctx->pc = 0x261684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261680u;
            // 0x261684: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261A58u;
            goto label_261a58;
        }
    }
    ctx->pc = 0x261688u;
    // 0x261688: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x261688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26168c: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x26168cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x261690: 0x8f24005c  lw          $a0, 0x5C($t9)
    ctx->pc = 0x261690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 92)));
    // 0x261694: 0x84c20006  lh          $v0, 0x6($a2)
    ctx->pc = 0x261694u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x261698: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x261698u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26169c: 0x829021  addu        $s2, $a0, $v0
    ctx->pc = 0x26169cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x2616a0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2616a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2616a4: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x2616A4u;
    {
        const bool branch_taken_0x2616a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2616A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616A4u;
        // 0x2616a8: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2616a4) {
            ctx->pc = 0x2617BCu;
            goto label_2617bc;
        }
    }
    ctx->pc = 0x2616ACu;
    // 0x2616ac: 0x8dc2018c  lw          $v0, 0x18C($t6)
    ctx->pc = 0x2616acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 396)));
    // 0x2616b0: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2616b0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2616b4: 0x8dc30008  lw          $v1, 0x8($t6)
    ctx->pc = 0x2616b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x2616b8: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2616b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2616bc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2616bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2616c0: 0x8e440014  lw          $a0, 0x14($s2)
    ctx->pc = 0x2616c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2616c4: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x2616c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2616c8: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x2616c8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2616cc: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2616ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2616d0: 0x19800039  blez        $t4, . + 4 + (0x39 << 2)
    ctx->pc = 0x2616D0u;
    {
        const bool branch_taken_0x2616d0 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x2616D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616D0u;
        // 0x2616d4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2616d0) {
            ctx->pc = 0x2617B8u;
            goto label_2617b8;
        }
    }
    ctx->pc = 0x2616D8u;
label_2616d8:
    // 0x2616d8: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x2616d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x2616dc: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x2616dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2616e0: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2616E0u;
    {
        const bool branch_taken_0x2616e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2616e0) {
            ctx->pc = 0x2616E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2616E0u;
            // 0x2616e4: 0x8dc90184  lw          $t1, 0x184($t6) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 388)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261704u;
            goto label_261704;
        }
    }
    ctx->pc = 0x2616E8u;
    // 0x2616e8: 0x85c20194  lh          $v0, 0x194($t6)
    ctx->pc = 0x2616e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 404)));
    // 0x2616ec: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x2616ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2616f0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2616f0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2616f4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2616f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2616f8: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x2616f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2616fc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2616FCu;
    {
        const bool branch_taken_0x2616fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2616FCu;
        // 0x261700: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2616fc) {
            ctx->pc = 0x26170Cu;
            goto label_26170c;
        }
    }
    ctx->pc = 0x261704u;
label_261704:
    // 0x261704: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x261704u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x261708: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x261708u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_26170c:
    // 0x26170c: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x26170cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261710: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x261710u;
    {
        const bool branch_taken_0x261710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261710u;
        // 0x261714: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261710) {
            ctx->pc = 0x2617A0u;
            goto label_2617a0;
        }
    }
    ctx->pc = 0x261718u;
    // 0x261718: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x261718u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x26171c: 0x0  nop
    ctx->pc = 0x26171cu;
    // NOP
label_261720:
    // 0x261720: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x261720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x261724: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x261724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x261728: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x261728u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26172c: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x26172cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x261730: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x261730u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x261734: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x261734u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x261738: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x261738u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x26173c: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x26173cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x261740: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x261740u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x261744: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x261744u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x261748: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x261748u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x26174c: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x26174cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261750: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x261750u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261754: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x261754u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x261758: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x261758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26175c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x26175cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x261760: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x261760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x261764: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x261764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x261768: 0x600013  mtlo        $v1
    ctx->pc = 0x261768u;
    ctx->lo = GPR_U64(ctx, 3);
    // 0x26176c: 0x704f1000  madd        $v0, $v0, $t7
    ctx->pc = 0x26176cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 15); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x261770: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x261770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261774: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x261774u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x261778: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x261778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x26177c: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x26177cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261780: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x261780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x261784: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x261784u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x261788: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x261788u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26178c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x26178cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x261790: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x261790u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x261794: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x261794u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x261798: 0x14a0ffe1  bnez        $a1, . + 4 + (-0x1F << 2)
    ctx->pc = 0x261798u;
    {
        const bool branch_taken_0x261798 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x26179Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261798u;
        // 0x26179c: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261798) {
            ctx->pc = 0x261720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261720;
        }
    }
    ctx->pc = 0x2617A0u;
label_2617a0:
    // 0x2617a0: 0x85c20192  lh          $v0, 0x192($t6)
    ctx->pc = 0x2617a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 402)));
    // 0x2617a4: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x2617a4u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x2617a8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2617a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2617ac: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x2617acu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x2617b0: 0x1d80ffc9  bgtz        $t4, . + 4 + (-0x37 << 2)
    ctx->pc = 0x2617B0u;
    {
        const bool branch_taken_0x2617b0 = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x2617B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617B0u;
        // 0x2617b4: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617b0) {
            ctx->pc = 0x2616D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2616d8;
        }
    }
    ctx->pc = 0x2617B8u;
label_2617b8:
    // 0x2617b8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x2617b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2617bc:
    // 0x2617bc: 0x508000a6  beql        $a0, $zero, . + 4 + (0xA6 << 2)
    ctx->pc = 0x2617BCu;
    {
        const bool branch_taken_0x2617bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2617bc) {
            ctx->pc = 0x2617C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2617BCu;
            // 0x2617c0: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261A58u;
            goto label_261a58;
        }
    }
    ctx->pc = 0x2617C4u;
    // 0x2617c4: 0x8dc201a4  lw          $v0, 0x1A4($t6)
    ctx->pc = 0x2617c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 420)));
    // 0x2617c8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x2617c8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2617cc: 0x8dc30008  lw          $v1, 0x8($t6)
    ctx->pc = 0x2617ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x2617d0: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x2617d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2617d4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2617d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2617d8: 0x8e520018  lw          $s2, 0x18($s2)
    ctx->pc = 0x2617d8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
    // 0x2617dc: 0x625821  addu        $t3, $v1, $v0
    ctx->pc = 0x2617dcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2617e0: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x2617e0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2617e4: 0x1980009b  blez        $t4, . + 4 + (0x9B << 2)
    ctx->pc = 0x2617E4u;
    {
        const bool branch_taken_0x2617e4 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x2617E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2617E4u;
        // 0x2617e8: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2617e4) {
            ctx->pc = 0x261A54u;
            goto label_261a54;
        }
    }
    ctx->pc = 0x2617ECu;
    // 0x2617ec: 0x0  nop
    ctx->pc = 0x2617ecu;
    // NOP
label_2617f0:
    // 0x2617f0: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x2617f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x2617f4: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x2617f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x2617f8: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x2617F8u;
    {
        const bool branch_taken_0x2617f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2617f8) {
            ctx->pc = 0x2617FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2617F8u;
            // 0x2617fc: 0x8dc9019c  lw          $t1, 0x19C($t6) (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 412)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x26181Cu;
            goto label_26181c;
        }
    }
    ctx->pc = 0x261800u;
    // 0x261800: 0x85c201ac  lh          $v0, 0x1AC($t6)
    ctx->pc = 0x261800u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 428)));
    // 0x261804: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x261804u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261808: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x261808u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26180c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x26180cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261810: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x261810u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x261814: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x261814u;
    {
        const bool branch_taken_0x261814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261814u;
        // 0x261818: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261814) {
            ctx->pc = 0x261824u;
            goto label_261824;
        }
    }
    ctx->pc = 0x26181Cu;
label_26181c:
    // 0x26181c: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x26181cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x261820: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x261820u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_261824:
    // 0x261824: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x261824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x261828: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x261828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x26182c: 0x10400063  beqz        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x26182Cu;
    {
        const bool branch_taken_0x26182c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26182Cu;
        // 0x261830: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26182c) {
            ctx->pc = 0x2619BCu;
            goto label_2619bc;
        }
    }
    ctx->pc = 0x261834u;
    // 0x261834: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x261834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x261838: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x261838u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x26183c: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x26183Cu;
    {
        const bool branch_taken_0x26183c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26183Cu;
        // 0x261840: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26183c) {
            ctx->pc = 0x2618FCu;
            goto label_2618fc;
        }
    }
    ctx->pc = 0x261844u;
    // 0x261844: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x261844u;
    {
        const bool branch_taken_0x261844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261844u;
        // 0x261848: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261844) {
            ctx->pc = 0x261A3Cu;
            goto label_261a3c;
        }
    }
    ctx->pc = 0x26184Cu;
    // 0x26184c: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x26184cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x261850: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261850u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x261854: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x261854u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_261858:
    // 0x261858: 0x28d1821  addu        $v1, $s4, $t5
    ctx->pc = 0x261858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x26185c: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x26185cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x261860: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x261860u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261864: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x261864u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x261868: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x261868u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x26186c: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x26186cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x261870: 0x4a1004  sllv        $v0, $t2, $v0
    ctx->pc = 0x261870u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x261874: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x261874u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x261878: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x261878u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x26187c: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x26187cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x261880: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x261880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x261884: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x261884u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x261888: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x261888u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26188c: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x26188cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261890: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x261890u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x261894: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x261894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x261898: 0x6f1018  mult        $v0, $v1, $t7
    ctx->pc = 0x261898u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x26189c: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x26189cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x2618a0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2618a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2618a4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2618a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2618a8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2618a8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2618ac: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2618acu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2618b0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x2618b0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2618b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2618b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2618b8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x2618b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2618bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2618bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2618c0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2618c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2618c4: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2618c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2618c8: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x2618c8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2618cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2618ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2618d0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x2618d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2618d4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2618d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2618d8: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2618d8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x2618dc: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x2618dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x2618e0: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x2618e0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2618e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2618e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2618e8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2618e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2618ec: 0x14c0ffda  bnez        $a2, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2618ECu;
    {
        const bool branch_taken_0x2618ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2618F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618ECu;
        // 0x2618f0: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618ec) {
            ctx->pc = 0x261858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261858;
        }
    }
    ctx->pc = 0x2618F4u;
    // 0x2618f4: 0x10000052  b           . + 4 + (0x52 << 2)
    ctx->pc = 0x2618F4u;
    {
        const bool branch_taken_0x2618f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2618F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618F4u;
        // 0x2618f8: 0x85c201aa  lh          $v0, 0x1AA($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 426)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618f4) {
            ctx->pc = 0x261A40u;
            goto label_261a40;
        }
    }
    ctx->pc = 0x2618FCu;
label_2618fc:
    // 0x2618fc: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
    ctx->pc = 0x2618FCu;
    {
        const bool branch_taken_0x2618fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2618FCu;
        // 0x261900: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2618fc) {
            ctx->pc = 0x261A3Cu;
            goto label_261a3c;
        }
    }
    ctx->pc = 0x261904u;
    // 0x261904: 0x3c0142fe  lui         $at, 0x42FE
    ctx->pc = 0x261904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17150 << 16));
    // 0x261908: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x261908u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x26190c: 0x240f000c  addiu       $t7, $zero, 0xC
    ctx->pc = 0x26190cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_261910:
    // 0x261910: 0x28d1821  addu        $v1, $s4, $t5
    ctx->pc = 0x261910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x261914: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x261914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x261918: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x261918u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x26191c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x26191cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x261920: 0x90a30000  lbu         $v1, 0x0($a1)
    ctx->pc = 0x261920u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x261924: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x261924u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x261928: 0x4a1004  sllv        $v0, $t2, $v0
    ctx->pc = 0x261928u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x26192c: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x26192cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x261930: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x261930u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x261934: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x261934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x261938: 0x581021  addu        $v0, $v0, $t8
    ctx->pc = 0x261938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 24)));
    // 0x26193c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x26193cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x261940: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x261940u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261944: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x261944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261948: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x261948u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x26194c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x26194cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x261950: 0x6f1018  mult        $v0, $v1, $t7
    ctx->pc = 0x261950u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 15); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x261954: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x261954u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x261958: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x261958u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26195c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26195cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261960: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x261960u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x261964: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x261964u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x261968: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x261968u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x26196c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x26196cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x261970: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x261970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261974: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x261974u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261978: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x261978u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x26197c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x26197cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x261980: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x261980u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x261984: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x261984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x261988: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x261988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x26198c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x26198cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x261990: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x261990u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x261994: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x261994u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x261998: 0xa1020000  sb          $v0, 0x0($t0)
    ctx->pc = 0x261998u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x26199c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x26199cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2619a0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2619a0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2619a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2619a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2619a8: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2619a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x2619ac: 0x14c0ffd8  bnez        $a2, . + 4 + (-0x28 << 2)
    ctx->pc = 0x2619ACu;
    {
        const bool branch_taken_0x2619ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2619B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619ACu;
        // 0x2619b0: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619ac) {
            ctx->pc = 0x261910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261910;
        }
    }
    ctx->pc = 0x2619B4u;
    // 0x2619b4: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x2619B4u;
    {
        const bool branch_taken_0x2619b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2619B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619B4u;
        // 0x2619b8: 0x85c201aa  lh          $v0, 0x1AA($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 426)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619b4) {
            ctx->pc = 0x261A40u;
            goto label_261a40;
        }
    }
    ctx->pc = 0x2619BCu;
label_2619bc:
    // 0x2619bc: 0x8c620078  lw          $v0, 0x78($v1)
    ctx->pc = 0x2619bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 120)));
    // 0x2619c0: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x2619c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x2619c4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2619C4u;
    {
        const bool branch_taken_0x2619c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2619C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619C4u;
        // 0x2619c8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619c4) {
            ctx->pc = 0x261A04u;
            goto label_261a04;
        }
    }
    ctx->pc = 0x2619CCu;
    // 0x2619cc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x2619CCu;
    {
        const bool branch_taken_0x2619cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2619D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619CCu;
        // 0x2619d0: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619cc) {
            ctx->pc = 0x261A3Cu;
            goto label_261a3c;
        }
    }
    ctx->pc = 0x2619D4u;
    // 0x2619d4: 0x0  nop
    ctx->pc = 0x2619d4u;
    // NOP
label_2619d8:
    // 0x2619d8: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2619d8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2619dc: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x2619dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2619e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2619e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2619e4: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x2619e4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x2619e8: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2619e8u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2619ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2619ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2619f0: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x2619f0u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x2619f4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2619F4u;
    {
        const bool branch_taken_0x2619f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2619F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619F4u;
        // 0x2619f8: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619f4) {
            ctx->pc = 0x2619D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2619d8;
        }
    }
    ctx->pc = 0x2619FCu;
    // 0x2619fc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2619FCu;
    {
        const bool branch_taken_0x2619fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2619FCu;
        // 0x261a00: 0x85c201aa  lh          $v0, 0x1AA($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 426)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2619fc) {
            ctx->pc = 0x261A40u;
            goto label_261a40;
        }
    }
    ctx->pc = 0x261A04u;
label_261a04:
    // 0x261a04: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x261A04u;
    {
        const bool branch_taken_0x261a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A04u;
        // 0x261a08: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a04) {
            ctx->pc = 0x261A3Cu;
            goto label_261a3c;
        }
    }
    ctx->pc = 0x261A0Cu;
    // 0x261a0c: 0x0  nop
    ctx->pc = 0x261a0cu;
    // NOP
label_261a10:
    // 0x261a10: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x261a10u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x261a14: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x261a14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261a18: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x261a18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x261a1c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x261a1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x261a20: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x261a20u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x261a24: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x261a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x261a28: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x261a28u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x261a2c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x261a2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x261a30: 0xa1000000  sb          $zero, 0x0($t0)
    ctx->pc = 0x261a30u;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x261a34: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
    ctx->pc = 0x261A34u;
    {
        const bool branch_taken_0x261a34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A34u;
        // 0x261a38: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a34) {
            ctx->pc = 0x261A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261a10;
        }
    }
    ctx->pc = 0x261A3Cu;
label_261a3c:
    // 0x261a3c: 0x85c201aa  lh          $v0, 0x1AA($t6)
    ctx->pc = 0x261a3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 426)));
label_261a40:
    // 0x261a40: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x261a40u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x261a44: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x261a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261a48: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x261a48u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x261a4c: 0x1d80ff68  bgtz        $t4, . + 4 + (-0x98 << 2)
    ctx->pc = 0x261A4Cu;
    {
        const bool branch_taken_0x261a4c = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x261A50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A4Cu;
        // 0x261a50: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a4c) {
            ctx->pc = 0x2617F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2617f0;
        }
    }
    ctx->pc = 0x261A54u;
label_261a54:
    // 0x261a54: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x261a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_261a58:
    // 0x261a58: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x261a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x261a5c: 0x504000bf  beql        $v0, $zero, . + 4 + (0xBF << 2)
    ctx->pc = 0x261A5Cu;
    {
        const bool branch_taken_0x261a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261a5c) {
            ctx->pc = 0x261A60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261A5Cu;
            // 0x261a60: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261D5Cu;
            goto label_261d5c;
        }
    }
    ctx->pc = 0x261A64u;
    // 0x261a64: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x261a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x261a68: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x261a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x261a6c: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x261a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x261a70: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x261A70u;
    {
        const bool branch_taken_0x261a70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261A70u;
        // 0x261a74: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261a70) {
            ctx->pc = 0x261BC4u;
            goto label_261bc4;
        }
    }
    ctx->pc = 0x261A78u;
    // 0x261a78: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
    ctx->pc = 0x261A78u;
    {
        const bool branch_taken_0x261a78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261a78) {
            ctx->pc = 0x261A7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261A78u;
            // 0x261a7c: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261BC8u;
            goto label_261bc8;
        }
    }
    ctx->pc = 0x261A80u;
    // 0x261a80: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x261a80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x261a84: 0x30420084  andi        $v0, $v0, 0x84
    ctx->pc = 0x261a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)132);
    // 0x261a88: 0x5040004f  beql        $v0, $zero, . + 4 + (0x4F << 2)
    ctx->pc = 0x261A88u;
    {
        const bool branch_taken_0x261a88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261a88) {
            ctx->pc = 0x261A8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261A88u;
            // 0x261a8c: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261BC8u;
            goto label_261bc8;
        }
    }
    ctx->pc = 0x261A90u;
    // 0x261a90: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x261a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x261a94: 0x8dc300c8  lw          $v1, 0xC8($t6)
    ctx->pc = 0x261a94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 200)));
    // 0x261a98: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x261a98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x261a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261aa0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x261aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x261aa4: 0x8f2f0034  lw          $t7, 0x34($t9)
    ctx->pc = 0x261aa4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
    // 0x261aa8: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x261aa8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x261aac: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261AACu;
    {
        const bool branch_taken_0x261aac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AACu;
        // 0x261ab0: 0xa35821  addu        $t3, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261aac) {
            ctx->pc = 0x261AC0u;
            goto label_261ac0;
        }
    }
    ctx->pc = 0x261AB4u;
    // 0x261ab4: 0x8dc200cc  lw          $v0, 0xCC($t6)
    ctx->pc = 0x261ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 204)));
    // 0x261ab8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x261ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261abc: 0xa25821  addu        $t3, $a1, $v0
    ctx->pc = 0x261abcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_261ac0:
    // 0x261ac0: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x261ac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261ac4: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x261ac4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261ac8: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x261ac8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261acc: 0x1980003d  blez        $t4, . + 4 + (0x3D << 2)
    ctx->pc = 0x261ACCu;
    {
        const bool branch_taken_0x261acc = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x261AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261ACCu;
        // 0x261ad0: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261acc) {
            ctx->pc = 0x261BC4u;
            goto label_261bc4;
        }
    }
    ctx->pc = 0x261AD4u;
    // 0x261ad4: 0x0  nop
    ctx->pc = 0x261ad4u;
    // NOP
label_261ad8:
    // 0x261ad8: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x261ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x261adc: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x261adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x261ae0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x261AE0u;
    {
        const bool branch_taken_0x261ae0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AE0u;
        // 0x261ae4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ae0) {
            ctx->pc = 0x261B04u;
            goto label_261b04;
        }
    }
    ctx->pc = 0x261AE8u;
    // 0x261ae8: 0x85c200d4  lh          $v0, 0xD4($t6)
    ctx->pc = 0x261ae8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 212)));
    // 0x261aec: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x261aecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261af0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x261af0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261af4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x261af4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261af8: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x261af8u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x261afc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x261AFCu;
    {
        const bool branch_taken_0x261afc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261B00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261AFCu;
        // 0x261b00: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261afc) {
            ctx->pc = 0x261B18u;
            goto label_261b18;
        }
    }
    ctx->pc = 0x261B04u;
label_261b04:
    // 0x261b04: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x261B04u;
    {
        const bool branch_taken_0x261b04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B04u;
        // 0x261b08: 0x8dc900c0  lw          $t1, 0xC0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b04) {
            ctx->pc = 0x261B10u;
            goto label_261b10;
        }
    }
    ctx->pc = 0x261B0Cu;
    // 0x261b0c: 0x8dc900c4  lw          $t1, 0xC4($t6)
    ctx->pc = 0x261b0cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 196)));
label_261b10:
    // 0x261b10: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x261b10u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x261b14: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x261b14u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_261b18:
    // 0x261b18: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x261b18u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b1c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x261B1Cu;
    {
        const bool branch_taken_0x261b1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261B20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B1Cu;
        // 0x261b20: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b1c) {
            ctx->pc = 0x261B98u;
            goto label_261b98;
        }
    }
    ctx->pc = 0x261B24u;
    // 0x261b24: 0x0  nop
    ctx->pc = 0x261b24u;
    // NOP
label_261b28:
    // 0x261b28: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x261b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x261b2c: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x261b2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x261b30: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x261b30u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261b34: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x261b34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x261b38: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x261b38u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x261b3c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x261b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x261b40: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x261b40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x261b44: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x261b44u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x261b48: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x261b48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x261b4c: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x261b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x261b50: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x261b50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x261b54: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x261b54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261b58: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x261b58u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261b5c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x261b5cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x261b60: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x261b60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x261b64: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x261b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x261b68: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x261b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x261b6c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x261b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x261b70: 0x1e21021  addu        $v0, $t7, $v0
    ctx->pc = 0x261b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x261b74: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x261b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261b78: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x261b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x261b7c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x261b7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x261b80: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x261b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261b84: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x261b84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x261b88: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x261b88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x261b8c: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x261b8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x261b90: 0x14a0ffe5  bnez        $a1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x261B90u;
    {
        const bool branch_taken_0x261b90 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x261B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261B90u;
        // 0x261b94: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261b90) {
            ctx->pc = 0x261B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261b28;
        }
    }
    ctx->pc = 0x261B98u;
label_261b98:
    // 0x261b98: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x261b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x261b9c: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x261b9cu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x261ba0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261ba4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x261ba4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x261ba8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x261BA8u;
    {
        const bool branch_taken_0x261ba8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BA8u;
        // 0x261bac: 0x85c900d0  lh          $t1, 0xD0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ba8) {
            ctx->pc = 0x261BB4u;
            goto label_261bb4;
        }
    }
    ctx->pc = 0x261BB0u;
    // 0x261bb0: 0x85c900d2  lh          $t1, 0xD2($t6)
    ctx->pc = 0x261bb0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 210)));
label_261bb4:
    // 0x261bb4: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x261bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x261bb8: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x261bb8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x261bbc: 0x1d80ffc6  bgtz        $t4, . + 4 + (-0x3A << 2)
    ctx->pc = 0x261BBCu;
    {
        const bool branch_taken_0x261bbc = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x261BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BBCu;
        // 0x261bc0: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261bbc) {
            ctx->pc = 0x261AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261ad8;
        }
    }
    ctx->pc = 0x261BC4u;
label_261bc4:
    // 0x261bc4: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x261bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_261bc8:
    // 0x261bc8: 0x30420180  andi        $v0, $v0, 0x180
    ctx->pc = 0x261bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)384);
    // 0x261bcc: 0x50400063  beql        $v0, $zero, . + 4 + (0x63 << 2)
    ctx->pc = 0x261BCCu;
    {
        const bool branch_taken_0x261bcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261bcc) {
            ctx->pc = 0x261BD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261BCCu;
            // 0x261bd0: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261D5Cu;
            goto label_261d5c;
        }
    }
    ctx->pc = 0x261BD4u;
    // 0x261bd4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x261bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x261bd8: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x261bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
    // 0x261bdc: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x261bdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x261be0: 0x1060005d  beqz        $v1, . + 4 + (0x5D << 2)
    ctx->pc = 0x261BE0u;
    {
        const bool branch_taken_0x261be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BE0u;
        // 0x261be4: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261be0) {
            ctx->pc = 0x261D58u;
            goto label_261d58;
        }
    }
    ctx->pc = 0x261BE8u;
    // 0x261be8: 0x5440005c  bnel        $v0, $zero, . + 4 + (0x5C << 2)
    ctx->pc = 0x261BE8u;
    {
        const bool branch_taken_0x261be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261be8) {
            ctx->pc = 0x261BECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261BE8u;
            // 0x261bec: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261D5Cu;
            goto label_261d5c;
        }
    }
    ctx->pc = 0x261BF0u;
    // 0x261bf0: 0x8f230008  lw          $v1, 0x8($t9)
    ctx->pc = 0x261bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x261bf4: 0x30620084  andi        $v0, $v1, 0x84
    ctx->pc = 0x261bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)132);
    // 0x261bf8: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
    ctx->pc = 0x261BF8u;
    {
        const bool branch_taken_0x261bf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261BF8u;
        // 0x261bfc: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261bf8) {
            ctx->pc = 0x261D58u;
            goto label_261d58;
        }
    }
    ctx->pc = 0x261C00u;
    // 0x261c00: 0x8f320034  lw          $s2, 0x34($t9)
    ctx->pc = 0x261c00u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
    // 0x261c04: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x261C04u;
    {
        const bool branch_taken_0x261c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C04u;
        // 0x261c08: 0x240782d  daddu       $t7, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c04) {
            ctx->pc = 0x261C10u;
            goto label_261c10;
        }
    }
    ctx->pc = 0x261C0Cu;
    // 0x261c0c: 0x8f2f0038  lw          $t7, 0x38($t9)
    ctx->pc = 0x261c0cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_261c10:
    // 0x261c10: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x261c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x261c14: 0x8dc300e0  lw          $v1, 0xE0($t6)
    ctx->pc = 0x261c14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 224)));
    // 0x261c18: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x261c18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x261c1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c20: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x261c20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x261c24: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x261c24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x261c28: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261C28u;
    {
        const bool branch_taken_0x261c28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C28u;
        // 0x261c2c: 0xa35821  addu        $t3, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c28) {
            ctx->pc = 0x261C3Cu;
            goto label_261c3c;
        }
    }
    ctx->pc = 0x261C30u;
    // 0x261c30: 0x8dc200e4  lw          $v0, 0xE4($t6)
    ctx->pc = 0x261c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 228)));
    // 0x261c34: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x261c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261c38: 0xa25821  addu        $t3, $a1, $v0
    ctx->pc = 0x261c38u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_261c3c:
    // 0x261c3c: 0x160402d  daddu       $t0, $t3, $zero
    ctx->pc = 0x261c3cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c40: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x261c40u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c44: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x261c44u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c48: 0x19800043  blez        $t4, . + 4 + (0x43 << 2)
    ctx->pc = 0x261C48u;
    {
        const bool branch_taken_0x261c48 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x261C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C48u;
        // 0x261c4c: 0x2e0502d  daddu       $t2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c48) {
            ctx->pc = 0x261D58u;
            goto label_261d58;
        }
    }
    ctx->pc = 0x261C50u;
label_261c50:
    // 0x261c50: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x261c50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x261c54: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x261c54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x261c58: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x261C58u;
    {
        const bool branch_taken_0x261c58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C58u;
        // 0x261c5c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c58) {
            ctx->pc = 0x261C7Cu;
            goto label_261c7c;
        }
    }
    ctx->pc = 0x261C60u;
    // 0x261c60: 0x85c200ec  lh          $v0, 0xEC($t6)
    ctx->pc = 0x261c60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 236)));
    // 0x261c64: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x261c64u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c68: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x261c68u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c6c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x261c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261c70: 0x1625823  subu        $t3, $t3, $v0
    ctx->pc = 0x261c70u;
    SET_GPR_S32(ctx, 11, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x261c74: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x261C74u;
    {
        const bool branch_taken_0x261c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C74u;
        // 0x261c78: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c74) {
            ctx->pc = 0x261C90u;
            goto label_261c90;
        }
    }
    ctx->pc = 0x261C7Cu;
label_261c7c:
    // 0x261c7c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x261C7Cu;
    {
        const bool branch_taken_0x261c7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C7Cu;
        // 0x261c80: 0x8dc900d8  lw          $t1, 0xD8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c7c) {
            ctx->pc = 0x261C88u;
            goto label_261c88;
        }
    }
    ctx->pc = 0x261C84u;
    // 0x261c84: 0x8dc900dc  lw          $t1, 0xDC($t6)
    ctx->pc = 0x261c84u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 220)));
label_261c88:
    // 0x261c88: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x261c88u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x261c8c: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x261c8cu;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_261c90:
    // 0x261c90: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x261c90u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261c94: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x261C94u;
    {
        const bool branch_taken_0x261c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261C94u;
        // 0x261c98: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261c94) {
            ctx->pc = 0x261D2Cu;
            goto label_261d2c;
        }
    }
    ctx->pc = 0x261C9Cu;
    // 0x261c9c: 0x0  nop
    ctx->pc = 0x261c9cu;
    // NOP
label_261ca0:
    // 0x261ca0: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x261ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x261ca4: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x261ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x261ca8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x261ca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261cac: 0x2cd3821  addu        $a3, $s6, $t5
    ctx->pc = 0x261cacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x261cb0: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x261cb0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x261cb4: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x261cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x261cb8: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x261cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x261cbc: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x261cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x261cc0: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x261cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x261cc4: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x261cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x261cc8: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x261cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x261ccc: 0x120282d  daddu       $a1, $t1, $zero
    ctx->pc = 0x261cccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261cd0: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x261cd0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261cd4: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x261cd4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x261cd8: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x261cd8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x261cdc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x261cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x261ce0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x261ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x261ce4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x261ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x261ce8: 0x2421821  addu        $v1, $s2, $v0
    ctx->pc = 0x261ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
    // 0x261cec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x261cecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261cf0: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x261cf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x261cf4: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x261cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x261cf8: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x261cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261cfc: 0x1e21821  addu        $v1, $t7, $v0
    ctx->pc = 0x261cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x261d00: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x261d00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x261d04: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x261d04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x261d08: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x261d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261d0c: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x261d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x261d10: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x261d10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x261d14: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x261d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x261d18: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x261d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
    // 0x261d1c: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x261d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x261d20: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x261d20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x261d24: 0x14a0ffde  bnez        $a1, . + 4 + (-0x22 << 2)
    ctx->pc = 0x261D24u;
    {
        const bool branch_taken_0x261d24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x261D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D24u;
        // 0x261d28: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d24) {
            ctx->pc = 0x261CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261ca0;
        }
    }
    ctx->pc = 0x261D2Cu;
label_261d2c:
    // 0x261d2c: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x261d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x261d30: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x261d30u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x261d34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261d38: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x261d38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x261d3c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x261D3Cu;
    {
        const bool branch_taken_0x261d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D3Cu;
        // 0x261d40: 0x85c900e8  lh          $t1, 0xE8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d3c) {
            ctx->pc = 0x261D48u;
            goto label_261d48;
        }
    }
    ctx->pc = 0x261D44u;
    // 0x261d44: 0x85c900ea  lh          $t1, 0xEA($t6)
    ctx->pc = 0x261d44u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 234)));
label_261d48:
    // 0x261d48: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x261d48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x261d4c: 0x1625821  addu        $t3, $t3, $v0
    ctx->pc = 0x261d4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
    // 0x261d50: 0x1d80ffbf  bgtz        $t4, . + 4 + (-0x41 << 2)
    ctx->pc = 0x261D50u;
    {
        const bool branch_taken_0x261d50 = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x261D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D50u;
        // 0x261d54: 0x160402d  daddu       $t0, $t3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d50) {
            ctx->pc = 0x261C50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261c50;
        }
    }
    ctx->pc = 0x261D58u;
label_261d58:
    // 0x261d58: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x261d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_261d5c:
    // 0x261d5c: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x261d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x261d60: 0x50400069  beql        $v0, $zero, . + 4 + (0x69 << 2)
    ctx->pc = 0x261D60u;
    {
        const bool branch_taken_0x261d60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261d60) {
            ctx->pc = 0x261D64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261D60u;
            // 0x261d64: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261F08u;
            goto label_261f08;
        }
    }
    ctx->pc = 0x261D68u;
    // 0x261d68: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x261d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x261d6c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x261d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x261d70: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x261d70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x261d74: 0x10600063  beqz        $v1, . + 4 + (0x63 << 2)
    ctx->pc = 0x261D74u;
    {
        const bool branch_taken_0x261d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261D74u;
        // 0x261d78: 0x30420008  andi        $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261d74) {
            ctx->pc = 0x261F04u;
            goto label_261f04;
        }
    }
    ctx->pc = 0x261D7Cu;
    // 0x261d7c: 0x54400062  bnel        $v0, $zero, . + 4 + (0x62 << 2)
    ctx->pc = 0x261D7Cu;
    {
        const bool branch_taken_0x261d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x261d7c) {
            ctx->pc = 0x261D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261D7Cu;
            // 0x261d80: 0x7bb000a0  lq          $s0, 0xA0($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261F08u;
            goto label_261f08;
        }
    }
    ctx->pc = 0x261D84u;
    // 0x261d84: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x261d84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
    // 0x261d88: 0x8dc300f8  lw          $v1, 0xF8($t6)
    ctx->pc = 0x261d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 248)));
    // 0x261d8c: 0x8dc50008  lw          $a1, 0x8($t6)
    ctx->pc = 0x261d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 8)));
    // 0x261d90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261d94: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x261d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x261d98: 0x8f310030  lw          $s1, 0x30($t9)
    ctx->pc = 0x261d98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
    // 0x261d9c: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x261d9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x261da0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x261DA0u;
    {
        const bool branch_taken_0x261da0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DA0u;
        // 0x261da4: 0xa37821  addu        $t7, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261da0) {
            ctx->pc = 0x261DB4u;
            goto label_261db4;
        }
    }
    ctx->pc = 0x261DA8u;
    // 0x261da8: 0x8dc200fc  lw          $v0, 0xFC($t6)
    ctx->pc = 0x261da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 252)));
    // 0x261dac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x261dacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261db0: 0xa27821  addu        $t7, $a1, $v0
    ctx->pc = 0x261db0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_261db4:
    // 0x261db4: 0x2e0502d  daddu       $t2, $s7, $zero
    ctx->pc = 0x261db4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261db8: 0x3c0602d  daddu       $t4, $fp, $zero
    ctx->pc = 0x261db8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261dbc: 0x1e0582d  daddu       $t3, $t7, $zero
    ctx->pc = 0x261dbcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261dc0: 0x19800050  blez        $t4, . + 4 + (0x50 << 2)
    ctx->pc = 0x261DC0u;
    {
        const bool branch_taken_0x261dc0 = (GPR_S64(ctx, 12) <= 0);
        ctx->pc = 0x261DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DC0u;
        // 0x261dc4: 0x682d  daddu       $t5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261dc0) {
            ctx->pc = 0x261F04u;
            goto label_261f04;
        }
    }
    ctx->pc = 0x261DC8u;
label_261dc8:
    // 0x261dc8: 0x8dc20018  lw          $v0, 0x18($t6)
    ctx->pc = 0x261dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 24)));
    // 0x261dcc: 0x4c102a  slt         $v0, $v0, $t4
    ctx->pc = 0x261dccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 12)) ? 1 : 0);
    // 0x261dd0: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x261DD0u;
    {
        const bool branch_taken_0x261dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DD0u;
        // 0x261dd4: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x261dd0) {
            ctx->pc = 0x261DF4u;
            goto label_261df4;
        }
    }
    ctx->pc = 0x261DD8u;
    // 0x261dd8: 0x85c20104  lh          $v0, 0x104($t6)
    ctx->pc = 0x261dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 260)));
    // 0x261ddc: 0x180482d  daddu       $t1, $t4, $zero
    ctx->pc = 0x261ddcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261de0: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x261de0u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261de4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x261de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x261de8: 0x1e27823  subu        $t7, $t7, $v0
    ctx->pc = 0x261de8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x261dec: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x261DECu;
    {
        const bool branch_taken_0x261dec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DECu;
        // 0x261df0: 0x1e0582d  daddu       $t3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261dec) {
            ctx->pc = 0x261E08u;
            goto label_261e08;
        }
    }
    ctx->pc = 0x261DF4u;
label_261df4:
    // 0x261df4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x261DF4u;
    {
        const bool branch_taken_0x261df4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261DF4u;
        // 0x261df8: 0x8dc900f0  lw          $t1, 0xF0($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261df4) {
            ctx->pc = 0x261E00u;
            goto label_261e00;
        }
    }
    ctx->pc = 0x261DFCu;
    // 0x261dfc: 0x8dc900f4  lw          $t1, 0xF4($t6)
    ctx->pc = 0x261dfcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 244)));
label_261e00:
    // 0x261e00: 0x1351023  subu        $v0, $t1, $s5
    ctx->pc = 0x261e00u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 21)));
    // 0x261e04: 0x1826023  subu        $t4, $t4, $v0
    ctx->pc = 0x261e04u;
    SET_GPR_S32(ctx, 12, (int32_t)SUB32(GPR_U32(ctx, 12), GPR_U32(ctx, 2)));
label_261e08:
    // 0x261e08: 0x8f220008  lw          $v0, 0x8($t9)
    ctx->pc = 0x261e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
    // 0x261e0c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x261e0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x261e10: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x261E10u;
    {
        const bool branch_taken_0x261e10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E10u;
        // 0x261e14: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e10) {
            ctx->pc = 0x261EB0u;
            goto label_261eb0;
        }
    }
    ctx->pc = 0x261E18u;
    // 0x261e18: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x261E18u;
    {
        const bool branch_taken_0x261e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261E18u;
        // 0x261e1c: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261e18) {
            ctx->pc = 0x261ED8u;
            goto label_261ed8;
        }
    }
    ctx->pc = 0x261E20u;
label_261e20:
    // 0x261e20: 0x28d1021  addu        $v0, $s4, $t5
    ctx->pc = 0x261e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 13)));
    // 0x261e24: 0x26d2821  addu        $a1, $s3, $t5
    ctx->pc = 0x261e24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 13)));
    // 0x261e28: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x261e28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261e2c: 0xd2040  sll         $a0, $t5, 1
    ctx->pc = 0x261e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 13), 1));
    // 0x261e30: 0x90a60000  lbu         $a2, 0x0($a1)
    ctx->pc = 0x261e30u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x261e34: 0x2cd4021  addu        $t0, $s6, $t5
    ctx->pc = 0x261e34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 13)));
    // 0x261e38: 0x6a1804  sllv        $v1, $t2, $v1
    ctx->pc = 0x261e38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x261e3c: 0x902006  srlv        $a0, $s0, $a0
    ctx->pc = 0x261e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 16), GPR_U32(ctx, 4) & 0x1F));
    // 0x261e40: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x261e40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x261e44: 0xca3004  sllv        $a2, $t2, $a2
    ctx->pc = 0x261e44u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 6) & 0x1F));
    // 0x261e48: 0x781821  addu        $v1, $v1, $t8
    ctx->pc = 0x261e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 24)));
    // 0x261e4c: 0x308d0003  andi        $t5, $a0, 0x3
    ctx->pc = 0x261e4cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x261e50: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x261e50u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x261e54: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x261e54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261e58: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x261e58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x261e5c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x261e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x261e60: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x261e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x261e64: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x261e64u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x261e68: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x261e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x261e6c: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x261e6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x261e70: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x261e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x261e74: 0x90450002  lbu         $a1, 0x2($v0)
    ctx->pc = 0x261e74u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x261e78: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x261e78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x261e7c: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x261e7cu;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x261e80: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x261e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x261e84: 0x52c00  sll         $a1, $a1, 16
    ctx->pc = 0x261e84u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x261e88: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x261e88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x261e8c: 0x63600  sll         $a2, $a2, 24
    ctx->pc = 0x261e8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x261e90: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x261e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x261e94: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x261e94u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x261e98: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x261e98u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x261e9c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x261e9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x261ea0: 0x14e0ffdf  bnez        $a3, . + 4 + (-0x21 << 2)
    ctx->pc = 0x261EA0u;
    {
        const bool branch_taken_0x261ea0 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x261EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EA0u;
        // 0x261ea4: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ea0) {
            ctx->pc = 0x261E20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261e20;
        }
    }
    ctx->pc = 0x261EA8u;
    // 0x261ea8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x261EA8u;
    {
        const bool branch_taken_0x261ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EA8u;
        // 0x261eac: 0x8f220018  lw          $v0, 0x18($t9) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ea8) {
            ctx->pc = 0x261EDCu;
            goto label_261edc;
        }
    }
    ctx->pc = 0x261EB0u;
label_261eb0:
    // 0x261eb0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x261EB0u;
    {
        const bool branch_taken_0x261eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EB0u;
        // 0x261eb4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261eb0) {
            ctx->pc = 0x261ED8u;
            goto label_261ed8;
        }
    }
    ctx->pc = 0x261EB8u;
    // 0x261eb8: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x261eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
    // 0x261ebc: 0x0  nop
    ctx->pc = 0x261ebcu;
    // NOP
label_261ec0:
    // 0x261ec0: 0xad630000  sw          $v1, 0x0($t3)
    ctx->pc = 0x261ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 3));
    // 0x261ec4: 0x120102d  daddu       $v0, $t1, $zero
    ctx->pc = 0x261ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261ec8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x261ec8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x261ecc: 0x0  nop
    ctx->pc = 0x261eccu;
    // NOP
    // 0x261ed0: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x261ED0u;
    {
        const bool branch_taken_0x261ed0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261ED0u;
        // 0x261ed4: 0x2529ffff  addiu       $t1, $t1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ed0) {
            ctx->pc = 0x261EC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261ec0;
        }
    }
    ctx->pc = 0x261ED8u;
label_261ed8:
    // 0x261ed8: 0x8f220018  lw          $v0, 0x18($t9)
    ctx->pc = 0x261ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_261edc:
    // 0x261edc: 0x1555023  subu        $t2, $t2, $s5
    ctx->pc = 0x261edcu;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 21)));
    // 0x261ee0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x261ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x261ee4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x261ee4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x261ee8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x261EE8u;
    {
        const bool branch_taken_0x261ee8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EE8u;
        // 0x261eec: 0x85c90100  lh          $t1, 0x100($t6) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261ee8) {
            ctx->pc = 0x261EF4u;
            goto label_261ef4;
        }
    }
    ctx->pc = 0x261EF0u;
    // 0x261ef0: 0x85c90102  lh          $t1, 0x102($t6)
    ctx->pc = 0x261ef0u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 258)));
label_261ef4:
    // 0x261ef4: 0x91100  sll         $v0, $t1, 4
    ctx->pc = 0x261ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 4));
    // 0x261ef8: 0x1e27821  addu        $t7, $t7, $v0
    ctx->pc = 0x261ef8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 2)));
    // 0x261efc: 0x1d80ffb2  bgtz        $t4, . + 4 + (-0x4E << 2)
    ctx->pc = 0x261EFCu;
    {
        const bool branch_taken_0x261efc = (GPR_S64(ctx, 12) > 0);
        ctx->pc = 0x261F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261EFCu;
        // 0x261f00: 0x1e0582d  daddu       $t3, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261efc) {
            ctx->pc = 0x261DC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_261dc8;
        }
    }
    ctx->pc = 0x261F04u;
label_261f04:
    // 0x261f04: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x261f04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_261f08:
    // 0x261f08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x261f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x261f0c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x261f0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x261f10: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x261f10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x261f14: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x261f14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x261f18: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x261f18u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x261f1c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x261f1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x261f20: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x261f20u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x261f24: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x261f24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x261f28: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x261f28u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x261f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x261F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261F2Cu;
        // 0x261f30: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261F34u;
    // 0x261f34: 0x0  nop
    ctx->pc = 0x261f34u;
    // NOP
    ctx->pc = 0x261f38u;
}
