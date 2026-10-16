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

// Function: sub_002E19A0
// Address: 0x2e19a0 - 0x2e1a10
void sub_002E19A0_0x2e19a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E19A0_0x2e19a0");
#endif

    switch (ctx->pc) {
        case 0x2e19bcu: goto label_2e19bc;
        case 0x2e19d4u: goto label_2e19d4;
        case 0x2e19f4u: goto label_2e19f4;
        default: break;
    }

    ctx->pc = 0x2e19a0u;

    // 0x2e19a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e19a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e19a4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2e19a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2e19a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e19a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e19ac: 0x24508130  addiu       $s0, $v0, -0x7ED0
    ctx->pc = 0x2e19acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934832));
    // 0x2e19b0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2e19b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2e19b4: 0xc0b6c62  jal         func_2DB188
    ctx->pc = 0x2E19B4u;
    SET_GPR_U32(ctx, 31, 0x2E19BCu);
    ctx->pc = 0x2E19B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E19B4u;
    // 0x2e19b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB188u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB188u, 0x2E19B4u, 0x2E19BCu)) {
        return;
    }
    ctx->pc = 0x2E19BCu;
label_2e19bc:
    // 0x2e19bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2E19BCu;
    {
        const bool branch_taken_0x2e19bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E19C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19BCu;
        // 0x2e19c0: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e19bc) {
            ctx->pc = 0x2E19FCu;
            goto label_2e19fc;
        }
    }
    ctx->pc = 0x2E19C4u;
    // 0x2e19c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e19c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e19c8: 0x24a5f220  addiu       $a1, $a1, -0xDE0
    ctx->pc = 0x2e19c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963744));
    // 0x2e19cc: 0xc0b6c52  jal         func_2DB148
    ctx->pc = 0x2E19CCu;
    SET_GPR_U32(ctx, 31, 0x2E19D4u);
    ctx->pc = 0x2E19D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E19CCu;
    // 0x2e19d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB148u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB148u, 0x2E19CCu, 0x2E19D4u)) {
        return;
    }
    ctx->pc = 0x2E19D4u;
label_2e19d4:
    // 0x2e19d4: 0x3c050068  lui         $a1, 0x68
    ctx->pc = 0x2e19d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)104 << 16));
    // 0x2e19d8: 0x3c070068  lui         $a3, 0x68
    ctx->pc = 0x2e19d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)104 << 16));
    // 0x2e19dc: 0x24a54a00  addiu       $a1, $a1, 0x4A00
    ctx->pc = 0x2e19dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18944));
    // 0x2e19e0: 0x24e74af0  addiu       $a3, $a3, 0x4AF0
    ctx->pc = 0x2e19e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 19184));
    // 0x2e19e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e19e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e19e8: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x2e19e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2e19ec: 0xc0b6cfc  jal         func_2DB3F0
    ctx->pc = 0x2E19ECu;
    SET_GPR_U32(ctx, 31, 0x2E19F4u);
    ctx->pc = 0x2E19F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E19ECu;
    // 0x2e19f0: 0x2408000d  addiu       $t0, $zero, 0xD (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DB3F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DB3F0u, 0x2E19ECu, 0x2E19F4u)) {
        return;
    }
    ctx->pc = 0x2E19F4u;
label_2e19f4:
    // 0x2e19f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2E19F4u;
    {
        const bool branch_taken_0x2e19f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E19F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E19F4u;
        // 0x2e19f8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e19f4) {
            ctx->pc = 0x2E1A00u;
            goto label_2e1a00;
        }
    }
    ctx->pc = 0x2E19FCu;
label_2e19fc:
    // 0x2e19fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e19fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e1a00:
    // 0x2e1a00: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e1a00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e1a04: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2e1a04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e1a08: 0x3e00008  jr          $ra
    ctx->pc = 0x2E1A08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E1A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E1A08u;
        // 0x2e1a0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E1A08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E1A10u;
}
