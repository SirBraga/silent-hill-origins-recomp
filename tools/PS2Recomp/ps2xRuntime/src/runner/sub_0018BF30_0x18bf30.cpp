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

// Function: sub_0018BF30
// Address: 0x18bf30 - 0x18bfa8
void sub_0018BF30_0x18bf30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BF30_0x18bf30");
#endif

    switch (ctx->pc) {
        case 0x18bf58u: goto label_18bf58;
        case 0x18bf7cu: goto label_18bf7c;
        case 0x18bf94u: goto label_18bf94;
        default: break;
    }

    ctx->pc = 0x18bf30u;

    // 0x18bf30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18bf30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18bf34: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x18bf34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x18bf38: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18bf38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18bf3c: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x18BF3Cu;
    {
        const bool branch_taken_0x18bf3c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x18BF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF3Cu;
        // 0x18bf40: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf3c) {
            ctx->pc = 0x18BF94u;
            goto label_18bf94;
        }
    }
    ctx->pc = 0x18BF44u;
    // 0x18bf44: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x18BF44u;
    {
        const bool branch_taken_0x18bf44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF44u;
        // 0x18bf48: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf44) {
            ctx->pc = 0x18BF84u;
            goto label_18bf84;
        }
    }
    ctx->pc = 0x18BF4Cu;
    // 0x18bf4c: 0x261090e0  addiu       $s0, $s0, -0x6F20
    ctx->pc = 0x18bf4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294938848));
    // 0x18bf50: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x18BF50u;
    SET_GPR_U32(ctx, 31, 0x18BF58u);
    ctx->pc = 0x18BF54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BF50u;
    // 0x18bf54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x18BF50u, 0x18BF58u)) {
        return;
    }
    ctx->pc = 0x18BF58u;
label_18bf58:
    // 0x18bf58: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x18bf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x18bf5c: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18bf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18bf60: 0x3c060019  lui         $a2, 0x19
    ctx->pc = 0x18bf60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)25 << 16));
    // 0x18bf64: 0xac62bd60  sw          $v0, -0x42A0($v1)
    ctx->pc = 0x18bf64u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6CBD60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CBD60u, _value); } while (0);
    // 0x18bf68: 0x2484bd68  addiu       $a0, $a0, -0x4298
    ctx->pc = 0x18bf68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950248));
    // 0x18bf6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x18bf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bf70: 0x24c6bfa8  addiu       $a2, $a2, -0x4058
    ctx->pc = 0x18bf70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950824));
    // 0x18bf74: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x18BF74u;
    SET_GPR_U32(ctx, 31, 0x18BF7Cu);
    ctx->pc = 0x18BF78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BF74u;
    // 0x18bf78: 0x24070058  addiu       $a3, $zero, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x18BF74u, 0x18BF7Cu)) {
        return;
    }
    ctx->pc = 0x18BF7Cu;
label_18bf7c:
    // 0x18bf7c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x18BF7Cu;
    {
        const bool branch_taken_0x18bf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18BF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF7Cu;
        // 0x18bf80: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18bf7c) {
            ctx->pc = 0x18BF98u;
            goto label_18bf98;
        }
    }
    ctx->pc = 0x18BF84u;
label_18bf84:
    // 0x18bf84: 0x3c04006d  lui         $a0, 0x6D
    ctx->pc = 0x18bf84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)109 << 16));
    // 0x18bf88: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18bf88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18bf8c: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x18BF8Cu;
    SET_GPR_U32(ctx, 31, 0x18BF94u);
    ctx->pc = 0x18BF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BF8Cu;
    // 0x18bf90: 0x2484bd68  addiu       $a0, $a0, -0x4298 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x18BF8Cu, 0x18BF94u)) {
        return;
    }
    ctx->pc = 0x18BF94u;
label_18bf94:
    // 0x18bf94: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18bf94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_18bf98:
    // 0x18bf98: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bf98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bf9c: 0x3e00008  jr          $ra
    ctx->pc = 0x18BF9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BF9Cu;
        // 0x18bfa0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BF9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BFA4u;
    // 0x18bfa4: 0x0  nop
    ctx->pc = 0x18bfa4u;
    // NOP
    ctx->pc = 0x18bfa8u;
}
