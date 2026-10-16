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

// Function: sub_00169180
// Address: 0x169180 - 0x1691f0
void sub_00169180_0x169180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00169180_0x169180");
#endif

    switch (ctx->pc) {
        case 0x1691bcu: goto label_1691bc;
        case 0x1691c4u: goto label_1691c4;
        case 0x1691e0u: goto label_1691e0;
        default: break;
    }

    ctx->pc = 0x169180u;

    // 0x169180: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x169180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x169184: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x169184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x169188: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x169188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x16918c: 0x14a20014  bne         $a1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x16918Cu;
    {
        const bool branch_taken_0x16918c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x169190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16918Cu;
        // 0x169190: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16918c) {
            ctx->pc = 0x1691E0u;
            goto label_1691e0;
        }
    }
    ctx->pc = 0x169194u;
    // 0x169194: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x169194u;
    {
        const bool branch_taken_0x169194 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x169198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x169194u;
        // 0x169198: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169194) {
            ctx->pc = 0x1691D0u;
            goto label_1691d0;
        }
    }
    ctx->pc = 0x16919Cu;
    // 0x16919c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x16919cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1691a0: 0x26104260  addiu       $s0, $s0, 0x4260
    ctx->pc = 0x1691a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16992));
    // 0x1691a4: 0x3c060017  lui         $a2, 0x17
    ctx->pc = 0x1691a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)23 << 16));
    // 0x1691a8: 0x24c69228  addiu       $a2, $a2, -0x6DD8
    ctx->pc = 0x1691a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939176));
    // 0x1691ac: 0x2484f618  addiu       $a0, $a0, -0x9E8
    ctx->pc = 0x1691acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964760));
    // 0x1691b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1691b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1691b4: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x1691B4u;
    SET_GPR_U32(ctx, 31, 0x1691BCu);
    ctx->pc = 0x1691B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1691B4u;
    // 0x1691b8: 0x24070110  addiu       $a3, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x1691B4u, 0x1691BCu)) {
        return;
    }
    ctx->pc = 0x1691BCu;
label_1691bc:
    // 0x1691bc: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x1691BCu;
    SET_GPR_U32(ctx, 31, 0x1691C4u);
    ctx->pc = 0x1691C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1691BCu;
    // 0x1691c0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x1691BCu, 0x1691C4u)) {
        return;
    }
    ctx->pc = 0x1691C4u;
label_1691c4:
    // 0x1691c4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x1691c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x1691c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1691C8u;
    {
        const bool branch_taken_0x1691c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1691CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691C8u;
        // 0x1691cc: 0xac62f61c  sw          $v0, -0x9E4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294964764), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1691c8) {
            ctx->pc = 0x1691E0u;
            goto label_1691e0;
        }
    }
    ctx->pc = 0x1691D0u;
label_1691d0:
    // 0x1691d0: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x1691d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x1691d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1691d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1691d8: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x1691D8u;
    SET_GPR_U32(ctx, 31, 0x1691E0u);
    ctx->pc = 0x1691DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1691D8u;
    // 0x1691dc: 0x2484f618  addiu       $a0, $a0, -0x9E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x1691D8u, 0x1691E0u)) {
        return;
    }
    ctx->pc = 0x1691E0u;
label_1691e0:
    // 0x1691e0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1691e0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1691e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1691e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1691e8: 0x3e00008  jr          $ra
    ctx->pc = 0x1691E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1691ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1691E8u;
        // 0x1691ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1691E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1691F0u;
}
