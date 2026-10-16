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

// Function: sub_00113BA8
// Address: 0x113ba8 - 0x113c58
void sub_00113BA8_0x113ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00113BA8_0x113ba8");
#endif

    switch (ctx->pc) {
        case 0x113ba8u: goto label_113ba8;
        case 0x113bacu: goto label_113bac;
        case 0x113bb0u: goto label_113bb0;
        case 0x113bb4u: goto label_113bb4;
        case 0x113bb8u: goto label_113bb8;
        case 0x113bbcu: goto label_113bbc;
        case 0x113bc0u: goto label_113bc0;
        case 0x113bc4u: goto label_113bc4;
        case 0x113bc8u: goto label_113bc8;
        case 0x113bccu: goto label_113bcc;
        case 0x113bd0u: goto label_113bd0;
        case 0x113bd4u: goto label_113bd4;
        case 0x113bd8u: goto label_113bd8;
        case 0x113bdcu: goto label_113bdc;
        case 0x113be0u: goto label_113be0;
        case 0x113be4u: goto label_113be4;
        case 0x113be8u: goto label_113be8;
        case 0x113becu: goto label_113bec;
        case 0x113bf0u: goto label_113bf0;
        case 0x113bf4u: goto label_113bf4;
        case 0x113bf8u: goto label_113bf8;
        case 0x113bfcu: goto label_113bfc;
        case 0x113c00u: goto label_113c00;
        case 0x113c04u: goto label_113c04;
        case 0x113c08u: goto label_113c08;
        case 0x113c0cu: goto label_113c0c;
        case 0x113c10u: goto label_113c10;
        case 0x113c14u: goto label_113c14;
        case 0x113c18u: goto label_113c18;
        case 0x113c1cu: goto label_113c1c;
        case 0x113c20u: goto label_113c20;
        case 0x113c24u: goto label_113c24;
        case 0x113c28u: goto label_113c28;
        case 0x113c2cu: goto label_113c2c;
        case 0x113c30u: goto label_113c30;
        case 0x113c34u: goto label_113c34;
        case 0x113c38u: goto label_113c38;
        case 0x113c3cu: goto label_113c3c;
        case 0x113c40u: goto label_113c40;
        case 0x113c44u: goto label_113c44;
        case 0x113c48u: goto label_113c48;
        case 0x113c4cu: goto label_113c4c;
        case 0x113c50u: goto label_113c50;
        case 0x113c54u: goto label_113c54;
        default: break;
    }

    ctx->pc = 0x113ba8u;

label_113ba8:
    // 0x113ba8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x113ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_113bac:
    // 0x113bac: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x113bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_113bb0:
    // 0x113bb0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x113bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_113bb4:
    // 0x113bb4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x113bb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_113bb8:
    // 0x113bb8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x113bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_113bbc:
    // 0x113bbc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x113bbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_113bc0:
    // 0x113bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x113bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_113bc4:
    // 0x113bc4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x113bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_113bc8:
    // 0x113bc8: 0x1840001c  blez        $v0, . + 4 + (0x1C << 2)
label_113bcc:
    if (ctx->pc == 0x113BCCu) {
        ctx->pc = 0x113BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BC8u;
        // 0x113bcc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113BD0u;
        goto label_113bd0;
    }
    ctx->pc = 0x113BC8u;
    {
        const bool branch_taken_0x113bc8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x113BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BC8u;
        // 0x113bcc: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113bc8) {
            ctx->pc = 0x113C3Cu;
            goto label_113c3c;
        }
    }
    ctx->pc = 0x113BD0u;
label_113bd0:
    // 0x113bd0: 0x260300d8  addiu       $v1, $s0, 0xD8
    ctx->pc = 0x113bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 216));
label_113bd4:
    // 0x113bd4: 0x0  nop
    ctx->pc = 0x113bd4u;
    // NOP
label_113bd8:
    // 0x113bd8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x113bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_113bdc:
    // 0x113bdc: 0x56420013  bnel        $s2, $v0, . + 4 + (0x13 << 2)
label_113be0:
    if (ctx->pc == 0x113BE0u) {
        ctx->pc = 0x113BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BDCu;
        // 0x113be0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113BE4u;
        goto label_113be4;
    }
    ctx->pc = 0x113BDCu;
    {
        const bool branch_taken_0x113bdc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x113bdc) {
            ctx->pc = 0x113BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x113BDCu;
            // 0x113be0: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x113C2Cu;
            goto label_113c2c;
        }
    }
    ctx->pc = 0x113BE4u;
label_113be4:
    // 0x113be4: 0x260401a8  addiu       $a0, $s0, 0x1A8
    ctx->pc = 0x113be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 424));
