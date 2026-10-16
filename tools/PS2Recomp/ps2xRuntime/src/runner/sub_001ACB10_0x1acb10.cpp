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

// Function: sub_001ACB10
// Address: 0x1acb10 - 0x1acca8
void sub_001ACB10_0x1acb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACB10_0x1acb10");
#endif

    switch (ctx->pc) {
        case 0x1acb10u: goto label_1acb10;
        case 0x1acb14u: goto label_1acb14;
        case 0x1acb18u: goto label_1acb18;
        case 0x1acb1cu: goto label_1acb1c;
        case 0x1acb20u: goto label_1acb20;
        case 0x1acb24u: goto label_1acb24;
        case 0x1acb28u: goto label_1acb28;
        case 0x1acb2cu: goto label_1acb2c;
        case 0x1acb30u: goto label_1acb30;
        case 0x1acb34u: goto label_1acb34;
        case 0x1acb38u: goto label_1acb38;
        case 0x1acb3cu: goto label_1acb3c;
        case 0x1acb40u: goto label_1acb40;
        case 0x1acb44u: goto label_1acb44;
        case 0x1acb48u: goto label_1acb48;
        case 0x1acb4cu: goto label_1acb4c;
        case 0x1acb50u: goto label_1acb50;
        case 0x1acb54u: goto label_1acb54;
        case 0x1acb58u: goto label_1acb58;
        case 0x1acb5cu: goto label_1acb5c;
        case 0x1acb60u: goto label_1acb60;
        case 0x1acb64u: goto label_1acb64;
        case 0x1acb68u: goto label_1acb68;
        case 0x1acb6cu: goto label_1acb6c;
        case 0x1acb70u: goto label_1acb70;
        case 0x1acb74u: goto label_1acb74;
        case 0x1acb78u: goto label_1acb78;
        case 0x1acb7cu: goto label_1acb7c;
        case 0x1acb80u: goto label_1acb80;
        case 0x1acb84u: goto label_1acb84;
        case 0x1acb88u: goto label_1acb88;
        case 0x1acb8cu: goto label_1acb8c;
        case 0x1acb90u: goto label_1acb90;
        case 0x1acb94u: goto label_1acb94;
        case 0x1acb98u: goto label_1acb98;
        case 0x1acb9cu: goto label_1acb9c;
        case 0x1acba0u: goto label_1acba0;
        case 0x1acba4u: goto label_1acba4;
        case 0x1acba8u: goto label_1acba8;
        case 0x1acbacu: goto label_1acbac;
        case 0x1acbb0u: goto label_1acbb0;
        case 0x1acbb4u: goto label_1acbb4;
        case 0x1acbb8u: goto label_1acbb8;
        case 0x1acbbcu: goto label_1acbbc;
        case 0x1acbc0u: goto label_1acbc0;
        case 0x1acbc4u: goto label_1acbc4;
        case 0x1acbc8u: goto label_1acbc8;
        case 0x1acbccu: goto label_1acbcc;
        case 0x1acbd0u: goto label_1acbd0;
        case 0x1acbd4u: goto label_1acbd4;
        case 0x1acbd8u: goto label_1acbd8;
        case 0x1acbdcu: goto label_1acbdc;
        case 0x1acbe0u: goto label_1acbe0;
        case 0x1acbe4u: goto label_1acbe4;
        case 0x1acbe8u: goto label_1acbe8;
        case 0x1acbecu: goto label_1acbec;
        case 0x1acbf0u: goto label_1acbf0;
        case 0x1acbf4u: goto label_1acbf4;
        case 0x1acbf8u: goto label_1acbf8;
        case 0x1acbfcu: goto label_1acbfc;
        case 0x1acc00u: goto label_1acc00;
        case 0x1acc04u: goto label_1acc04;
        case 0x1acc08u: goto label_1acc08;
        case 0x1acc0cu: goto label_1acc0c;
        case 0x1acc10u: goto label_1acc10;
        case 0x1acc14u: goto label_1acc14;
        case 0x1acc18u: goto label_1acc18;
        case 0x1acc1cu: goto label_1acc1c;
        case 0x1acc20u: goto label_1acc20;
        case 0x1acc24u: goto label_1acc24;
        case 0x1acc28u: goto label_1acc28;
        case 0x1acc2cu: goto label_1acc2c;
        case 0x1acc30u: goto label_1acc30;
        case 0x1acc34u: goto label_1acc34;
        case 0x1acc38u: goto label_1acc38;
        case 0x1acc3cu: goto label_1acc3c;
        case 0x1acc40u: goto label_1acc40;
        case 0x1acc44u: goto label_1acc44;
        case 0x1acc48u: goto label_1acc48;
        case 0x1acc4cu: goto label_1acc4c;
        case 0x1acc50u: goto label_1acc50;
        case 0x1acc54u: goto label_1acc54;
        case 0x1acc58u: goto label_1acc58;
        case 0x1acc5cu: goto label_1acc5c;
        case 0x1acc60u: goto label_1acc60;
        case 0x1acc64u: goto label_1acc64;
        case 0x1acc68u: goto label_1acc68;
        case 0x1acc6cu: goto label_1acc6c;
        case 0x1acc70u: goto label_1acc70;
        case 0x1acc74u: goto label_1acc74;
        case 0x1acc78u: goto label_1acc78;
        case 0x1acc7cu: goto label_1acc7c;
        case 0x1acc80u: goto label_1acc80;
        case 0x1acc84u: goto label_1acc84;
        case 0x1acc88u: goto label_1acc88;
        case 0x1acc8cu: goto label_1acc8c;
        case 0x1acc90u: goto label_1acc90;
        case 0x1acc94u: goto label_1acc94;
        case 0x1acc98u: goto label_1acc98;
        case 0x1acc9cu: goto label_1acc9c;
        case 0x1acca0u: goto label_1acca0;
        case 0x1acca4u: goto label_1acca4;
        default: break;
    }

    ctx->pc = 0x1acb10u;

