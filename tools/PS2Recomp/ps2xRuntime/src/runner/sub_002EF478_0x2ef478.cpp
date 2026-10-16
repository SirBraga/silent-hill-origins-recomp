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

// Function: sub_002EF478
// Address: 0x2ef478 - 0x2ef4d8
void sub_002EF478_0x2ef478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF478_0x2ef478");
#endif

    switch (ctx->pc) {
        case 0x2ef4a0u: goto label_2ef4a0;
        case 0x2ef4b4u: goto label_2ef4b4;
        default: break;
    }

    ctx->pc = 0x2ef478u;

    // 0x2ef478: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ef478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ef47c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2ef47cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2ef480: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ef480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ef484: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef484u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ef488: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2ef488u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef48c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2ef48cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef490: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef490u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ef494: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef498: 0xc0935aa  jal         func_24D6A8
    ctx->pc = 0x2EF498u;
    SET_GPR_U32(ctx, 31, 0x2EF4A0u);
    ctx->pc = 0x2EF49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF498u;
    // 0x2ef49c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D6A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D6A8u, 0x2EF498u, 0x2EF4A0u)) {
        return;
    }
    ctx->pc = 0x2EF4A0u;
label_2ef4a0:
    // 0x2ef4a0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2EF4A0u;
    {
        const bool branch_taken_0x2ef4a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4A0u;
        // 0x2ef4a4: 0x26050020  addiu       $a1, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4a0) {
            ctx->pc = 0x2EF4C0u;
            goto label_2ef4c0;
        }
    }
    ctx->pc = 0x2EF4A8u;
    // 0x2ef4a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef4a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ef4ac: 0xc092782  jal         func_249E08
    ctx->pc = 0x2EF4ACu;
    SET_GPR_U32(ctx, 31, 0x2EF4B4u);
    ctx->pc = 0x2EF4B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF4ACu;
    // 0x2ef4b0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x2EF4ACu, 0x2EF4B4u)) {
        return;
    }
    ctx->pc = 0x2EF4B4u;
label_2ef4b4:
    // 0x2ef4b4: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2ef4b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
    // 0x2ef4b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2EF4B8u;
    {
        const bool branch_taken_0x2ef4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EF4BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4B8u;
        // 0x2ef4bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ef4b8) {
            ctx->pc = 0x2EF4C4u;
            goto label_2ef4c4;
        }
    }
    ctx->pc = 0x2EF4C0u;
label_2ef4c0:
    // 0x2ef4c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2ef4c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef4c4:
    // 0x2ef4c4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ef4c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ef4c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef4c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ef4cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef4ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ef4d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EF4D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF4D0u;
        // 0x2ef4d4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF4D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF4D8u;
}
