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

// Function: sub_00252F60
// Address: 0x252f60 - 0x252fc0
void sub_00252F60_0x252f60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252F60_0x252f60");
#endif

    switch (ctx->pc) {
        case 0x252f98u: goto label_252f98;
        case 0x252fa8u: goto label_252fa8;
        default: break;
    }

    ctx->pc = 0x252f60u;

    // 0x252f60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x252f60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x252f64: 0x3c030073  lui         $v1, 0x73
    ctx->pc = 0x252f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)115 << 16));
    // 0x252f68: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x252f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x252f6c: 0x24625618  addiu       $v0, $v1, 0x5618
    ctx->pc = 0x252f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 22040));
    // 0x252f70: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x252f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x252f74: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x252f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x252f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x252f7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x252f7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252f80: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x252f80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252f84: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x252f84u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x73561Cu));
    // 0x252f88: 0xac705618  sw          $s0, 0x5618($v1)
    ctx->pc = 0x252f88u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x735618u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x735618u, _value); } while (0);
    // 0x252f8c: 0x2058021  addu        $s0, $s0, $a1
    ctx->pc = 0x252f8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x252f90: 0xc092782  jal         func_249E08
    ctx->pc = 0x252F90u;
    SET_GPR_U32(ctx, 31, 0x252F98u);
    ctx->pc = 0x252F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252F90u;
    // 0x252f94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x252F90u, 0x252F98u)) {
        return;
    }
    ctx->pc = 0x252F98u;
label_252f98:
    // 0x252f98: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x252f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x252f9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fa0: 0xc092782  jal         func_249E08
    ctx->pc = 0x252FA0u;
    SET_GPR_U32(ctx, 31, 0x252FA8u);
    ctx->pc = 0x252FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x252FA0u;
    // 0x252fa4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249E08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249E08u, 0x252FA0u, 0x252FA8u)) {
        return;
    }
    ctx->pc = 0x252FA8u;
label_252fa8:
    // 0x252fa8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x252fa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252fac: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x252facu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252fb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x252fb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252fb4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x252fb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252fb8: 0x3e00008  jr          $ra
    ctx->pc = 0x252FB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x252FB8u;
        // 0x252fbc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x252FB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x252FC0u;
}