label_1acb10:
    // 0x1acb10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1acb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1acb14:
    // 0x1acb14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1acb14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1acb18:
    // 0x1acb18: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1acb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1acb1c:
    // 0x1acb1c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1acb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1acb20:
    // 0x1acb20: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1acb20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1acb24:
    // 0x1acb24: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1acb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1acb28:
    // 0x1acb28: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1acb28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1acb2c:
    // 0x1acb2c: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1acb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1acb30:
    // 0x1acb30: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1acb30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1acb34:
    // 0x1acb34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1acb34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1acb38:
    // 0x1acb38: 0x96030044  lhu         $v1, 0x44($s0)
    ctx->pc = 0x1acb38u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
label_1acb3c:
    // 0x1acb3c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_1acb40:
    if (ctx->pc == 0x1ACB40u) {
        ctx->pc = 0x1ACB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB3Cu;
        // 0x1acb40: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB44u;
        goto label_1acb44;
    }
    ctx->pc = 0x1ACB3Cu;
    {
        const bool branch_taken_0x1acb3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1ACB40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB3Cu;
        // 0x1acb40: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb3c) {
            ctx->pc = 0x1ACB60u;
            goto label_1acb60;
        }
    }
    ctx->pc = 0x1ACB44u;
label_1acb44:
    // 0x1acb44: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1acb44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1acb48:
    // 0x1acb48: 0x84440018  lh          $a0, 0x18($v0)
    ctx->pc = 0x1acb48u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 24)));
label_1acb4c:
    // 0x1acb4c: 0x8c43001c  lw          $v1, 0x1C($v0)
    ctx->pc = 0x1acb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1acb50:
    // 0x1acb50: 0x60f809  jalr        $v1
label_1acb54:
    if (ctx->pc == 0x1ACB54u) {
        ctx->pc = 0x1ACB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB50u;
        // 0x1acb54: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB58u;
        goto label_1acb58;
    }
    ctx->pc = 0x1ACB50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1ACB58u);
        ctx->pc = 0x1ACB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB50u;
        // 0x1acb54: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACB50u, 0x1ACB58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1ACB58u;
label_1acb58:
    // 0x1acb58: 0x1000004c  b           . + 4 + (0x4C << 2)
label_1acb5c:
    if (ctx->pc == 0x1ACB5Cu) {
        ctx->pc = 0x1ACB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB58u;
        // 0x1acb5c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB60u;
        goto label_1acb60;
    }
    ctx->pc = 0x1ACB58u;
    {
        const bool branch_taken_0x1acb58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB58u;
        // 0x1acb5c: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb58) {
            ctx->pc = 0x1ACC8Cu;
            goto label_1acc8c;
        }
    }
    ctx->pc = 0x1ACB60u;
