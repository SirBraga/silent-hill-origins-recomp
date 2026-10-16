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

// Function: sub_001D80F8
// Address: 0x1d80f8 - 0x1d8158
void sub_001D80F8_0x1d80f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D80F8_0x1d80f8");
#endif

    switch (ctx->pc) {
        case 0x1d8130u: goto label_1d8130;
        case 0x1d8140u: goto label_1d8140;
        case 0x1d8148u: goto label_1d8148;
        default: break;
    }

    ctx->pc = 0x1d80f8u;

    // 0x1d80f8: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x1d80f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x1d80fc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d80fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d8100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d8100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d8104: 0x8c4588f8  lw          $a1, -0x7708($v0)
    ctx->pc = 0x1d8104u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x6F88F8u));
    // 0x1d8108: 0x8c831a70  lw          $v1, 0x1A70($a0)
    ctx->pc = 0x1d8108u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x701A70u));
    // 0x1d810c: 0x10a30008  beq         $a1, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D810Cu;
    {
        const bool branch_taken_0x1d810c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1D8110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D810Cu;
        // 0x1d8110: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d810c) {
            ctx->pc = 0x1D8130u;
            goto label_1d8130;
        }
    }
    ctx->pc = 0x1D8114u;
    // 0x1d8114: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d8114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d8118: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D8118u;
    {
        const bool branch_taken_0x1d8118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D8118u;
        // 0x1d811c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d8118) {
            ctx->pc = 0x1D8134u;
            goto label_1d8134;
        }
    }
    ctx->pc = 0x1D8120u;
    // 0x1d8120: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x1d8120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
    // 0x1d8124: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1d8124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8128: 0xc07fd18  jal         func_1FF460
    ctx->pc = 0x1D8128u;
    SET_GPR_U32(ctx, 31, 0x1D8130u);
    ctx->pc = 0x1D812Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8128u;
    // 0x1d812c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF460u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF460u, 0x1D8128u, 0x1D8130u)) {
        return;
    }
    ctx->pc = 0x1D8130u;
label_1d8130:
    // 0x1d8130: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1d8130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1d8134:
    // 0x1d8134: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d8134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d8138: 0xc0761c6  jal         func_1D8718
    ctx->pc = 0x1D8138u;
    SET_GPR_U32(ctx, 31, 0x1D8140u);
    ctx->pc = 0x1D813Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8138u;
    // 0x1d813c: 0xac409d8c  sw          $zero, -0x6274($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294942092), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8718u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8718u, 0x1D8138u, 0x1D8140u)) {
        return;
    }
    ctx->pc = 0x1D8140u;
label_1d8140:
    // 0x1d8140: 0xc075d82  jal         func_1D7608
    ctx->pc = 0x1D8140u;
    SET_GPR_U32(ctx, 31, 0x1D8148u);
    ctx->pc = 0x1D8144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D8140u;
    // 0x1d8144: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D7608u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D7608u, 0x1D8140u, 0x1D8148u)) {
        return;
    }
    ctx->pc = 0x1D8148u;
label_1d8148:
    // 0x1d8148: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d8148u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d814c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D814Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D8150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D814Cu;
        // 0x1d8150: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D814Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D8154u;
    // 0x1d8154: 0x0  nop
    ctx->pc = 0x1d8154u;
    // NOP
    ctx->pc = 0x1d8158u;
}
