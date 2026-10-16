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

// Function: sub_002EA170
// Address: 0x2ea170 - 0x2ea1e8
void sub_002EA170_0x2ea170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EA170_0x2ea170");
#endif

    switch (ctx->pc) {
        case 0x2ea1a8u: goto label_2ea1a8;
        case 0x2ea1d0u: goto label_2ea1d0;
        default: break;
    }

    ctx->pc = 0x2ea170u;

    // 0x2ea170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ea170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ea174: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ea174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2ea178: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ea178u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ea17c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ea17cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2ea180: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ea180u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea184: 0x8e230f40  lw          $v1, 0xF40($s1)
    ctx->pc = 0x2ea184u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3904)));
    // 0x2ea188: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2ea188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2ea18c: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2EA18Cu;
    {
        const bool branch_taken_0x2ea18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2EA190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA18Cu;
        // 0x2ea190: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ea18c) {
            ctx->pc = 0x2EA1D0u;
            goto label_2ea1d0;
        }
    }
    ctx->pc = 0x2EA194u;
    // 0x2ea194: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x2ea194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2ea198: 0x3c014b80  lui         $at, 0x4B80
    ctx->pc = 0x2ea198u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19328 << 16));
    // 0x2ea19c: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ea19cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea1a0: 0xc07e022  jal         func_1F8088
    ctx->pc = 0x2EA1A0u;
    SET_GPR_U32(ctx, 31, 0x2EA1A8u);
    ctx->pc = 0x2EA1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA1A0u;
    // 0x2ea1a4: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F8088u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F8088u, 0x2EA1A0u, 0x2EA1A8u)) {
        return;
    }
    ctx->pc = 0x2EA1A8u;
label_2ea1a8:
    // 0x2ea1a8: 0x3c0301ff  lui         $v1, 0x1FF
    ctx->pc = 0x2ea1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)511 << 16));
    // 0x2ea1ac: 0x8e080008  lw          $t0, 0x8($s0)
    ctx->pc = 0x2ea1acu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2ea1b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2ea1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x2ea1b4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x2ea1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2ea1b8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2ea1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2ea1bc: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x2ea1bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2ea1c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ea1c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2ea1c4: 0x262402c0  addiu       $a0, $s1, 0x2C0
    ctx->pc = 0x2ea1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 704));
    // 0x2ea1c8: 0xc0bb74e  jal         func_2EDD38
    ctx->pc = 0x2EA1C8u;
    SET_GPR_U32(ctx, 31, 0x2EA1D0u);
    ctx->pc = 0x2EA1CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EA1C8u;
    // 0x2ea1cc: 0x26250f00  addiu       $a1, $s1, 0xF00 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 3840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD38u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2EDD38u, 0x2EA1C8u, 0x2EA1D0u)) {
        return;
    }
    ctx->pc = 0x2EA1D0u;
label_2ea1d0:
    // 0x2ea1d0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ea1d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ea1d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ea1d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ea1d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ea1d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ea1dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ea1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ea1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2EA1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EA1E0u;
        // 0x2ea1e4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EA1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EA1E8u;
}