label_1acb60:
    // 0x1acb60: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1acb60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_1acb64:
    // 0x1acb64: 0x96030044  lhu         $v1, 0x44($s0)
    ctx->pc = 0x1acb64u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 68)));
label_1acb68:
    // 0x1acb68: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1acb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1acb6c:
    // 0x1acb6c: 0x244281b0  addiu       $v0, $v0, -0x7E50
    ctx->pc = 0x1acb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934960));
label_1acb70:
    // 0x1acb70: 0x8c460008  lw          $a2, 0x8($v0)
    ctx->pc = 0x1acb70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1acb74:
    // 0x1acb74: 0x6a650007  ldl         $a1, 0x7($s3)
    ctx->pc = 0x1acb74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_1acb78:
    // 0x1acb78: 0x6e650000  ldr         $a1, 0x0($s3)
    ctx->pc = 0x1acb78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_1acb7c:
    // 0x1acb7c: 0x8e670008  lw          $a3, 0x8($s3)
    ctx->pc = 0x1acb7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_1acb80:
    // 0x1acb80: 0xb3a50007  sdl         $a1, 0x7($sp)
    ctx->pc = 0x1acb80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1acb84:
    // 0x1acb84: 0xb7a50000  sdr         $a1, 0x0($sp)
    ctx->pc = 0x1acb84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1acb88:
    // 0x1acb88: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
label_1acb8c:
    if (ctx->pc == 0x1ACB8Cu) {
        ctx->pc = 0x1ACB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB88u;
        // 0x1acb8c: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACB90u;
        goto label_1acb90;
    }
    ctx->pc = 0x1ACB88u;
    {
        const bool branch_taken_0x1acb88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB88u;
        // 0x1acb8c: 0xafa70008  sw          $a3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb88) {
            ctx->pc = 0x1ACBA0u;
            goto label_1acba0;
        }
    }
    ctx->pc = 0x1ACB90u;
label_1acb90:
    // 0x1acb90: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1acb90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1acb94:
    // 0x1acb94: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1acb94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1acb98:
    // 0x1acb98: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1acb9c:
    if (ctx->pc == 0x1ACB9Cu) {
        ctx->pc = 0x1ACB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB98u;
        // 0x1acb9c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBA0u;
        goto label_1acba0;
    }
    ctx->pc = 0x1ACB98u;
    {
        const bool branch_taken_0x1acb98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACB98u;
        // 0x1acb9c: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acb98) {
            ctx->pc = 0x1ACBA8u;
            goto label_1acba8;
        }
    }
    ctx->pc = 0x1ACBA0u;
label_1acba0:
    // 0x1acba0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1acba4:
    if (ctx->pc == 0x1ACBA4u) {
        ctx->pc = 0x1ACBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBA0u;
        // 0x1acba4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBA8u;
        goto label_1acba8;
    }
    ctx->pc = 0x1ACBA0u;
    {
        const bool branch_taken_0x1acba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBA0u;
        // 0x1acba4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acba0) {
            ctx->pc = 0x1ACBB0u;
            goto label_1acbb0;
        }
    }
    ctx->pc = 0x1ACBA8u;
label_1acba8:
    // 0x1acba8: 0x622818  mult        $a1, $v1, $v0
    ctx->pc = 0x1acba8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_1acbac:
    // 0x1acbac: 0xa69021  addu        $s2, $a1, $a2
    ctx->pc = 0x1acbacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1acbb0:
    // 0x1acbb0: 0x249181b0  addiu       $s1, $a0, -0x7E50
    ctx->pc = 0x1acbb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934960));
label_1acbb4:
    // 0x1acbb4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1acbb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1acbb8:
    // 0x1acbb8: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1acbb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1acbbc:
    // 0x1acbbc: 0x27a80020  addiu       $t0, $sp, 0x20
    ctx->pc = 0x1acbbcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_1acbc0:
    // 0x1acbc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1acbc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1acbc4:
    // 0x1acbc4: 0xc06a0cc  jal         func_1A8330
label_1acbc8:
    if (ctx->pc == 0x1ACBC8u) {
        ctx->pc = 0x1ACBC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBC4u;
        // 0x1acbc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBCCu;
        goto label_1acbcc;
    }
    ctx->pc = 0x1ACBC4u;
    SET_GPR_U32(ctx, 31, 0x1ACBCCu);
    ctx->pc = 0x1ACBC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1ACBC4u;
    // 0x1acbc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8330u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A8330u, 0x1ACBC4u, 0x1ACBCCu)) {
        return;
    }
    ctx->pc = 0x1ACBCCu;
