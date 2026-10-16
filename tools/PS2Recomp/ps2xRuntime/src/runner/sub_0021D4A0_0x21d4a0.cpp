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

// Function: sub_0021D4A0
// Address: 0x21d4a0 - 0x21d510
void sub_0021D4A0_0x21d4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D4A0_0x21d4a0");
#endif

    switch (ctx->pc) {
        case 0x21d4d8u: goto label_21d4d8;
        default: break;
    }

    ctx->pc = 0x21d4a0u;

    // 0x21d4a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x21d4a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x21d4a4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x21d4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x21d4a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d4a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d4ac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d4acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d4b0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21d4b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21d4b4: 0x8e1101ac  lw          $s1, 0x1AC($s0)
    ctx->pc = 0x21d4b4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
    // 0x21d4b8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x21d4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x21d4bc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x21D4BCu;
    {
        const bool branch_taken_0x21d4bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21d4bc) {
            ctx->pc = 0x21D4C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21D4BCu;
            // 0x21d4c0: 0xae00009c  sw          $zero, 0x9C($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21D4F8u;
            goto label_21d4f8;
        }
    }
    ctx->pc = 0x21D4C4u;
    // 0x21d4c4: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x21d4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x21d4c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x21D4C8u;
    {
        const bool branch_taken_0x21d4c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4C8u;
        // 0x21d4cc: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4c8) {
            ctx->pc = 0x21D4ECu;
            goto label_21d4ec;
        }
    }
    ctx->pc = 0x21D4D0u;
    // 0x21d4d0: 0xc087246  jal         func_21C918
    ctx->pc = 0x21D4D0u;
    SET_GPR_U32(ctx, 31, 0x21D4D8u);
    ctx->pc = 0x21C918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21C918u, 0x21D4D0u, 0x21D4D8u)) {
        return;
    }
    ctx->pc = 0x21D4D8u;
label_21d4d8:
    // 0x21d4d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x21D4D8u;
    {
        const bool branch_taken_0x21d4d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4D8u;
        // 0x21d4dc: 0x3c020022  lui         $v0, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4d8) {
            ctx->pc = 0x21D4E8u;
            goto label_21d4e8;
        }
    }
    ctx->pc = 0x21D4E0u;
    // 0x21d4e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21D4E0u;
    {
        const bool branch_taken_0x21d4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21D4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D4E0u;
        // 0x21d4e4: 0x2442ca68  addiu       $v0, $v0, -0x3598 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953576));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d4e0) {
            ctx->pc = 0x21D4F0u;
            goto label_21d4f0;
        }
    }
    ctx->pc = 0x21D4E8u;
label_21d4e8:
    // 0x21d4e8: 0x3c020022  lui         $v0, 0x22
    ctx->pc = 0x21d4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)34 << 16));
label_21d4ec:
    // 0x21d4ec: 0x2442c6c8  addiu       $v0, $v0, -0x3938
    ctx->pc = 0x21d4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952648));
label_21d4f0:
    // 0x21d4f0: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x21d4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x21d4f4: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x21d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
label_21d4f8:
    // 0x21d4f8: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x21d4f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d4fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21d4fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d500: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21d500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21d504: 0x3e00008  jr          $ra
    ctx->pc = 0x21D504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D504u;
        // 0x21d508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D50Cu;
    // 0x21d50c: 0x0  nop
    ctx->pc = 0x21d50cu;
    // NOP
    ctx->pc = 0x21d510u;
}
