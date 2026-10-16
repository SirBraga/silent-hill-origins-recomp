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

// Function: sub_00105588
// Address: 0x105588 - 0x1055f0
void sub_00105588_0x105588(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00105588_0x105588");
#endif

    switch (ctx->pc) {
        case 0x1055c4u: goto label_1055c4;
        default: break;
    }

    ctx->pc = 0x105588u;

    // 0x105588: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x105588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10558c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10558cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x105590: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x105590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x105594: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x105594u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x105598: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x105598u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x10559c: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x10559cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x1055a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x1055a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x1055a4: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x1055a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x1055a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1055a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1055ac: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1055acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x1055b0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1055b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055b4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1055b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1055b8: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x1055b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x1055bc: 0xc080924  jal         func_202490
    ctx->pc = 0x1055BCu;
    SET_GPR_U32(ctx, 31, 0x1055C4u);
    ctx->pc = 0x1055C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1055BCu;
    // 0x1055c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202490u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202490u, 0x1055BCu, 0x1055C4u)) {
        return;
    }
    ctx->pc = 0x1055C4u;
label_1055c4:
    // 0x1055c4: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x1055c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x1055c8: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x1055c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
    // 0x1055cc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1055ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x1055d0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x1055d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x1055d4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1055d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1055d8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1055d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1055dc: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1055dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1055e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1055e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1055e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1055E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1055E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1055E4u;
        // 0x1055e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1055E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1055ECu;
    // 0x1055ec: 0x0  nop
    ctx->pc = 0x1055ecu;
    // NOP
    ctx->pc = 0x1055f0u;
}
