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

// Function: sub_0017F878
// Address: 0x17f878 - 0x17f8f0
void sub_0017F878_0x17f878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017F878_0x17f878");
#endif

    switch (ctx->pc) {
        case 0x17f8b4u: goto label_17f8b4;
        case 0x17f8c4u: goto label_17f8c4;
        case 0x17f8d4u: goto label_17f8d4;
        case 0x17f8e4u: goto label_17f8e4;
        default: break;
    }

    ctx->pc = 0x17f878u;

    // 0x17f878: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x17f878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x17f87c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17f87cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17f880: 0xac4489a4  sw          $a0, -0x765C($v0)
    ctx->pc = 0x17f880u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x3389A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3389A4u, _value); } while (0);
    // 0x17f884: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x17f884u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f888: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17f888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17f88c: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x17F88Cu;
    {
        const bool branch_taken_0x17f88c = (GPR_S64(ctx, 3) <= 0);
        ctx->pc = 0x17F890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F88Cu;
        // 0x17f890: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f88c) {
            ctx->pc = 0x17F898u;
            goto label_17f898;
        }
    }
    ctx->pc = 0x17F894u;
    // 0x17f894: 0x28620005  slti        $v0, $v1, 0x5
    ctx->pc = 0x17f894u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_17f898:
    // 0x17f898: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x17F898u;
    {
        const bool branch_taken_0x17f898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F898u;
        // 0x17f89c: 0x3c020034  lui         $v0, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f898) {
            ctx->pc = 0x17F8DCu;
            goto label_17f8dc;
        }
    }
    ctx->pc = 0x17F8A0u;
    // 0x17f8a0: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x17f8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x17f8a4: 0x24428960  addiu       $v0, $v0, -0x76A0
    ctx->pc = 0x17f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936928));
    // 0x17f8a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17f8a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f8ac: 0xc06d134  jal         func_1B44D0
    ctx->pc = 0x17F8ACu;
    SET_GPR_U32(ctx, 31, 0x17F8B4u);
    ctx->pc = 0x17F8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F8ACu;
    // 0x17f8b0: 0x8c640000  lw          $a0, 0x0($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B44D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B44D0u, 0x17F8ACu, 0x17F8B4u)) {
        return;
    }
    ctx->pc = 0x17F8B4u;
label_17f8b4:
    // 0x17f8b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x17F8B4u;
    {
        const bool branch_taken_0x17f8b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17f8b4) {
            ctx->pc = 0x17F8CCu;
            goto label_17f8cc;
        }
    }
    ctx->pc = 0x17F8BCu;
    // 0x17f8bc: 0xc051a9e  jal         func_146A78
    ctx->pc = 0x17F8BCu;
    SET_GPR_U32(ctx, 31, 0x17F8C4u);
    ctx->pc = 0x17F8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F8BCu;
    // 0x17f8c0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146A78u, 0x17F8BCu, 0x17F8C4u)) {
        return;
    }
    ctx->pc = 0x17F8C4u;
label_17f8c4:
    // 0x17f8c4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17F8C4u;
    {
        const bool branch_taken_0x17f8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8C4u;
        // 0x17f8c8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8c4) {
            ctx->pc = 0x17F8E8u;
            goto label_17f8e8;
        }
    }
    ctx->pc = 0x17F8CCu;
label_17f8cc:
    // 0x17f8cc: 0xc051a9e  jal         func_146A78
    ctx->pc = 0x17F8CCu;
    SET_GPR_U32(ctx, 31, 0x17F8D4u);
    ctx->pc = 0x17F8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F8CCu;
    // 0x17f8d0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146A78u, 0x17F8CCu, 0x17F8D4u)) {
        return;
    }
    ctx->pc = 0x17F8D4u;
label_17f8d4:
    // 0x17f8d4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17F8D4u;
    {
        const bool branch_taken_0x17f8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8D4u;
        // 0x17f8d8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f8d4) {
            ctx->pc = 0x17F8E8u;
            goto label_17f8e8;
        }
    }
    ctx->pc = 0x17F8DCu;
label_17f8dc:
    // 0x17f8dc: 0xc051a9e  jal         func_146A78
    ctx->pc = 0x17F8DCu;
    SET_GPR_U32(ctx, 31, 0x17F8E4u);
    ctx->pc = 0x17F8E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F8DCu;
    // 0x17f8e0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x146A78u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x146A78u, 0x17F8DCu, 0x17F8E4u)) {
        return;
    }
    ctx->pc = 0x17F8E4u;
label_17f8e4:
    // 0x17f8e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17f8e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17f8e8:
    // 0x17f8e8: 0x3e00008  jr          $ra
    ctx->pc = 0x17F8E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F8ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F8E8u;
        // 0x17f8ec: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F8E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F8F0u;
}
