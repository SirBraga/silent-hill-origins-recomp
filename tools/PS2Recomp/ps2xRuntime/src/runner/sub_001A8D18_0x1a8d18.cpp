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

// Function: sub_001A8D18
// Address: 0x1a8d18 - 0x1a8e28
void sub_001A8D18_0x1a8d18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A8D18_0x1a8d18");
#endif

    switch (ctx->pc) {
        case 0x1a8d18u: goto label_1a8d18;
        case 0x1a8d1cu: goto label_1a8d1c;
        case 0x1a8d20u: goto label_1a8d20;
        case 0x1a8d24u: goto label_1a8d24;
        case 0x1a8d28u: goto label_1a8d28;
        case 0x1a8d2cu: goto label_1a8d2c;
        case 0x1a8d30u: goto label_1a8d30;
        case 0x1a8d34u: goto label_1a8d34;
        case 0x1a8d38u: goto label_1a8d38;
        case 0x1a8d3cu: goto label_1a8d3c;
        case 0x1a8d40u: goto label_1a8d40;
        case 0x1a8d44u: goto label_1a8d44;
        case 0x1a8d48u: goto label_1a8d48;
        case 0x1a8d4cu: goto label_1a8d4c;
        case 0x1a8d50u: goto label_1a8d50;
        case 0x1a8d54u: goto label_1a8d54;
        case 0x1a8d58u: goto label_1a8d58;
        case 0x1a8d5cu: goto label_1a8d5c;
        case 0x1a8d60u: goto label_1a8d60;
        case 0x1a8d64u: goto label_1a8d64;
        case 0x1a8d68u: goto label_1a8d68;
        case 0x1a8d6cu: goto label_1a8d6c;
        case 0x1a8d70u: goto label_1a8d70;
        case 0x1a8d74u: goto label_1a8d74;
        case 0x1a8d78u: goto label_1a8d78;
        case 0x1a8d7cu: goto label_1a8d7c;
        case 0x1a8d80u: goto label_1a8d80;
        case 0x1a8d84u: goto label_1a8d84;
        case 0x1a8d88u: goto label_1a8d88;
        case 0x1a8d8cu: goto label_1a8d8c;
        case 0x1a8d90u: goto label_1a8d90;
        case 0x1a8d94u: goto label_1a8d94;
        case 0x1a8d98u: goto label_1a8d98;
        case 0x1a8d9cu: goto label_1a8d9c;
        case 0x1a8da0u: goto label_1a8da0;
        case 0x1a8da4u: goto label_1a8da4;
        case 0x1a8da8u: goto label_1a8da8;
        case 0x1a8dacu: goto label_1a8dac;
        case 0x1a8db0u: goto label_1a8db0;
        case 0x1a8db4u: goto label_1a8db4;
        case 0x1a8db8u: goto label_1a8db8;
        case 0x1a8dbcu: goto label_1a8dbc;
        case 0x1a8dc0u: goto label_1a8dc0;
        case 0x1a8dc4u: goto label_1a8dc4;
        case 0x1a8dc8u: goto label_1a8dc8;
        case 0x1a8dccu: goto label_1a8dcc;
        case 0x1a8dd0u: goto label_1a8dd0;
        case 0x1a8dd4u: goto label_1a8dd4;
        case 0x1a8dd8u: goto label_1a8dd8;
        case 0x1a8ddcu: goto label_1a8ddc;
        case 0x1a8de0u: goto label_1a8de0;
        case 0x1a8de4u: goto label_1a8de4;
        case 0x1a8de8u: goto label_1a8de8;
        case 0x1a8decu: goto label_1a8dec;
        case 0x1a8df0u: goto label_1a8df0;
        case 0x1a8df4u: goto label_1a8df4;
        case 0x1a8df8u: goto label_1a8df8;
        case 0x1a8dfcu: goto label_1a8dfc;
        case 0x1a8e00u: goto label_1a8e00;
        case 0x1a8e04u: goto label_1a8e04;
        case 0x1a8e08u: goto label_1a8e08;
        case 0x1a8e0cu: goto label_1a8e0c;
        case 0x1a8e10u: goto label_1a8e10;
        case 0x1a8e14u: goto label_1a8e14;
        case 0x1a8e18u: goto label_1a8e18;
        case 0x1a8e1cu: goto label_1a8e1c;
        case 0x1a8e20u: goto label_1a8e20;
        case 0x1a8e24u: goto label_1a8e24;
        default: break;
    }

    ctx->pc = 0x1a8d18u;

label_1a8d18:
    // 0x1a8d18: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a8d18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a8d1c:
    // 0x1a8d1c: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a8d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1a8d20:
    // 0x1a8d20: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a8d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
