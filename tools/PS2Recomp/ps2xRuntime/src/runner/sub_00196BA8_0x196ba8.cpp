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

// Function: sub_00196BA8
// Address: 0x196ba8 - 0x196c70
void sub_00196BA8_0x196ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00196BA8_0x196ba8");
#endif

    switch (ctx->pc) {
        case 0x196ba8u: goto label_196ba8;
        case 0x196bacu: goto label_196bac;
        case 0x196bb0u: goto label_196bb0;
        case 0x196bb4u: goto label_196bb4;
        case 0x196bb8u: goto label_196bb8;
        case 0x196bbcu: goto label_196bbc;
        case 0x196bc0u: goto label_196bc0;
        case 0x196bc4u: goto label_196bc4;
        case 0x196bc8u: goto label_196bc8;
        case 0x196bccu: goto label_196bcc;
        case 0x196bd0u: goto label_196bd0;
        case 0x196bd4u: goto label_196bd4;
        case 0x196bd8u: goto label_196bd8;
        case 0x196bdcu: goto label_196bdc;
        case 0x196be0u: goto label_196be0;
        case 0x196be4u: goto label_196be4;
        case 0x196be8u: goto label_196be8;
        case 0x196becu: goto label_196bec;
        case 0x196bf0u: goto label_196bf0;
        case 0x196bf4u: goto label_196bf4;
        case 0x196bf8u: goto label_196bf8;
        case 0x196bfcu: goto label_196bfc;
        case 0x196c00u: goto label_196c00;
        case 0x196c04u: goto label_196c04;
        case 0x196c08u: goto label_196c08;
        case 0x196c0cu: goto label_196c0c;
        case 0x196c10u: goto label_196c10;
        case 0x196c14u: goto label_196c14;
        case 0x196c18u: goto label_196c18;
        case 0x196c1cu: goto label_196c1c;
        case 0x196c20u: goto label_196c20;
        case 0x196c24u: goto label_196c24;
        case 0x196c28u: goto label_196c28;
        case 0x196c2cu: goto label_196c2c;
        case 0x196c30u: goto label_196c30;
        case 0x196c34u: goto label_196c34;
        case 0x196c38u: goto label_196c38;
        case 0x196c3cu: goto label_196c3c;
        case 0x196c40u: goto label_196c40;
        case 0x196c44u: goto label_196c44;
        case 0x196c48u: goto label_196c48;
        case 0x196c4cu: goto label_196c4c;
        case 0x196c50u: goto label_196c50;
        case 0x196c54u: goto label_196c54;
        case 0x196c58u: goto label_196c58;
        case 0x196c5cu: goto label_196c5c;
        case 0x196c60u: goto label_196c60;
        case 0x196c64u: goto label_196c64;
        case 0x196c68u: goto label_196c68;
        case 0x196c6cu: goto label_196c6c;
        default: break;
    }

    ctx->pc = 0x196ba8u;

label_196ba8:
    // 0x196ba8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x196ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_196bac:
    // 0x196bac: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x196bacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
label_196bb0:
    // 0x196bb0: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x196bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
label_196bb4:
    // 0x196bb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x196bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196bb8:
    // 0x196bb8: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x196bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_196bbc:
    // 0x196bbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x196bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_196bc0:
    // 0x196bc0: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x196bc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
label_196bc4:
    // 0x196bc4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x196bc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196bc8:
    // 0x196bc8: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x196bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
label_196bcc:
    // 0x196bcc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x196bccu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_196bd0:
    // 0x196bd0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x196bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
label_196bd4:
    // 0x196bd4: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x196bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
label_196bd8:
    // 0x196bd8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x196bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_196bdc:
    // 0x196bdc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196be0:
    // 0x196be0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_196be4:
    if (ctx->pc == 0x196BE4u) {
        ctx->pc = 0x196BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BE0u;
        // 0x196be4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196BE8u;
        goto label_196be8;
    }
    ctx->pc = 0x196BE0u;
    {
        const bool branch_taken_0x196be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x196BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196BE0u;
        // 0x196be4: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196be0) {
            ctx->pc = 0x196C40u;
            goto label_196c40;
        }
    }
    ctx->pc = 0x196BE8u;
label_196be8:
    // 0x196be8: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x196be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
label_196bec:
    // 0x196bec: 0x2456108c  addiu       $s6, $v0, 0x108C
    ctx->pc = 0x196becu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4236));
label_196bf0:
    // 0x196bf0: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x196bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_196bf4:
    // 0x196bf4: 0x0  nop
    ctx->pc = 0x196bf4u;
    // NOP
