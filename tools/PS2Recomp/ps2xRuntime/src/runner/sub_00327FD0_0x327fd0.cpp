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

// Function: sub_00327FD0
// Address: 0x327fd0 - 0x328050
void sub_00327FD0_0x327fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327FD0_0x327fd0");
#endif

    switch (ctx->pc) {
        case 0x328000u: goto label_328000;
        case 0x328018u: goto label_328018;
        case 0x328028u: goto label_328028;
        default: break;
    }

    ctx->pc = 0x327fd0u;

    // 0x327fd0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x327fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x327fd4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x327fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x327fd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x327fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x327fdc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x327fdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327fe0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x327fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x327fe4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x327fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327fe8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327fe8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327fec: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x327fecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x327ff0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x327ff0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x327ff4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x327ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x327ff8: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x327FF8u;
    SET_GPR_U32(ctx, 31, 0x328000u);
    ctx->pc = 0x327FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x327FF8u;
    // 0x327ffc: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x327FF8u, 0x328000u)) {
        return;
    }
    ctx->pc = 0x328000u;
label_328000:
    // 0x328000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x328000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328004: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x328004u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328008: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x328008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32800c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x32800cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x328010: 0xc0c9fb6  jal         func_327ED8
    ctx->pc = 0x328010u;
    SET_GPR_U32(ctx, 31, 0x328018u);
    ctx->pc = 0x328014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x328010u;
    // 0x328014: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327ED8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x327ED8u, 0x328010u, 0x328018u)) {
        return;
    }
    ctx->pc = 0x328018u;
label_328018:
    // 0x328018: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x328018u;
    {
        const bool branch_taken_0x328018 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x32801Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328018u;
        // 0x32801c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x328018) {
            ctx->pc = 0x328028u;
            goto label_328028;
        }
    }
    ctx->pc = 0x328020u;
    // 0x328020: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x328020u;
    SET_GPR_U32(ctx, 31, 0x328028u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x328020u, 0x328028u)) {
        return;
    }
    ctx->pc = 0x328028u;
label_328028:
    // 0x328028: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x328028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32802c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x32802cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x328030: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x328030u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x328034: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x328034u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x328038: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x328038u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x32803c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x32803cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x328040: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x328040u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x328044: 0x3e00008  jr          $ra
    ctx->pc = 0x328044u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x328048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x328044u;
        // 0x328048: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x328044u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32804Cu;
    // 0x32804c: 0x0  nop
    ctx->pc = 0x32804cu;
    // NOP
    ctx->pc = 0x328050u;
}
