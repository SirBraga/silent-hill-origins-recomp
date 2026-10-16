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

// Function: sub_0026C680
// Address: 0x26c680 - 0x26c708
void sub_0026C680_0x26c680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026C680_0x26c680");
#endif

    switch (ctx->pc) {
        case 0x26c6dcu: goto label_26c6dc;
        case 0x26c6fcu: goto label_26c6fc;
        default: break;
    }

    ctx->pc = 0x26c680u;

    // 0x26c680: 0x44026000  mfc1        $v0, $f12
    ctx->pc = 0x26c680u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[12], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x26c684: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x26c684u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x26c688: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26c688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26c68c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x26c68cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
    // 0x26c690: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x26c690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x26c694: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x26c694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
    // 0x26c698: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x26c698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x26c69c: 0x34420fda  ori         $v0, $v0, 0xFDA
    ctx->pc = 0x26c69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4058);
    // 0x26c6a0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x26c6a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26c6a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26C6A4u;
    {
        const bool branch_taken_0x26c6a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26C6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6A4u;
        // 0x26c6a8: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6a4) {
            ctx->pc = 0x26C6B8u;
            goto label_26c6b8;
        }
    }
    ctx->pc = 0x26C6ACu;
    // 0x26c6ac: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x26c6acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x26c6b0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x26C6B0u;
    {
        const bool branch_taken_0x26c6b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6B0u;
        // 0x26c6b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6b0) {
            ctx->pc = 0x26C6F4u;
            goto label_26c6f4;
        }
    }
    ctx->pc = 0x26C6B8u;
label_26c6b8:
    // 0x26c6b8: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x26c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
    // 0x26c6bc: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x26c6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x26c6c0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x26c6c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x26c6c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26C6C4u;
    {
        const bool branch_taken_0x26c6c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26c6c4) {
            ctx->pc = 0x26C6D4u;
            goto label_26c6d4;
        }
    }
    ctx->pc = 0x26C6CCu;
    // 0x26c6cc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x26C6CCu;
    {
        const bool branch_taken_0x26c6cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26C6D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C6CCu;
        // 0x26c6d0: 0x460c6001  sub.s       $f0, $f12, $f12 (Delay Slot)
        ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26c6cc) {
            ctx->pc = 0x26C6FCu;
            goto label_26c6fc;
        }
    }
    ctx->pc = 0x26C6D4u;
label_26c6d4:
    // 0x26c6d4: 0xc09c0da  jal         func_270368
    ctx->pc = 0x26C6D4u;
    SET_GPR_U32(ctx, 31, 0x26C6DCu);
    ctx->pc = 0x26C6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26C6D4u;
    // 0x26c6d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270368u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x270368u, 0x26C6D4u, 0x26C6DCu)) {
        return;
    }
    ctx->pc = 0x26C6DCu;
label_26c6dc:
    // 0x26c6dc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x26c6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x26c6e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x26c6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26c6e4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x26c6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x26c6e8: 0xc7ac0000  lwc1        $f12, 0x0($sp)
    ctx->pc = 0x26c6e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x26c6ec: 0xc7ad0004  lwc1        $f13, 0x4($sp)
    ctx->pc = 0x26c6ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x26c6f0: 0x822023  subu        $a0, $a0, $v0
    ctx->pc = 0x26c6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_26c6f4:
    // 0x26c6f4: 0xc09c8f0  jal         func_2723C0
    ctx->pc = 0x26C6F4u;
    SET_GPR_U32(ctx, 31, 0x26C6FCu);
    ctx->pc = 0x2723C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2723C0u, 0x26C6F4u, 0x26C6FCu)) {
        return;
    }
    ctx->pc = 0x26C6FCu;
label_26c6fc:
    // 0x26c6fc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x26c6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26c700: 0x3e00008  jr          $ra
    ctx->pc = 0x26C700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26C704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26C700u;
        // 0x26c704: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26C700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26C708u;
}
