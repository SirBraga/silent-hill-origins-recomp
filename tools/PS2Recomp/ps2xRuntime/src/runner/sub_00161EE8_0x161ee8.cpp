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

// Function: sub_00161EE8
// Address: 0x161ee8 - 0x161f60
void sub_00161EE8_0x161ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161EE8_0x161ee8");
#endif

    switch (ctx->pc) {
        case 0x161f10u: goto label_161f10;
        case 0x161f34u: goto label_161f34;
        case 0x161f4cu: goto label_161f4c;
        default: break;
    }

    ctx->pc = 0x161ee8u;

    // 0x161ee8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161ee8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161eec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x161eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x161ef0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x161ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x161ef4: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x161EF4u;
    {
        const bool branch_taken_0x161ef4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x161EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EF4u;
        // 0x161ef8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161ef4) {
            ctx->pc = 0x161F4Cu;
            goto label_161f4c;
        }
    }
    ctx->pc = 0x161EFCu;
    // 0x161efc: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x161EFCu;
    {
        const bool branch_taken_0x161efc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161EFCu;
        // 0x161f00: 0x3c100069  lui         $s0, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)105 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161efc) {
            ctx->pc = 0x161F3Cu;
            goto label_161f3c;
        }
    }
    ctx->pc = 0x161F04u;
    // 0x161f04: 0x26103898  addiu       $s0, $s0, 0x3898
    ctx->pc = 0x161f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 14488));
    // 0x161f08: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x161F08u;
    SET_GPR_U32(ctx, 31, 0x161F10u);
    ctx->pc = 0x161F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161F08u;
    // 0x161f0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x161F08u, 0x161F10u)) {
        return;
    }
    ctx->pc = 0x161F10u;
label_161f10:
    // 0x161f10: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x161f10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x161f14: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x161f14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x161f18: 0x3c060016  lui         $a2, 0x16
    ctx->pc = 0x161f18u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)22 << 16));
    // 0x161f1c: 0xac62f5a8  sw          $v0, -0xA58($v1)
    ctx->pc = 0x161f1cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6BF5A8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6BF5A8u, _value); } while (0);
    // 0x161f20: 0x2484f5b0  addiu       $a0, $a0, -0xA50
    ctx->pc = 0x161f20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964656));
    // 0x161f24: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x161f24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x161f28: 0x24c61f60  addiu       $a2, $a2, 0x1F60
    ctx->pc = 0x161f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8032));
    // 0x161f2c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x161F2Cu;
    SET_GPR_U32(ctx, 31, 0x161F34u);
    ctx->pc = 0x161F30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161F2Cu;
    // 0x161f30: 0x24070064  addiu       $a3, $zero, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x161F2Cu, 0x161F34u)) {
        return;
    }
    ctx->pc = 0x161F34u;
label_161f34:
    // 0x161f34: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x161F34u;
    {
        const bool branch_taken_0x161f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x161F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F34u;
        // 0x161f38: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161f34) {
            ctx->pc = 0x161F50u;
            goto label_161f50;
        }
    }
    ctx->pc = 0x161F3Cu;
label_161f3c:
    // 0x161f3c: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x161f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x161f40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x161f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x161f44: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x161F44u;
    SET_GPR_U32(ctx, 31, 0x161F4Cu);
    ctx->pc = 0x161F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x161F44u;
    // 0x161f48: 0x2484f5b0  addiu       $a0, $a0, -0xA50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x161F44u, 0x161F4Cu)) {
        return;
    }
    ctx->pc = 0x161F4Cu;
label_161f4c:
    // 0x161f4c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x161f4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_161f50:
    // 0x161f50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x161f50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161f54: 0x3e00008  jr          $ra
    ctx->pc = 0x161F54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x161F58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x161F54u;
        // 0x161f58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x161F54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161F5Cu;
    // 0x161f5c: 0x0  nop
    ctx->pc = 0x161f5cu;
    // NOP
    ctx->pc = 0x161f60u;
}
