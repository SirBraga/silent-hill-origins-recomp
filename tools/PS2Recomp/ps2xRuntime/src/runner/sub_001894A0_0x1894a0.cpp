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

// Function: sub_001894A0
// Address: 0x1894a0 - 0x189500
void sub_001894A0_0x1894a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001894A0_0x1894a0");
#endif

    switch (ctx->pc) {
        case 0x1894b4u: goto label_1894b4;
        case 0x1894dcu: goto label_1894dc;
        default: break;
    }

    ctx->pc = 0x1894a0u;

    // 0x1894a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1894a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1894a4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1894a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1894a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1894a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1894ac: 0xc062540  jal         func_189500
    ctx->pc = 0x1894ACu;
    SET_GPR_U32(ctx, 31, 0x1894B4u);
    ctx->pc = 0x1894B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1894ACu;
    // 0x1894b0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189500u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x189500u, 0x1894ACu, 0x1894B4u)) {
        return;
    }
    ctx->pc = 0x1894B4u;
label_1894b4:
    // 0x1894b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1894B4u;
    {
        const bool branch_taken_0x1894b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894B4u;
        // 0x1894b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894b4) {
            ctx->pc = 0x1894F0u;
            goto label_1894f0;
        }
    }
    ctx->pc = 0x1894BCu;
    // 0x1894bc: 0x8e05009c  lw          $a1, 0x9C($s0)
    ctx->pc = 0x1894bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x1894c0: 0x50a0000c  beql        $a1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x1894C0u;
    {
        const bool branch_taken_0x1894c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1894c0) {
            ctx->pc = 0x1894C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1894C0u;
            // 0x1894c4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1894F4u;
            goto label_1894f4;
        }
    }
    ctx->pc = 0x1894C8u;
    // 0x1894c8: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x1894c8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1894cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1894CCu;
    {
        const bool branch_taken_0x1894cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894CCu;
        // 0x1894d0: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894cc) {
            ctx->pc = 0x1894ECu;
            goto label_1894ec;
        }
    }
    ctx->pc = 0x1894D4u;
    // 0x1894d4: 0xc0643a6  jal         func_190E98
    ctx->pc = 0x1894D4u;
    SET_GPR_U32(ctx, 31, 0x1894DCu);
    ctx->pc = 0x1894D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1894D4u;
    // 0x1894d8: 0x8c448b2c  lw          $a0, -0x74D4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x190E98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x190E98u, 0x1894D4u, 0x1894DCu)) {
        return;
    }
    ctx->pc = 0x1894DCu;
label_1894dc:
    // 0x1894dc: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x1894dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x1894e0: 0x621826  xor         $v1, $v1, $v0
    ctx->pc = 0x1894e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x1894e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1894E4u;
    {
        const bool branch_taken_0x1894e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1894E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894E4u;
        // 0x1894e8: 0x3102b  sltu        $v0, $zero, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1894e4) {
            ctx->pc = 0x1894F0u;
            goto label_1894f0;
        }
    }
    ctx->pc = 0x1894ECu;
label_1894ec:
    // 0x1894ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1894ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1894f0:
    // 0x1894f0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1894f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1894f4:
    // 0x1894f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1894f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1894f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1894F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1894FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1894F8u;
        // 0x1894fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1894F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x189500u;
}
