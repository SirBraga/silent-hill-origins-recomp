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

// Function: sub_00146EB8
// Address: 0x146eb8 - 0x146f30
void sub_00146EB8_0x146eb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00146EB8_0x146eb8");
#endif

    switch (ctx->pc) {
        case 0x146ee0u: goto label_146ee0;
        case 0x146f04u: goto label_146f04;
        case 0x146f1cu: goto label_146f1c;
        default: break;
    }

    ctx->pc = 0x146eb8u;

    // 0x146eb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x146eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x146ebc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x146ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x146ec0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x146ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x146ec4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x146EC4u;
    {
        const bool branch_taken_0x146ec4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x146EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146EC4u;
        // 0x146ec8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ec4) {
            ctx->pc = 0x146F1Cu;
            goto label_146f1c;
        }
    }
    ctx->pc = 0x146ECCu;
    // 0x146ecc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x146ECCu;
    {
        const bool branch_taken_0x146ecc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x146ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146ECCu;
        // 0x146ed0: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146ecc) {
            ctx->pc = 0x146F0Cu;
            goto label_146f0c;
        }
    }
    ctx->pc = 0x146ED4u;
    // 0x146ed4: 0x26101070  addiu       $s0, $s0, 0x1070
    ctx->pc = 0x146ed4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4208));
    // 0x146ed8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x146ED8u;
    SET_GPR_U32(ctx, 31, 0x146EE0u);
    ctx->pc = 0x146EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146ED8u;
    // 0x146edc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x146ED8u, 0x146EE0u)) {
        return;
    }
    ctx->pc = 0x146EE0u;
label_146ee0:
    // 0x146ee0: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x146ee0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x146ee4: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x146ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x146ee8: 0x3c060014  lui         $a2, 0x14
    ctx->pc = 0x146ee8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20 << 16));
    // 0x146eec: 0xac62ee40  sw          $v0, -0x11C0($v1)
    ctx->pc = 0x146eecu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BEE40u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BEE40u, _value); } while (0);
    // 0x146ef0: 0x2484ee48  addiu       $a0, $a0, -0x11B8
    ctx->pc = 0x146ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962760));
    // 0x146ef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x146ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x146ef8: 0x24c66f30  addiu       $a2, $a2, 0x6F30
    ctx->pc = 0x146ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28464));
    // 0x146efc: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x146EFCu;
    SET_GPR_U32(ctx, 31, 0x146F04u);
    ctx->pc = 0x146F00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146EFCu;
    // 0x146f00: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x146EFCu, 0x146F04u)) {
        return;
    }
    ctx->pc = 0x146F04u;
label_146f04:
    // 0x146f04: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x146F04u;
    {
        const bool branch_taken_0x146f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x146F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F04u;
        // 0x146f08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x146f04) {
            ctx->pc = 0x146F20u;
            goto label_146f20;
        }
    }
    ctx->pc = 0x146F0Cu;
label_146f0c:
    // 0x146f0c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x146f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x146f10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x146f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x146f14: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x146F14u;
    SET_GPR_U32(ctx, 31, 0x146F1Cu);
    ctx->pc = 0x146F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x146F14u;
    // 0x146f18: 0x2484ee48  addiu       $a0, $a0, -0x11B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x146F14u, 0x146F1Cu)) {
        return;
    }
    ctx->pc = 0x146F1Cu;
label_146f1c:
    // 0x146f1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x146f1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_146f20:
    // 0x146f20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x146f20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x146f24: 0x3e00008  jr          $ra
    ctx->pc = 0x146F24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x146F28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x146F24u;
        // 0x146f28: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x146F24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x146F2Cu;
    // 0x146f2c: 0x0  nop
    ctx->pc = 0x146f2cu;
    // NOP
    ctx->pc = 0x146f30u;
}