label_1acbcc:
    // 0x1acbcc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x1acbccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1acbd0:
    // 0x1acbd0: 0x6ba60007  ldl         $a2, 0x7($sp)
    ctx->pc = 0x1acbd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_1acbd4:
    // 0x1acbd4: 0x6fa60000  ldr         $a2, 0x0($sp)
    ctx->pc = 0x1acbd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_1acbd8:
    // 0x1acbd8: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x1acbd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1acbdc:
    // 0x1acbdc: 0xb2060007  sdl         $a2, 0x7($s0)
    ctx->pc = 0x1acbdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1acbe0:
    // 0x1acbe0: 0xb6060000  sdr         $a2, 0x0($s0)
    ctx->pc = 0x1acbe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1acbe4:
    // 0x1acbe4: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1acbe8:
    if (ctx->pc == 0x1ACBE8u) {
        ctx->pc = 0x1ACBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBE4u;
        // 0x1acbe8: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBECu;
        goto label_1acbec;
    }
    ctx->pc = 0x1ACBE4u;
    {
        const bool branch_taken_0x1acbe4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBE4u;
        // 0x1acbe8: 0xae070008  sw          $a3, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acbe4) {
            ctx->pc = 0x1ACC24u;
            goto label_1acc24;
        }
    }
    ctx->pc = 0x1ACBECu;
label_1acbec:
    // 0x1acbec: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1acbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1acbf0:
    // 0x1acbf0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1acbf4:
    if (ctx->pc == 0x1ACBF4u) {
        ctx->pc = 0x1ACBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBF0u;
        // 0x1acbf4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACBF8u;
        goto label_1acbf8;
    }
    ctx->pc = 0x1ACBF0u;
    {
        const bool branch_taken_0x1acbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACBF0u;
        // 0x1acbf4: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acbf0) {
            ctx->pc = 0x1ACC24u;
            goto label_1acc24;
        }
    }
    ctx->pc = 0x1ACBF8u;
label_1acbf8:
    // 0x1acbf8: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x1acbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_1acbfc:
    // 0x1acbfc: 0x43001b  divu        $zero, $v0, $v1
    ctx->pc = 0x1acbfcu;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
label_1acc00:
    // 0x1acc00: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
label_1acc04:
    if (ctx->pc == 0x1ACC04u) {
        ctx->pc = 0x1ACC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC00u;
        // 0x1acc04: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC08u;
        goto label_1acc08;
    }
    ctx->pc = 0x1ACC00u;
    {
        const bool branch_taken_0x1acc00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acc00) {
            ctx->pc = 0x1ACC04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1ACC00u;
            // 0x1acc04: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1ACC08u;
            goto label_1acc08;
        }
    }
    ctx->pc = 0x1ACC08u;
label_1acc08:
    // 0x1acc08: 0x2812  mflo        $a1
    ctx->pc = 0x1acc08u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_1acc0c:
    // 0x1acc0c: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
label_1acc10:
    if (ctx->pc == 0x1ACC10u) {
        ctx->pc = 0x1ACC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC0Cu;
        // 0x1acc10: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC14u;
        goto label_1acc14;
    }
    ctx->pc = 0x1ACC0Cu;
    {
        const bool branch_taken_0x1acc0c = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x1ACC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC0Cu;
        // 0x1acc10: 0x3402ffff  ori         $v0, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc0c) {
            ctx->pc = 0x1ACC28u;
            goto label_1acc28;
        }
    }
    ctx->pc = 0x1ACC14u;
label_1acc14:
    // 0x1acc14: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x1acc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1acc18:
    // 0x1acc18: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x1acc18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1acc1c:
    // 0x1acc1c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1acc20:
    if (ctx->pc == 0x1ACC20u) {
        ctx->pc = 0x1ACC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC1Cu;
        // 0x1acc20: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC24u;
        goto label_1acc24;
    }
    ctx->pc = 0x1ACC1Cu;
    {
        const bool branch_taken_0x1acc1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1ACC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC1Cu;
        // 0x1acc20: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc1c) {
            ctx->pc = 0x1ACC28u;
            goto label_1acc28;
        }
    }
    ctx->pc = 0x1ACC24u;