label_1a8d24:
    // 0x1a8d24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a8d24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d28:
    // 0x1a8d28: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a8d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1a8d2c:
    // 0x1a8d2c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a8d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1a8d30:
    // 0x1a8d30: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a8d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_1a8d34:
    // 0x1a8d34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a8d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1a8d38:
    // 0x1a8d38: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1a8d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1a8d3c:
    // 0x1a8d3c: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_1a8d40:
    if (ctx->pc == 0x1A8D40u) {
        ctx->pc = 0x1A8D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D3Cu;
        // 0x1a8d40: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D44u;
        goto label_1a8d44;
    }
    ctx->pc = 0x1A8D3Cu;
    {
        const bool branch_taken_0x1a8d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D3Cu;
        // 0x1a8d40: 0xa0a02d  daddu       $s4, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d3c) {
            ctx->pc = 0x1A8E04u;
            goto label_1a8e04;
        }
    }
    ctx->pc = 0x1A8D44u;
label_1a8d44:
    // 0x1a8d44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a8d44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d48:
    // 0x1a8d48: 0x10000020  b           . + 4 + (0x20 << 2)
label_1a8d4c:
    if (ctx->pc == 0x1A8D4Cu) {
        ctx->pc = 0x1A8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D48u;
        // 0x1a8d4c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D50u;
        goto label_1a8d50;
    }
    ctx->pc = 0x1A8D48u;
    {
        const bool branch_taken_0x1a8d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D48u;
        // 0x1a8d4c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d48) {
            ctx->pc = 0x1A8DCCu;
            goto label_1a8dcc;
        }
    }
    ctx->pc = 0x1A8D50u;
label_1a8d50:
    // 0x1a8d50: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a8d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a8d54:
    // 0x1a8d54: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1a8d54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1a8d58:
    // 0x1a8d58: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1a8d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1a8d5c:
    // 0x1a8d5c: 0x40f809  jalr        $v0
label_1a8d60:
    if (ctx->pc == 0x1A8D60u) {
        ctx->pc = 0x1A8D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D5Cu;
        // 0x1a8d60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D64u;
        goto label_1a8d64;
    }
    ctx->pc = 0x1A8D5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8D64u);
        ctx->pc = 0x1A8D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D5Cu;
        // 0x1a8d60: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8D5Cu, 0x1A8D64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8D64u;
label_1a8d64:
    // 0x1a8d64: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1a8d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1a8d68:
    // 0x1a8d68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1a8d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d6c:
    // 0x1a8d6c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a8d6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a8d70:
    // 0x1a8d70: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1a8d70u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1a8d74:
    // 0x1a8d74: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1a8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1a8d78:
    // 0x1a8d78: 0x40f809  jalr        $v0
label_1a8d7c:
    if (ctx->pc == 0x1A8D7Cu) {
        ctx->pc = 0x1A8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D78u;
        // 0x1a8d7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D80u;
        goto label_1a8d80;
    }
    ctx->pc = 0x1A8D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8D80u);
        ctx->pc = 0x1A8D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D78u;
        // 0x1a8d7c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8D78u, 0x1A8D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8D80u;
label_1a8d80:
    // 0x1a8d80: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1a8d84:
    if (ctx->pc == 0x1A8D84u) {
        ctx->pc = 0x1A8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D80u;
        // 0x1a8d84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D88u;
        goto label_1a8d88;
    }
    ctx->pc = 0x1A8D80u;
    {
        const bool branch_taken_0x1a8d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D80u;
        // 0x1a8d84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d80) {
            ctx->pc = 0x1A8DB4u;
            goto label_1a8db4;
        }
    }
    ctx->pc = 0x1A8D88u;
label_1a8d88:
    // 0x1a8d88: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x1a8d88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1a8d8c:
    // 0x1a8d8c: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1a8d8cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1a8d90:
    // 0x1a8d90: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1a8d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1a8d94:
    // 0x1a8d94: 0x40f809  jalr        $v0
label_1a8d98:
    if (ctx->pc == 0x1A8D98u) {
        ctx->pc = 0x1A8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D94u;
        // 0x1a8d98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8D9Cu;
        goto label_1a8d9c;
    }
    ctx->pc = 0x1A8D94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8D9Cu);
        ctx->pc = 0x1A8D98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D94u;
        // 0x1a8d98: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8D94u, 0x1A8D9Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8D9Cu;
label_1a8d9c:
    // 0x1a8d9c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1a8da0:
    if (ctx->pc == 0x1A8DA0u) {
        ctx->pc = 0x1A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D9Cu;
        // 0x1a8da0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DA4u;
        goto label_1a8da4;
    }
    ctx->pc = 0x1A8D9Cu;
    {
        const bool branch_taken_0x1a8d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8D9Cu;
        // 0x1a8da0: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8d9c) {
            ctx->pc = 0x1A8DF8u;
            goto label_1a8df8;
        }
    }
    ctx->pc = 0x1A8DA4u;
label_1a8da4:
    // 0x1a8da4: 0xae120024  sw          $s2, 0x24($s0)
    ctx->pc = 0x1a8da4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 18));
label_1a8da8:
    // 0x1a8da8: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1a8da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1a8dac:
    // 0x1a8dac: 0x10000015  b           . + 4 + (0x15 << 2)
