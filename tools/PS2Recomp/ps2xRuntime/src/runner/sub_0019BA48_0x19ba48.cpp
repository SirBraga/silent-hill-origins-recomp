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

// Function: sub_0019BA48
// Address: 0x19ba48 - 0x19bac0
void sub_0019BA48_0x19ba48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019BA48_0x19ba48");
#endif

    switch (ctx->pc) {
        case 0x19ba70u: goto label_19ba70;
        case 0x19ba94u: goto label_19ba94;
        case 0x19baacu: goto label_19baac;
        default: break;
    }

    ctx->pc = 0x19ba48u;

    // 0x19ba48: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x19ba48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x19ba4c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x19ba4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x19ba50: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19ba50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19ba54: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x19BA54u;
    {
        const bool branch_taken_0x19ba54 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x19BA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA54u;
        // 0x19ba58: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba54) {
            ctx->pc = 0x19BAACu;
            goto label_19baac;
        }
    }
    ctx->pc = 0x19BA5Cu;
    // 0x19ba5c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x19BA5Cu;
    {
        const bool branch_taken_0x19ba5c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA5Cu;
        // 0x19ba60: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba5c) {
            ctx->pc = 0x19BA9Cu;
            goto label_19ba9c;
        }
    }
    ctx->pc = 0x19BA64u;
    // 0x19ba64: 0x2610a1c8  addiu       $s0, $s0, -0x5E38
    ctx->pc = 0x19ba64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294943176));
    // 0x19ba68: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x19BA68u;
    SET_GPR_U32(ctx, 31, 0x19BA70u);
    ctx->pc = 0x19BA6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA68u;
    // 0x19ba6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x19BA68u, 0x19BA70u)) {
        return;
    }
    ctx->pc = 0x19BA70u;
label_19ba70:
    // 0x19ba70: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x19ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x19ba74: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19ba74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19ba78: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x19ba78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x19ba7c: 0xac628154  sw          $v0, -0x7EAC($v1)
    ctx->pc = 0x19ba7cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6F8154u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8154u, _value); } while (0);
    // 0x19ba80: 0x24848158  addiu       $a0, $a0, -0x7EA8
    ctx->pc = 0x19ba80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934872));
    // 0x19ba84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19ba84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba88: 0x24c6bac0  addiu       $a2, $a2, -0x4540
    ctx->pc = 0x19ba88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294949568));
    // 0x19ba8c: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x19BA8Cu;
    SET_GPR_U32(ctx, 31, 0x19BA94u);
    ctx->pc = 0x19BA90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BA8Cu;
    // 0x19ba90: 0x240700a0  addiu       $a3, $zero, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x19BA8Cu, 0x19BA94u)) {
        return;
    }
    ctx->pc = 0x19BA94u;
label_19ba94:
    // 0x19ba94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x19BA94u;
    {
        const bool branch_taken_0x19ba94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BA94u;
        // 0x19ba98: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba94) {
            ctx->pc = 0x19BAB0u;
            goto label_19bab0;
        }
    }
    ctx->pc = 0x19BA9Cu;
label_19ba9c:
    // 0x19ba9c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x19ba9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x19baa0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x19baa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x19baa4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x19BAA4u;
    SET_GPR_U32(ctx, 31, 0x19BAACu);
    ctx->pc = 0x19BAA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19BAA4u;
    // 0x19baa8: 0x24848158  addiu       $a0, $a0, -0x7EA8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x19BAA4u, 0x19BAACu)) {
        return;
    }
    ctx->pc = 0x19BAACu;
label_19baac:
    // 0x19baac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19baacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19bab0:
    // 0x19bab0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19bab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19bab4: 0x3e00008  jr          $ra
    ctx->pc = 0x19BAB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BAB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19BAB4u;
        // 0x19bab8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19BAB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19BABCu;
    // 0x19babc: 0x0  nop
    ctx->pc = 0x19babcu;
    // NOP
    ctx->pc = 0x19bac0u;
}