label_1acc24:
    // 0x1acc24: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1acc24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1acc28:
    // 0x1acc28: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x1acc28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1acc2c:
    // 0x1acc2c: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1acc2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1acc30:
    // 0x1acc30: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x1acc30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1acc34:
    // 0x1acc34: 0xb3a30017  sdl         $v1, 0x17($sp)
    ctx->pc = 0x1acc34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1acc38:
    // 0x1acc38: 0xb7a30010  sdr         $v1, 0x10($sp)
    ctx->pc = 0x1acc38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1acc3c:
    // 0x1acc3c: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x1acc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_1acc40:
    // 0x1acc40: 0xa6020044  sh          $v0, 0x44($s0)
    ctx->pc = 0x1acc40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 68), (uint16_t)GPR_U32(ctx, 2));
label_1acc44:
    // 0x1acc44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1acc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1acc48:
    // 0x1acc48: 0x6ba70017  ldl         $a3, 0x17($sp)
    ctx->pc = 0x1acc48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_1acc4c:
    // 0x1acc4c: 0x6fa70010  ldr         $a3, 0x10($sp)
    ctx->pc = 0x1acc4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_1acc50:
    // 0x1acc50: 0x8fa80018  lw          $t0, 0x18($sp)
    ctx->pc = 0x1acc50u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_1acc54:
    // 0x1acc54: 0xb2670007  sdl         $a3, 0x7($s3)
    ctx->pc = 0x1acc54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1acc58:
    // 0x1acc58: 0xb6670000  sdr         $a3, 0x0($s3)
    ctx->pc = 0x1acc58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1acc5c:
    // 0x1acc5c: 0xae680008  sw          $t0, 0x8($s3)
    ctx->pc = 0x1acc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 8));
label_1acc60:
    // 0x1acc60: 0x1242000a  beq         $s2, $v0, . + 4 + (0xA << 2)
label_1acc64:
    if (ctx->pc == 0x1ACC64u) {
        ctx->pc = 0x1ACC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC60u;
        // 0x1acc64: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACC68u;
        goto label_1acc68;
    }
    ctx->pc = 0x1ACC60u;
    {
        const bool branch_taken_0x1acc60 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1ACC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACC60u;
        // 0x1acc64: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acc60) {
            ctx->pc = 0x1ACC8Cu;
            goto label_1acc8c;
        }
    }
    ctx->pc = 0x1ACC68u;
label_1acc68:
    // 0x1acc68: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x1acc68u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_1acc6c:
    // 0x1acc6c: 0x9642002e  lhu         $v0, 0x2E($s2)
    ctx->pc = 0x1acc6cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 46)));
label_1acc70:
    // 0x1acc70: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x1acc70u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1acc74:
    // 0x1acc74: 0xa642002e  sh          $v0, 0x2E($s2)
    ctx->pc = 0x1acc74u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 46), (uint16_t)GPR_U32(ctx, 2));
label_1acc78:
    // 0x1acc78: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1acc78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_1acc7c:
    // 0x1acc7c: 0x96830004  lhu         $v1, 0x4($s4)
    ctx->pc = 0x1acc7cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_1acc80:
    // 0x1acc80: 0x9482002e  lhu         $v0, 0x2E($a0)
    ctx->pc = 0x1acc80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 46)));
label_1acc84:
    // 0x1acc84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1acc88:
    // 0x1acc88: 0xa482002e  sh          $v0, 0x2E($a0)
    ctx->pc = 0x1acc88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 46), (uint16_t)GPR_U32(ctx, 2));
label_1acc8c:
    // 0x1acc8c: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1acc8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1acc90:
    // 0x1acc90: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1acc90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1acc94:
    // 0x1acc94: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1acc94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1acc98:
    // 0x1acc98: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1acc98u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1acc9c:
    // 0x1acc9c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1acc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1acca0:
    // 0x1acca0: 0x3e00008  jr          $ra
label_1acca4:
    if (ctx->pc == 0x1ACCA4u) {
        ctx->pc = 0x1ACCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCA0u;
        // 0x1acca4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1ACCA8u;
        goto label_fallthrough_0x1acca0;
    }
    ctx->pc = 0x1ACCA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ACCA0u;
        // 0x1acca4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ACCA0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1acca0:
    ctx->pc = 0x1ACCA8u;
}