label_113be8:
    // 0x113be8: 0xc044ff2  jal         func_113FC8
label_113bec:
    if (ctx->pc == 0x113BECu) {
        ctx->pc = 0x113BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BE8u;
        // 0x113bec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113BF0u;
        goto label_113bf0;
    }
    ctx->pc = 0x113BE8u;
    SET_GPR_U32(ctx, 31, 0x113BF0u);
    ctx->pc = 0x113BECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BE8u;
    // 0x113bec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x113FC8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x113FC8u, 0x113BE8u, 0x113BF0u)) {
        return;
    }
    ctx->pc = 0x113BF0u;
label_113bf0:
    // 0x113bf0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x113bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_113bf4:
    // 0x113bf4: 0xc0808f0  jal         func_2023C0
label_113bf8:
    if (ctx->pc == 0x113BF8u) {
        ctx->pc = 0x113BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113BF4u;
        // 0x113bf8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113BFCu;
        goto label_113bfc;
    }
    ctx->pc = 0x113BF4u;
    SET_GPR_U32(ctx, 31, 0x113BFCu);
    ctx->pc = 0x113BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113BF4u;
    // 0x113bf8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x113BF4u, 0x113BFCu)) {
        return;
    }
    ctx->pc = 0x113BFCu;
label_113bfc:
    // 0x113bfc: 0x8e0301a8  lw          $v1, 0x1A8($s0)
    ctx->pc = 0x113bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_113c00:
    // 0x113c00: 0xae0201a8  sw          $v0, 0x1A8($s0)
    ctx->pc = 0x113c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 2));
label_113c04:
    // 0x113c04: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x113c04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
label_113c08:
    // 0x113c08: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x113c08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_113c0c:
    // 0x113c0c: 0xac520000  sw          $s2, 0x0($v0)
    ctx->pc = 0x113c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
label_113c10:
    // 0x113c10: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x113c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_113c14:
    // 0x113c14: 0x84440058  lh          $a0, 0x58($v0)
    ctx->pc = 0x113c14u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
label_113c18:
    // 0x113c18: 0x8c43005c  lw          $v1, 0x5C($v0)
    ctx->pc = 0x113c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 92)));
label_113c1c:
    // 0x113c1c: 0x60f809  jalr        $v1
label_113c20:
    if (ctx->pc == 0x113C20u) {
        ctx->pc = 0x113C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C1Cu;
        // 0x113c20: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113C24u;
        goto label_113c24;
    }
    ctx->pc = 0x113C1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x113C24u);
        ctx->pc = 0x113C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C1Cu;
        // 0x113c20: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113C1Cu, 0x113C24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x113C24u;
label_113c24:
    // 0x113c24: 0x10000006  b           . + 4 + (0x6 << 2)
label_113c28:
    if (ctx->pc == 0x113C28u) {
        ctx->pc = 0x113C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C24u;
        // 0x113c28: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113C2Cu;
        goto label_113c2c;
    }
    ctx->pc = 0x113C24u;
    {
        const bool branch_taken_0x113c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C24u;
        // 0x113c28: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c24) {
            ctx->pc = 0x113C40u;
            goto label_113c40;
        }
    }
    ctx->pc = 0x113C2Cu;
label_113c2c:
    // 0x113c2c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x113c2cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_113c30:
    // 0x113c30: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x113c30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_113c34:
    // 0x113c34: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_113c38:
    if (ctx->pc == 0x113C38u) {
        ctx->pc = 0x113C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C34u;
        // 0x113c38: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113C3Cu;
        goto label_113c3c;
    }
    ctx->pc = 0x113C34u;
    {
        const bool branch_taken_0x113c34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C34u;
        // 0x113c38: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c34) {
            ctx->pc = 0x113BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_113bd8;
        }
    }
    ctx->pc = 0x113C3Cu;
label_113c3c:
    // 0x113c3c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x113c3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_113c40:
    // 0x113c40: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x113c40u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_113c44:
    // 0x113c44: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x113c44u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_113c48:
    // 0x113c48: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x113c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_113c4c:
    // 0x113c4c: 0x3e00008  jr          $ra
label_113c50:
    if (ctx->pc == 0x113C50u) {
        ctx->pc = 0x113C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C4Cu;
        // 0x113c50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x113C54u;
        goto label_113c54;
    }
    ctx->pc = 0x113C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x113C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C4Cu;
        // 0x113c50: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x113C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x113C54u;
label_113c54:
    // 0x113c54: 0x0  nop
    ctx->pc = 0x113c54u;
    // NOP
    ctx->pc = 0x113c58u;
}
