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

// Function: sub_0019BBE8
// Address: 0x19bbe8 - 0x19bc60
void sub_0019BBE8_0x19bbe8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BBE8_0x19bbe8");
#endif

    switch (ctx->pc) {
        case 0x19bc1cu: goto label_19bc1c;
        case 0x19bc4cu: goto label_19bc4c;
        default: break;
    }

    ctx->pc = 0x19bbe8u;

    // 0x19bbe8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x19bbe8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x19bbec: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x19bbecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x19bbf0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x19bbf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x19bbf4: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x19bbf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x19bbf8: 0x10600014  beqz        $v1, . + 4 + (0x14 << 2)
    ctx->pc = 0x19BBF8u;
    {
        const bool branch_taken_0x19bbf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BBF8u;
        // 0x19bbfc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bbf8) {
            ctx->pc = 0x19BC4Cu;
            goto label_19bc4c;
        }
    }
    ctx->pc = 0x19BC00u;
    // 0x19bc00: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x19bc00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x19bc04: 0x8e020094  lw          $v0, 0x94($s0)
    ctx->pc = 0x19bc04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
    // 0x19bc08: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x19BC08u;
    {
        const bool branch_taken_0x19bc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bc08) {
            ctx->pc = 0x19BC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19BC08u;
            // 0x19bc0c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19BC50u;
            goto label_19bc50;
        }
    }
    ctx->pc = 0x19BC10u;
    // 0x19bc10: 0x8e040040  lw          $a0, 0x40($s0)
    ctx->pc = 0x19bc10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x19bc14: 0xc0b879c  jal         func_2E1E70
    ctx->pc = 0x19BC14u;
    SET_GPR_U32(ctx, 31, 0x19BC1Cu);
    ctx->pc = 0x19BC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC14u;
    // 0x19bc18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E1E70u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2E1E70u, 0x19BC14u, 0x19BC1Cu)) {
        return;
    }
    ctx->pc = 0x19BC1Cu;
label_19bc1c:
    // 0x19bc1c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x19bc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x19bc20: 0x8e04005c  lw          $a0, 0x5C($s0)
    ctx->pc = 0x19bc20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
    // 0x19bc24: 0x8c431a70  lw          $v1, 0x1A70($v0)
    ctx->pc = 0x19bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x19bc28: 0x10830009  beq         $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x19BC28u;
    {
        const bool branch_taken_0x19bc28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x19BC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC28u;
        // 0x19bc2c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc28) {
            ctx->pc = 0x19BC50u;
            goto label_19bc50;
        }
    }
    ctx->pc = 0x19BC30u;
    // 0x19bc30: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x19bc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x19bc34: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x19BC34u;
    {
        const bool branch_taken_0x19bc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC34u;
        // 0x19bc38: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc34) {
            ctx->pc = 0x19BC54u;
            goto label_19bc54;
        }
    }
    ctx->pc = 0x19BC3Cu;
    // 0x19bc3c: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x19bc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x19bc40: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x19bc40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc44: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x19BC44u;
    SET_GPR_U32(ctx, 31, 0x19BC4Cu);
    ctx->pc = 0x19BC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BC44u;
    // 0x19bc48: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x19BC44u, 0x19BC4Cu)) {
        return;
    }
    ctx->pc = 0x19BC4Cu;
label_19bc4c:
    // 0x19bc4c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x19bc4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19bc50:
    // 0x19bc50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19bc50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_19bc54:
    // 0x19bc54: 0x3e00008  jr          $ra
    ctx->pc = 0x19BC54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BC54u;
        // 0x19bc58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BC54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BC5Cu;
    // 0x19bc5c: 0x0  nop
    ctx->pc = 0x19bc5cu;
    // NOP
    ctx->pc = 0x19bc60u;
}
