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

// Function: sub_001CF978
// Address: 0x1cf978 - 0x1cf9c8
void sub_001CF978_0x1cf978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CF978_0x1cf978");
#endif

    switch (ctx->pc) {
        case 0x1cf9bcu: goto label_1cf9bc;
        default: break;
    }

    ctx->pc = 0x1cf978u;

    // 0x1cf978: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cf978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1cf97c: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x1cf97cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf980: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cf980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cf984: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CF984u;
    {
        const bool branch_taken_0x1cf984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF984u;
        // 0x1cf988: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf984) {
            ctx->pc = 0x1CF994u;
            goto label_1cf994;
        }
    }
    ctx->pc = 0x1CF98Cu;
    // 0x1cf98c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x1cf98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x1cf990: 0x24430888  addiu       $v1, $v0, 0x888
    ctx->pc = 0x1cf990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 2184));
label_1cf994:
    // 0x1cf994: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cf994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
    // 0x1cf998: 0x3c080034  lui         $t0, 0x34
    ctx->pc = 0x1cf998u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)52 << 16));
    // 0x1cf99c: 0x8c44870c  lw          $a0, -0x78F4($v0)
    ctx->pc = 0x1cf99cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x33870Cu));
    // 0x1cf9a0: 0x3c090034  lui         $t1, 0x34
    ctx->pc = 0x1cf9a0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)52 << 16));
    // 0x1cf9a4: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x1cf9a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf9a8: 0x250899d8  addiu       $t0, $t0, -0x6628
    ctx->pc = 0x1cf9a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294941144));
    // 0x1cf9ac: 0x252999f0  addiu       $t1, $t1, -0x6610
    ctx->pc = 0x1cf9acu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941168));
    // 0x1cf9b0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cf9b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf9b4: 0xc05e7fe  jal         func_179FF8
    ctx->pc = 0x1CF9B4u;
    SET_GPR_U32(ctx, 31, 0x1CF9BCu);
    ctx->pc = 0x1CF9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF9B4u;
    // 0x1cf9b8: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x179FF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x179FF8u, 0x1CF9B4u, 0x1CF9BCu)) {
        return;
    }
    ctx->pc = 0x1CF9BCu;
label_1cf9bc:
    // 0x1cf9bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cf9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cf9c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF9C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF9C0u;
        // 0x1cf9c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF9C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF9C8u;
}