label_196bf8:
    // 0x196bf8: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x196bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_196bfc:
    // 0x196bfc: 0x8ec20024  lw          $v0, 0x24($s6)
    ctx->pc = 0x196bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 36)));
label_196c00:
    // 0x196c00: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x196c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_196c04:
    // 0x196c04: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x196c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_196c08:
    // 0x196c08: 0x8cb00000  lw          $s0, 0x0($a1)
    ctx->pc = 0x196c08u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_196c0c:
    // 0x196c0c: 0x40f809  jalr        $v0
label_196c10:
    if (ctx->pc == 0x196C10u) {
        ctx->pc = 0x196C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C0Cu;
        // 0x196c10: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C14u;
        goto label_196c14;
    }
    ctx->pc = 0x196C0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x196C14u);
        ctx->pc = 0x196C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C0Cu;
        // 0x196c10: 0x8e050014  lw          $a1, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196C0Cu, 0x196C14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x196C14u;
label_196c14:
    // 0x196c14: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_196c18:
    if (ctx->pc == 0x196C18u) {
        ctx->pc = 0x196C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C14u;
        // 0x196c18: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C1Cu;
        goto label_196c1c;
    }
    ctx->pc = 0x196C14u;
    {
        const bool branch_taken_0x196c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196c14) {
            ctx->pc = 0x196C18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196C14u;
            // 0x196c18: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196C30u;
            goto label_196c30;
        }
    }
    ctx->pc = 0x196C1Cu;
label_196c1c:
    // 0x196c1c: 0x16740003  bne         $s3, $s4, . + 4 + (0x3 << 2)
label_196c20:
    if (ctx->pc == 0x196C20u) {
        ctx->pc = 0x196C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C1Cu;
        // 0x196c20: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C24u;
        goto label_196c24;
    }
    ctx->pc = 0x196C1Cu;
    {
        const bool branch_taken_0x196c1c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 20));
        ctx->pc = 0x196C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C1Cu;
        // 0x196c20: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c1c) {
            ctx->pc = 0x196C2Cu;
            goto label_196c2c;
        }
    }
    ctx->pc = 0x196C24u;
label_196c24:
    // 0x196c24: 0x10000007  b           . + 4 + (0x7 << 2)
label_196c28:
    if (ctx->pc == 0x196C28u) {
        ctx->pc = 0x196C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C24u;
        // 0x196c28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C2Cu;
        goto label_196c2c;
    }
    ctx->pc = 0x196C24u;
    {
        const bool branch_taken_0x196c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x196C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C24u;
        // 0x196c28: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x196c24) {
            ctx->pc = 0x196C44u;
            goto label_196c44;
        }
    }
    ctx->pc = 0x196C2Cu;
label_196c2c:
    // 0x196c2c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x196c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_196c30:
    // 0x196c30: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x196c30u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_196c34:
    // 0x196c34: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x196c34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_196c38:
    // 0x196c38: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
label_196c3c:
    if (ctx->pc == 0x196C3Cu) {
        ctx->pc = 0x196C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C38u;
        // 0x196c3c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C40u;
        goto label_196c40;
    }
    ctx->pc = 0x196C38u;
    {
        const bool branch_taken_0x196c38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x196c38) {
            ctx->pc = 0x196C3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x196C38u;
            // 0x196c3c: 0x8e430004  lw          $v1, 0x4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x196BF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_196bf8;
        }
    }
    ctx->pc = 0x196C40u;
label_196c40:
    // 0x196c40: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x196c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_196c44:
    // 0x196c44: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x196c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_196c48:
    // 0x196c48: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x196c48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_196c4c:
    // 0x196c4c: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x196c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_196c50:
    // 0x196c50: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x196c50u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_196c54:
    // 0x196c54: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x196c54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_196c58:
    // 0x196c58: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x196c58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_196c5c:
    // 0x196c5c: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x196c5cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_196c60:
    // 0x196c60: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x196c60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_196c64:
    // 0x196c64: 0x3e00008  jr          $ra
label_196c68:
    if (ctx->pc == 0x196C68u) {
        ctx->pc = 0x196C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C64u;
        // 0x196c68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x196C6Cu;
        goto label_196c6c;
    }
    ctx->pc = 0x196C64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x196C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x196C64u;
        // 0x196c68: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x196C64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x196C6Cu;
label_196c6c:
    // 0x196c6c: 0x0  nop
    ctx->pc = 0x196c6cu;
    // NOP
    ctx->pc = 0x196c70u;
}