label_1a8db0:
    if (ctx->pc == 0x1A8DB0u) {
        ctx->pc = 0x1A8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DACu;
        // 0x1a8db0: 0xae120020  sw          $s2, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DB4u;
        goto label_1a8db4;
    }
    ctx->pc = 0x1A8DACu;
    {
        const bool branch_taken_0x1a8dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A8DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DACu;
        // 0x1a8db0: 0xae120020  sw          $s2, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a8dac) {
            ctx->pc = 0x1A8E04u;
            goto label_1a8e04;
        }
    }
    ctx->pc = 0x1A8DB4u;
label_1a8db4:
    // 0x1a8db4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1a8db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1a8db8:
    // 0x1a8db8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1a8db8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a8dbc:
    // 0x1a8dbc: 0x84440040  lh          $a0, 0x40($v0)
    ctx->pc = 0x1a8dbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 64)));
label_1a8dc0:
    // 0x1a8dc0: 0x8c430044  lw          $v1, 0x44($v0)
    ctx->pc = 0x1a8dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_1a8dc4:
    // 0x1a8dc4: 0x60f809  jalr        $v1
label_1a8dc8:
    if (ctx->pc == 0x1A8DC8u) {
        ctx->pc = 0x1A8DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DC4u;
        // 0x1a8dc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DCCu;
        goto label_1a8dcc;
    }
    ctx->pc = 0x1A8DC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A8DCCu);
        ctx->pc = 0x1A8DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DC4u;
        // 0x1a8dc8: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8DC4u, 0x1A8DCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8DCCu;
label_1a8dcc:
    // 0x1a8dcc: 0x274102b  sltu        $v0, $s3, $s4
    ctx->pc = 0x1a8dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_1a8dd0:
    // 0x1a8dd0: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_1a8dd4:
    if (ctx->pc == 0x1A8DD4u) {
        ctx->pc = 0x1A8DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DD0u;
        // 0x1a8dd4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DD8u;
        goto label_1a8dd8;
    }
    ctx->pc = 0x1A8DD0u;
    {
        const bool branch_taken_0x1a8dd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8dd0) {
            ctx->pc = 0x1A8DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8DD0u;
            // 0x1a8dd4: 0x7bb00050  lq          $s0, 0x50($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8E08u;
            goto label_1a8e08;
        }
    }
    ctx->pc = 0x1A8DD8u;
label_1a8dd8:
    // 0x1a8dd8: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x1a8dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1a8ddc:
    // 0x1a8ddc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1a8ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a8de0:
    // 0x1a8de0: 0x84640038  lh          $a0, 0x38($v1)
    ctx->pc = 0x1a8de0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 56)));
label_1a8de4:
    // 0x1a8de4: 0x8c62003c  lw          $v0, 0x3C($v1)
    ctx->pc = 0x1a8de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1a8de8:
    // 0x1a8de8: 0x40f809  jalr        $v0
label_1a8dec:
    if (ctx->pc == 0x1A8DECu) {
        ctx->pc = 0x1A8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DE8u;
        // 0x1a8dec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DF0u;
        goto label_1a8df0;
    }
    ctx->pc = 0x1A8DE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A8DF0u);
        ctx->pc = 0x1A8DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DE8u;
        // 0x1a8dec: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8DE8u, 0x1A8DF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A8DF0u;
label_1a8df0:
    // 0x1a8df0: 0x5040ffd7  beql        $v0, $zero, . + 4 + (-0x29 << 2)
label_1a8df4:
    if (ctx->pc == 0x1A8DF4u) {
        ctx->pc = 0x1A8DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8DF0u;
        // 0x1a8df4: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8DF8u;
        goto label_1a8df8;
    }
    ctx->pc = 0x1A8DF0u;
    {
        const bool branch_taken_0x1a8df0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a8df0) {
            ctx->pc = 0x1A8DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1A8DF0u;
            // 0x1a8df4: 0x8e050018  lw          $a1, 0x18($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1A8D50u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a8d50;
        }
    }
    ctx->pc = 0x1A8DF8u;
label_1a8df8:
    // 0x1a8df8: 0xae120020  sw          $s2, 0x20($s0)
    ctx->pc = 0x1a8df8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
label_1a8dfc:
    // 0x1a8dfc: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1a8dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1a8e00:
    // 0x1a8e00: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1a8e00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_1a8e04:
    // 0x1a8e04: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a8e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a8e08:
    // 0x1a8e08: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a8e08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a8e0c:
    // 0x1a8e0c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a8e0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a8e10:
    // 0x1a8e10: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a8e10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a8e14:
    // 0x1a8e14: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a8e14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a8e18:
    // 0x1a8e18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a8e18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a8e1c:
    // 0x1a8e1c: 0x3e00008  jr          $ra
label_1a8e20:
    if (ctx->pc == 0x1A8E20u) {
        ctx->pc = 0x1A8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E1Cu;
        // 0x1a8e20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A8E24u;
        goto label_1a8e24;
    }
    ctx->pc = 0x1A8E1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A8E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A8E1Cu;
        // 0x1a8e20: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A8E1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A8E24u;
label_1a8e24:
    // 0x1a8e24: 0x0  nop
    ctx->pc = 0x1a8e24u;
    // NOP
    ctx->pc = 0x1a8e28u;
}
