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

// Function: sub_0016BC10
// Address: 0x16bc10 - 0x16bc90
void sub_0016BC10_0x16bc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016BC10_0x16bc10");
#endif

    switch (ctx->pc) {
        case 0x16bc40u: goto label_16bc40;
        case 0x16bc4cu: goto label_16bc4c;
        case 0x16bc78u: goto label_16bc78;
        default: break;
    }

    ctx->pc = 0x16bc10u;

    // 0x16bc10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x16bc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x16bc14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x16bc14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x16bc18: 0x3c110034  lui         $s1, 0x34
    ctx->pc = 0x16bc18u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)52 << 16));
    // 0x16bc1c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16bc1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x16bc20: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16bc20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16bc24: 0x8e229168  lw          $v0, -0x6E98($s1)
    ctx->pc = 0x16bc24u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x339168u));
    // 0x16bc28: 0x8c430150  lw          $v1, 0x150($v0)
    ctx->pc = 0x16bc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 336)));
    // 0x16bc2c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x16BC2Cu;
    {
        const bool branch_taken_0x16bc2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x16BC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC2Cu;
        // 0x16bc30: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc2c) {
            ctx->pc = 0x16BC78u;
            goto label_16bc78;
        }
    }
    ctx->pc = 0x16BC34u;
    // 0x16bc34: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x16bc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x16bc38: 0xc07becc  jal         func_1EFB30
    ctx->pc = 0x16BC38u;
    SET_GPR_U32(ctx, 31, 0x16BC40u);
    ctx->pc = 0x16BC3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC38u;
    // 0x16bc3c: 0x8c444120  lw          $a0, 0x4120($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16672)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EFB30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EFB30u, 0x16BC38u, 0x16BC40u)) {
        return;
    }
    ctx->pc = 0x16BC40u;
label_16bc40:
    // 0x16bc40: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x16bc40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x16bc44: 0xc06037e  jal         func_180DF8
    ctx->pc = 0x16BC44u;
    SET_GPR_U32(ctx, 31, 0x16BC4Cu);
    ctx->pc = 0x16BC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC44u;
    // 0x16bc48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180DF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180DF8u, 0x16BC44u, 0x16BC4Cu)) {
        return;
    }
    ctx->pc = 0x16BC4Cu;
label_16bc4c:
    // 0x16bc4c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x16bc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
    // 0x16bc50: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16BC50u;
    {
        const bool branch_taken_0x16bc50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x16BC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC50u;
        // 0x16bc54: 0xae020070  sw          $v0, 0x70($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16bc50) {
            ctx->pc = 0x16BC64u;
            goto label_16bc64;
        }
    }
    ctx->pc = 0x16BC58u;
    // 0x16bc58: 0x8e239168  lw          $v1, -0x6E98($s1)
    ctx->pc = 0x16bc58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294938984)));
    // 0x16bc5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16bc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16bc60: 0xac620248  sw          $v0, 0x248($v1)
    ctx->pc = 0x16bc60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 584), GPR_U32(ctx, 2));
label_16bc64:
    // 0x16bc64: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x16bc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x16bc68: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x16BC68u;
    {
        const bool branch_taken_0x16bc68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x16bc68) {
            ctx->pc = 0x16BC6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x16BC68u;
            // 0x16bc6c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x16BC80u;
            goto label_16bc80;
        }
    }
    ctx->pc = 0x16BC70u;
    // 0x16bc70: 0xc05adfc  jal         func_16B7F0
    ctx->pc = 0x16BC70u;
    SET_GPR_U32(ctx, 31, 0x16BC78u);
    ctx->pc = 0x16BC74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16BC70u;
    // 0x16bc74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x16B7F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x16B7F0u, 0x16BC70u, 0x16BC78u)) {
        return;
    }
    ctx->pc = 0x16BC78u;
label_16bc78:
    // 0x16bc78: 0x8e020070  lw          $v0, 0x70($s0)
    ctx->pc = 0x16bc78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
    // 0x16bc7c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16bc7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16bc80:
    // 0x16bc80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x16bc80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16bc84: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16bc84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16bc88: 0x3e00008  jr          $ra
    ctx->pc = 0x16BC88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16BC8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16BC88u;
        // 0x16bc8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16BC88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16BC90u;
}
