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

// Function: sub_00292D20
// Address: 0x292d20 - 0x292db0
void sub_00292D20_0x292d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292D20_0x292d20");
#endif

    switch (ctx->pc) {
        case 0x292d3cu: goto label_292d3c;
        case 0x292d48u: goto label_292d48;
        case 0x292d84u: goto label_292d84;
        case 0x292d9cu: goto label_292d9c;
        default: break;
    }

    ctx->pc = 0x292d20u;

    // 0x292d20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x292d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x292d24: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x292d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x292d28: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x292d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x292d2c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x292d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d30: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x292d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x292d34: 0xc089654  jal         func_225950
    ctx->pc = 0x292D34u;
    SET_GPR_U32(ctx, 31, 0x292D3Cu);
    ctx->pc = 0x292D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D34u;
    // 0x292d38: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225950u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225950u, 0x292D34u, 0x292D3Cu)) {
        return;
    }
    ctx->pc = 0x292D3Cu;
label_292d3c:
    // 0x292d3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x292d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d40: 0xc089642  jal         func_225908
    ctx->pc = 0x292D40u;
    SET_GPR_U32(ctx, 31, 0x292D48u);
    ctx->pc = 0x292D44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D40u;
    // 0x292d44: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225908u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225908u, 0x292D40u, 0x292D48u)) {
        return;
    }
    ctx->pc = 0x292D48u;
label_292d48:
    // 0x292d48: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x292d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x292d4c: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x292d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x292d50: 0xc602006c  lwc1        $f2, 0x6C($s0)
    ctx->pc = 0x292d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x292d54: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x292d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x292d58: 0x621818  mult        $v1, $v1, $v0
    ctx->pc = 0x292d58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x292d5c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x292d5cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x292d60: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x292d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
    // 0x292d64: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x292d64u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x292d68: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x292d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x292d6c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x292d6cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x292d70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x292d70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x292d74: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x292d74u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x292d78: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x292d78u;
    ctx->f[0] = FPU_DIV_S(ctx, ctx->f[0], ctx->f[1]);
    // 0x292d7c: 0xc08ac1c  jal         func_22B070
    ctx->pc = 0x292D7Cu;
    SET_GPR_U32(ctx, 31, 0x292D84u);
    ctx->pc = 0x292D80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D7Cu;
    // 0x292d80: 0xe7a00014  swc1        $f0, 0x14($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B070u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22B070u, 0x292D7Cu, 0x292D84u)) {
        return;
    }
    ctx->pc = 0x292D84u;
label_292d84:
    // 0x292d84: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x292D84u;
    {
        const bool branch_taken_0x292d84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x292D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292D84u;
        // 0x292d88: 0x3c050029  lui         $a1, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)41 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292d84) {
            ctx->pc = 0x292D9Cu;
            goto label_292d9c;
        }
    }
    ctx->pc = 0x292D8Cu;
    // 0x292d8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x292d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x292d90: 0x24a52db0  addiu       $a1, $a1, 0x2DB0
    ctx->pc = 0x292d90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11696));
    // 0x292d94: 0xc08ab16  jal         func_22AC58
    ctx->pc = 0x292D94u;
    SET_GPR_U32(ctx, 31, 0x292D9Cu);
    ctx->pc = 0x292D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292D94u;
    // 0x292d98: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22AC58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22AC58u, 0x292D94u, 0x292D9Cu)) {
        return;
    }
    ctx->pc = 0x292D9Cu;
label_292d9c:
    // 0x292d9c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x292d9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x292da0: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x292da0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x292da4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x292da4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x292da8: 0x3e00008  jr          $ra
    ctx->pc = 0x292DA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DA8u;
        // 0x292dac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292DA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292DB0u;
}
