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

// Function: sub_001C3BA8
// Address: 0x1c3ba8 - 0x1c3c18
void sub_001C3BA8_0x1c3ba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C3BA8_0x1c3ba8");
#endif

    switch (ctx->pc) {
        case 0x1c3bdcu: goto label_1c3bdc;
        case 0x1c3bf4u: goto label_1c3bf4;
        case 0x1c3c04u: goto label_1c3c04;
        default: break;
    }

    ctx->pc = 0x1c3ba8u;

    // 0x1c3ba8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c3ba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c3bac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1c3bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1c3bb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1c3bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x1c3bb4: 0x2442e2c8  addiu       $v0, $v0, -0x1D38
    ctx->pc = 0x1c3bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959816));
    // 0x1c3bb8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c3bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c3bbc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c3bbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c3bc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c3bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c3bc4: 0xae020258  sw          $v0, 0x258($s0)
    ctx->pc = 0x1c3bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 600), GPR_U32(ctx, 2));
    // 0x1c3bc8: 0x8e040264  lw          $a0, 0x264($s0)
    ctx->pc = 0x1c3bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 612)));
    // 0x1c3bcc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C3BCCu;
    {
        const bool branch_taken_0x1c3bcc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C3BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3BCCu;
        // 0x1c3bd0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c3bcc) {
            ctx->pc = 0x1C3BE0u;
            goto label_1c3be0;
        }
    }
    ctx->pc = 0x1C3BD4u;
    // 0x1c3bd4: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1C3BD4u;
    SET_GPR_U32(ctx, 31, 0x1C3BDCu);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1C3BD4u, 0x1C3BDCu)) {
        return;
    }
    ctx->pc = 0x1C3BDCu;
label_1c3bdc:
    // 0x1c3bdc: 0xae000264  sw          $zero, 0x264($s0)
    ctx->pc = 0x1c3bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 612), GPR_U32(ctx, 0));
label_1c3be0:
    // 0x1c3be0: 0x8e040268  lw          $a0, 0x268($s0)
    ctx->pc = 0x1c3be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 616)));
    // 0x1c3be4: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1C3BE4u;
    {
        const bool branch_taken_0x1c3be4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c3be4) {
            ctx->pc = 0x1C3BE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1C3BE4u;
            // 0x1c3be8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1C3BFCu;
            goto label_1c3bfc;
        }
    }
    ctx->pc = 0x1C3BECu;
    // 0x1c3bec: 0xc0808d4  jal         func_202350
    ctx->pc = 0x1C3BECu;
    SET_GPR_U32(ctx, 31, 0x1C3BF4u);
    ctx->pc = 0x202350u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202350u, 0x1C3BECu, 0x1C3BF4u)) {
        return;
    }
    ctx->pc = 0x1C3BF4u;
label_1c3bf4:
    // 0x1c3bf4: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1c3bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1c3bf8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c3bf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c3bfc:
    // 0x1c3bfc: 0xc06bba8  jal         func_1AEEA0
    ctx->pc = 0x1C3BFCu;
    SET_GPR_U32(ctx, 31, 0x1C3C04u);
    ctx->pc = 0x1C3C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1C3BFCu;
    // 0x1c3c00: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEEA0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEEA0u, 0x1C3BFCu, 0x1C3C04u)) {
        return;
    }
    ctx->pc = 0x1C3C04u;
label_1c3c04:
    // 0x1c3c04: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1c3c04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3c08: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c3c08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c3c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c3c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c3c10: 0x3e00008  jr          $ra
    ctx->pc = 0x1C3C10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1C3C10u;
        // 0x1c3c14: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C3C10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C3C18u;
}
