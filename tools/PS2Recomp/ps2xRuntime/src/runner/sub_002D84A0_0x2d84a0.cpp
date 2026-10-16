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

// Function: sub_002D84A0
// Address: 0x2d84a0 - 0x2d8520
void sub_002D84A0_0x2d84a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D84A0_0x2d84a0");
#endif

    switch (ctx->pc) {
        case 0x2d84c0u: goto label_2d84c0;
        case 0x2d84ecu: goto label_2d84ec;
        case 0x2d84f8u: goto label_2d84f8;
        default: break;
    }

    ctx->pc = 0x2d84a0u;

    // 0x2d84a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d84a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2d84a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2d84a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d84a8: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d84a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2d84ac: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d84acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d84b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d84b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d84b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2d84b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2d84b8: 0xc09270a  jal         func_249C28
    ctx->pc = 0x2D84B8u;
    SET_GPR_U32(ctx, 31, 0x2D84C0u);
    ctx->pc = 0x2D84BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D84B8u;
    // 0x2d84bc: 0x27a70014  addiu       $a3, $sp, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x249C28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x249C28u, 0x2D84B8u, 0x2D84C0u)) {
        return;
    }
    ctx->pc = 0x2D84C0u;
label_2d84c0:
    // 0x2d84c0: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2D84C0u;
    {
        const bool branch_taken_0x2d84c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D84C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D84C0u;
        // 0x2d84c4: 0x8fa30014  lw          $v1, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d84c0) {
            ctx->pc = 0x2D8500u;
            goto label_2d8500;
        }
    }
    ctx->pc = 0x2D84C8u;
    // 0x2d84c8: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x2d84c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x2d84cc: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x2d84ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x2d84d0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2d84d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2d84d4: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x2d84d4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x2d84d8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D84D8u;
    {
        const bool branch_taken_0x2d84d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D84DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D84D8u;
        // 0x2d84dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d84d8) {
            ctx->pc = 0x2D8500u;
            goto label_2d8500;
        }
    }
    ctx->pc = 0x2D84E0u;
    // 0x2d84e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d84e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d84e4: 0xc0c3418  jal         func_30D060
    ctx->pc = 0x2D84E4u;
    SET_GPR_U32(ctx, 31, 0x2D84ECu);
    ctx->pc = 0x2D84E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D84E4u;
    // 0x2d84e8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x30D060u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x30D060u, 0x2D84E4u, 0x2D84ECu)) {
        return;
    }
    ctx->pc = 0x2D84ECu;
label_2d84ec:
    // 0x2d84ec: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d84ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d84f0: 0xc0b603e  jal         func_2D80F8
    ctx->pc = 0x2D84F0u;
    SET_GPR_U32(ctx, 31, 0x2D84F8u);
    ctx->pc = 0x2D84F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D84F0u;
    // 0x2d84f4: 0x27a50018  addiu       $a1, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D80F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D80F8u, 0x2D84F0u, 0x2D84F8u)) {
        return;
    }
    ctx->pc = 0x2D84F8u;
label_2d84f8:
    // 0x2d84f8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D84F8u;
    {
        const bool branch_taken_0x2d84f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D84FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D84F8u;
        // 0x2d84fc: 0x8fa20018  lw          $v0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d84f8) {
            ctx->pc = 0x2D8504u;
            goto label_2d8504;
        }
    }
    ctx->pc = 0x2D8500u;
label_2d8500:
    // 0x2d8500: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d8500u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d8504:
    // 0x2d8504: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d8504u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d8508: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2d8508u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d850c: 0x3e00008  jr          $ra
    ctx->pc = 0x2D850Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D8510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D850Cu;
        // 0x2d8510: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D850Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D8514u;
    // 0x2d8514: 0x0  nop
    ctx->pc = 0x2d8514u;
    // NOP
    // 0x2d8518: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x2d8518u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2d851c: 0x0  nop
    ctx->pc = 0x2d851cu;
    // NOP
    ctx->pc = 0x2d8520u;
}
