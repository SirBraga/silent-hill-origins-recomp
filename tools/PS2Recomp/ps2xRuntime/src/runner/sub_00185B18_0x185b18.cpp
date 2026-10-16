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

// Function: sub_00185B18
// Address: 0x185b18 - 0x185b90
void sub_00185B18_0x185b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00185B18_0x185b18");
#endif

    switch (ctx->pc) {
        case 0x185b4cu: goto label_185b4c;
        case 0x185b64u: goto label_185b64;
        default: break;
    }

    ctx->pc = 0x185b18u;

    // 0x185b18: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x185b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x185b1c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x185b1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x185b20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x185b20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x185b24: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x185b24u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b28: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x185b28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x185b2c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x185b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b30: 0xe7b40040  swc1        $f20, 0x40($sp)
    ctx->pc = 0x185b30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x185b34: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x185b34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x185b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x185b3c: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x185B3Cu;
    {
        const bool branch_taken_0x185b3c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B3Cu;
        // 0x185b40: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b3c) {
            ctx->pc = 0x185B6Cu;
            goto label_185b6c;
        }
    }
    ctx->pc = 0x185B44u;
    // 0x185b44: 0xc080858  jal         func_202160
    ctx->pc = 0x185B44u;
    SET_GPR_U32(ctx, 31, 0x185B4Cu);
    ctx->pc = 0x185B48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B44u;
    // 0x185b48: 0x2404006c  addiu       $a0, $zero, 0x6C (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202160u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202160u, 0x185B44u, 0x185B4Cu)) {
        return;
    }
    ctx->pc = 0x185B4Cu;
label_185b4c:
    // 0x185b4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x185b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x185b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b54: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x185b54u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x185b58: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x185b58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b5c: 0xc06121c  jal         func_184870
    ctx->pc = 0x185B5Cu;
    SET_GPR_U32(ctx, 31, 0x185B64u);
    ctx->pc = 0x185B60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x185B5Cu;
    // 0x185b60: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x184870u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x184870u, 0x185B5Cu, 0x185B64u)) {
        return;
    }
    ctx->pc = 0x185B64u;
label_185b64:
    // 0x185b64: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x185B64u;
    {
        const bool branch_taken_0x185b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x185B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B64u;
        // 0x185b68: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x185b64) {
            ctx->pc = 0x185B74u;
            goto label_185b74;
        }
    }
    ctx->pc = 0x185B6Cu;
label_185b6c:
    // 0x185b6c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x185b6cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x185b70: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x185b70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_185b74:
    // 0x185b74: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x185b74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x185b78: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x185b78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x185b7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x185b7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x185b80: 0xc7b40040  lwc1        $f20, 0x40($sp)
    ctx->pc = 0x185b80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x185b84: 0x3e00008  jr          $ra
    ctx->pc = 0x185B84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x185B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x185B84u;
        // 0x185b88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x185B84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x185B8Cu;
    // 0x185b8c: 0x0  nop
    ctx->pc = 0x185b8cu;
    // NOP
    ctx->pc = 0x185b90u;
}
