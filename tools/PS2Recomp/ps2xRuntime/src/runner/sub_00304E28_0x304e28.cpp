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

// Function: sub_00304E28
// Address: 0x304e28 - 0x304ea0
void sub_00304E28_0x304e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00304E28_0x304e28");
#endif

    switch (ctx->pc) {
        case 0x304e4cu: goto label_304e4c;
        case 0x304e60u: goto label_304e60;
        default: break;
    }

    ctx->pc = 0x304e28u;

    // 0x304e28: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x304e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x304e2c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x304e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x304e30: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x304e30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x304e34: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x304e34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304e38: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x304e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x304e3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x304e3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304e40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x304e40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x304e44: 0xc0c0cdc  jal         func_303370
    ctx->pc = 0x304E44u;
    SET_GPR_U32(ctx, 31, 0x304E4Cu);
    ctx->pc = 0x304E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E44u;
    // 0x304e48: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x303370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303370u, 0x304E44u, 0x304E4Cu)) {
        return;
    }
    ctx->pc = 0x304E4Cu;
label_304e4c:
    // 0x304e4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x304e4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304e50: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x304E50u;
    {
        const bool branch_taken_0x304e50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E50u;
        // 0x304e54: 0x24040024  addiu       $a0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e50) {
            ctx->pc = 0x304E80u;
            goto label_304e80;
        }
    }
    ctx->pc = 0x304E58u;
    // 0x304e58: 0xc0c0cdc  jal         func_303370
    ctx->pc = 0x304E58u;
    SET_GPR_U32(ctx, 31, 0x304E60u);
    ctx->pc = 0x304E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x304E58u;
    // 0x304e5c: 0x2242018  mult        $a0, $s1, $a0 (Delay Slot)
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x303370u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x303370u, 0x304E58u, 0x304E60u)) {
        return;
    }
    ctx->pc = 0x304E60u;
label_304e60:
    // 0x304e60: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x304E60u;
    {
        const bool branch_taken_0x304e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E60u;
        // 0x304e64: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e60) {
            ctx->pc = 0x304E80u;
            goto label_304e80;
        }
    }
    ctx->pc = 0x304E68u;
    // 0x304e68: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x304e68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
    // 0x304e6c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x304e6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x304e70: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x304e70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
    // 0x304e74: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x304e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x304e78: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x304E78u;
    {
        const bool branch_taken_0x304e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x304E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E78u;
        // 0x304e7c: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x304e78) {
            ctx->pc = 0x304E84u;
            goto label_304e84;
        }
    }
    ctx->pc = 0x304E80u;
label_304e80:
    // 0x304e80: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x304e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_304e84:
    // 0x304e84: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x304e84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x304e88: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x304e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x304e8c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x304e8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x304e90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x304e90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x304e94: 0x3e00008  jr          $ra
    ctx->pc = 0x304E94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x304E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x304E94u;
        // 0x304e98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x304E94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x304E9Cu;
    // 0x304e9c: 0x0  nop
    ctx->pc = 0x304e9cu;
    // NOP
    ctx->pc = 0x304ea0u;
}
