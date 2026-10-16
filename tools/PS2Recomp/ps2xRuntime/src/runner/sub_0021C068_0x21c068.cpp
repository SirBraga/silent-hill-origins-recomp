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

// Function: sub_0021C068
// Address: 0x21c068 - 0x21c0e0
void sub_0021C068_0x21c068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021C068_0x21c068");
#endif

    switch (ctx->pc) {
        case 0x21c068u: goto label_21c068;
        case 0x21c06cu: goto label_21c06c;
        case 0x21c070u: goto label_21c070;
        case 0x21c074u: goto label_21c074;
        case 0x21c078u: goto label_21c078;
        case 0x21c07cu: goto label_21c07c;
        case 0x21c080u: goto label_21c080;
        case 0x21c084u: goto label_21c084;
        case 0x21c088u: goto label_21c088;
        case 0x21c08cu: goto label_21c08c;
        case 0x21c090u: goto label_21c090;
        case 0x21c094u: goto label_21c094;
        case 0x21c098u: goto label_21c098;
        case 0x21c09cu: goto label_21c09c;
        case 0x21c0a0u: goto label_21c0a0;
        case 0x21c0a4u: goto label_21c0a4;
        case 0x21c0a8u: goto label_21c0a8;
        case 0x21c0acu: goto label_21c0ac;
        case 0x21c0b0u: goto label_21c0b0;
        case 0x21c0b4u: goto label_21c0b4;
        case 0x21c0b8u: goto label_21c0b8;
        case 0x21c0bcu: goto label_21c0bc;
        case 0x21c0c0u: goto label_21c0c0;
        case 0x21c0c4u: goto label_21c0c4;
        case 0x21c0c8u: goto label_21c0c8;
        case 0x21c0ccu: goto label_21c0cc;
        case 0x21c0d0u: goto label_21c0d0;
        case 0x21c0d4u: goto label_21c0d4;
        case 0x21c0d8u: goto label_21c0d8;
        case 0x21c0dcu: goto label_21c0dc;
        default: break;
    }

    ctx->pc = 0x21c068u;

label_21c068:
    // 0x21c068: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21c068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_21c06c:
    // 0x21c06c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21c06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_21c070:
    // 0x21c070: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21c070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_21c074:
    // 0x21c074: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x21c074u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21c078:
    // 0x21c078: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21c078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21c07c:
    // 0x21c07c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x21c07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_21c080:
    // 0x21c080: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_21c084:
    if (ctx->pc == 0x21C084u) {
        ctx->pc = 0x21C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C080u;
        // 0x21c084: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C088u;
        goto label_21c088;
    }
    ctx->pc = 0x21C080u;
    {
        const bool branch_taken_0x21c080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C080u;
        // 0x21c084: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c080) {
            ctx->pc = 0x21C0C8u;
            goto label_21c0c8;
        }
    }
    ctx->pc = 0x21C088u;
label_21c088:
    // 0x21c088: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x21c088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_21c08c:
    // 0x21c08c: 0x0  nop
    ctx->pc = 0x21c08cu;
    // NOP
label_21c090:
    // 0x21c090: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x21c090u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21c094:
    // 0x21c094: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x21c094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_21c098:
    // 0x21c098: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x21c098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_21c09c:
    // 0x21c09c: 0x40f809  jalr        $v0
label_21c0a0:
    if (ctx->pc == 0x21C0A0u) {
        ctx->pc = 0x21C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C09Cu;
        // 0x21c0a0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C0A4u;
        goto label_21c0a4;
    }
    ctx->pc = 0x21C09Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x21C0A4u);
        ctx->pc = 0x21C0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C09Cu;
        // 0x21c0a0: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C09Cu, 0x21C0A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21C0A4u;
label_21c0a4:
    // 0x21c0a4: 0x5e00fffa  bgtzl       $s0, . + 4 + (-0x6 << 2)
label_21c0a8:
    if (ctx->pc == 0x21C0A8u) {
        ctx->pc = 0x21C0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0A4u;
        // 0x21c0a8: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C0ACu;
        goto label_21c0ac;
    }
    ctx->pc = 0x21C0A4u;
    {
        const bool branch_taken_0x21c0a4 = (GPR_S64(ctx, 16) > 0);
        if (branch_taken_0x21c0a4) {
            ctx->pc = 0x21C0A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21C0A4u;
            // 0x21c0a8: 0x8e230004  lw          $v1, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21C090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21c090;
        }
    }
    ctx->pc = 0x21C0ACu;
label_21c0ac:
    // 0x21c0ac: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x21c0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_21c0b0:
    // 0x21c0b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_21c0b4:
    if (ctx->pc == 0x21C0B4u) {
        ctx->pc = 0x21C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0B0u;
        // 0x21c0b4: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C0B8u;
        goto label_21c0b8;
    }
    ctx->pc = 0x21C0B0u;
    {
        const bool branch_taken_0x21c0b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C0B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0B0u;
        // 0x21c0b4: 0x240200c8  addiu       $v0, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c0b0) {
            ctx->pc = 0x21C0C0u;
            goto label_21c0c0;
        }
    }
    ctx->pc = 0x21C0B8u;
label_21c0b8:
    // 0x21c0b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_21c0bc:
    if (ctx->pc == 0x21C0BCu) {
        ctx->pc = 0x21C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0B8u;
        // 0x21c0bc: 0xae200130  sw          $zero, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C0C0u;
        goto label_21c0c0;
    }
    ctx->pc = 0x21C0B8u;
    {
        const bool branch_taken_0x21c0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21C0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0B8u;
        // 0x21c0bc: 0xae200130  sw          $zero, 0x130($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 304), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21c0b8) {
            ctx->pc = 0x21C0C4u;
            goto label_21c0c4;
        }
    }
    ctx->pc = 0x21C0C0u;
label_21c0c0:
    // 0x21c0c0: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x21c0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_21c0c4:
    // 0x21c0c4: 0xae220014  sw          $v0, 0x14($s1)
    ctx->pc = 0x21c0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
label_21c0c8:
    // 0x21c0c8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21c0c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21c0cc:
    // 0x21c0cc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21c0ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21c0d0:
    // 0x21c0d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21c0d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21c0d4:
    // 0x21c0d4: 0x3e00008  jr          $ra
label_21c0d8:
    if (ctx->pc == 0x21C0D8u) {
        ctx->pc = 0x21C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0D4u;
        // 0x21c0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21C0DCu;
        goto label_21c0dc;
    }
    ctx->pc = 0x21C0D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21C0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21C0D4u;
        // 0x21c0d8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C0D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C0DCu;
label_21c0dc:
    // 0x21c0dc: 0x0  nop
    ctx->pc = 0x21c0dcu;
    // NOP
    ctx->pc = 0x21c0e0u;
}
