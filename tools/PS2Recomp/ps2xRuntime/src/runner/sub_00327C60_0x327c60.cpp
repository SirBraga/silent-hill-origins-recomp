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

// Function: sub_00327C60
// Address: 0x327c60 - 0x327ce0
void sub_00327C60_0x327c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00327C60_0x327c60");
#endif

    switch (ctx->pc) {
        case 0x327c74u: goto label_327c74;
        case 0x327cc8u: goto label_327cc8;
        default: break;
    }

    ctx->pc = 0x327c60u;

    // 0x327c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x327c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x327c64: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x327c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x327c68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x327c68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x327c6c: 0xc0c9ba4  jal         func_326E90
    ctx->pc = 0x327C6Cu;
    SET_GPR_U32(ctx, 31, 0x327C74u);
    ctx->pc = 0x326E90u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326E90u, 0x327C6Cu, 0x327C74u)) {
        return;
    }
    ctx->pc = 0x327C74u;
label_327c74:
    // 0x327c74: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x327c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x327c78: 0x3c040069  lui         $a0, 0x69
    ctx->pc = 0x327c78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)105 << 16));
    // 0x327c7c: 0x34631000  ori         $v1, $v1, 0x1000
    ctx->pc = 0x327c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4096);
    // 0x327c80: 0x9c700000  lwu         $s0, 0x0($v1)
    ctx->pc = 0x327c80u;
    SET_GPR_ZE32(ctx, 16, runtime->Load32(rdram, ctx, 0x10001000u));
    // 0x327c84: 0x8c680010  lw          $t0, 0x10($v1)
    ctx->pc = 0x327c84u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, 0x10001010u)); // MMIO: 0x10001010
    // 0x327c88: 0xdc8a8590  ld          $t2, -0x7A70($a0)
    ctx->pc = 0x327c88u;
    SET_GPR_U64(ctx, 10, FAST_READ64(0x688590u));
    // 0x327c8c: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x327c8cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
    // 0x327c90: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x327C90u;
    {
        const bool branch_taken_0x327c90 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x327C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327C90u;
        // 0x327c94: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327c90) {
            ctx->pc = 0x327CA0u;
            goto label_327ca0;
        }
    }
    ctx->pc = 0x327C98u;
    // 0x327c98: 0x9c700000  lwu         $s0, 0x0($v1)
    ctx->pc = 0x327c98u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x327c9c: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x327c9cu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_327ca0:
    // 0x327ca0: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x327ca0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
    // 0x327ca4: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x327ca4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x327ca8: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x327ca8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_U64(ctx, 9, GPR_U64(ctx, 0));
    // 0x327cac: 0x20a8025  or          $s0, $s0, $t2
    ctx->pc = 0x327cacu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 10));
    // 0x327cb0: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x327cb0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
    // 0x327cb4: 0x1308014  dsllv       $s0, $s0, $t1
    ctx->pc = 0x327cb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (GPR_U32(ctx, 9) & 0x3F));
    // 0x327cb8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x327CB8u;
    {
        const bool branch_taken_0x327cb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x327CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CB8u;
        // 0x327cbc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x327cb8) {
            ctx->pc = 0x327CCCu;
            goto label_327ccc;
        }
    }
    ctx->pc = 0x327CC0u;
    // 0x327cc0: 0xc0c9bb8  jal         func_326EE0
    ctx->pc = 0x327CC0u;
    SET_GPR_U32(ctx, 31, 0x327CC8u);
    ctx->pc = 0x326EE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x326EE0u, 0x327CC0u, 0x327CC8u)) {
        return;
    }
    ctx->pc = 0x327CC8u;
label_327cc8:
    // 0x327cc8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x327cc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_327ccc:
    // 0x327ccc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x327cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x327cd0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x327cd0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327cd4: 0x3e00008  jr          $ra
    ctx->pc = 0x327CD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x327CD4u;
        // 0x327cd8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x327CD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x327CDCu;
    // 0x327cdc: 0x0  nop
    ctx->pc = 0x327cdcu;
    // NOP
    ctx->pc = 0x327ce0u;
}
