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

// Function: sub_00199B88
// Address: 0x199b88 - 0x199c00
void sub_00199B88_0x199b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00199B88_0x199b88");
#endif

    switch (ctx->pc) {
        case 0x199bb0u: goto label_199bb0;
        case 0x199bd4u: goto label_199bd4;
        case 0x199becu: goto label_199bec;
        default: break;
    }

    ctx->pc = 0x199b88u;

    // 0x199b88: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x199b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x199b8c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x199b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x199b90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x199b90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x199b94: 0x14a20015  bne         $a1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x199B94u;
    {
        const bool branch_taken_0x199b94 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x199B98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B94u;
        // 0x199b98: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b94) {
            ctx->pc = 0x199BECu;
            goto label_199bec;
        }
    }
    ctx->pc = 0x199B9Cu;
    // 0x199b9c: 0x1080000f  beqz        $a0, . + 4 + (0xF << 2)
    ctx->pc = 0x199B9Cu;
    {
        const bool branch_taken_0x199b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x199BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199B9Cu;
        // 0x199ba0: 0x3c10006a  lui         $s0, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)106 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199b9c) {
            ctx->pc = 0x199BDCu;
            goto label_199bdc;
        }
    }
    ctx->pc = 0x199BA4u;
    // 0x199ba4: 0x26109e38  addiu       $s0, $s0, -0x61C8
    ctx->pc = 0x199ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294942264));
    // 0x199ba8: 0xc07f26a  jal         func_1FC9A8
    ctx->pc = 0x199BA8u;
    SET_GPR_U32(ctx, 31, 0x199BB0u);
    ctx->pc = 0x199BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199BA8u;
    // 0x199bac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC9A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC9A8u, 0x199BA8u, 0x199BB0u)) {
        return;
    }
    ctx->pc = 0x199BB0u;
label_199bb0:
    // 0x199bb0: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x199bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x199bb4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x199bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x199bb8: 0x3c06001a  lui         $a2, 0x1A
    ctx->pc = 0x199bb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)26 << 16));
    // 0x199bbc: 0xac628100  sw          $v0, -0x7F00($v1)
    ctx->pc = 0x199bbcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6F8100u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6F8100u, _value); } while (0);
    // 0x199bc0: 0x24848108  addiu       $a0, $a0, -0x7EF8
    ctx->pc = 0x199bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934792));
    // 0x199bc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x199bc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x199bc8: 0x24c69c00  addiu       $a2, $a2, -0x6400
    ctx->pc = 0x199bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941696));
    // 0x199bcc: 0xc07f86a  jal         func_1FE1A8
    ctx->pc = 0x199BCCu;
    SET_GPR_U32(ctx, 31, 0x199BD4u);
    ctx->pc = 0x199BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199BCCu;
    // 0x199bd0: 0x2407007c  addiu       $a3, $zero, 0x7C (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE1A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE1A8u, 0x199BCCu, 0x199BD4u)) {
        return;
    }
    ctx->pc = 0x199BD4u;
label_199bd4:
    // 0x199bd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x199BD4u;
    {
        const bool branch_taken_0x199bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x199BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BD4u;
        // 0x199bd8: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199bd4) {
            ctx->pc = 0x199BF0u;
            goto label_199bf0;
        }
    }
    ctx->pc = 0x199BDCu;
label_199bdc:
    // 0x199bdc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x199bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x199be0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x199be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x199be4: 0xc07f5cc  jal         func_1FD730
    ctx->pc = 0x199BE4u;
    SET_GPR_U32(ctx, 31, 0x199BECu);
    ctx->pc = 0x199BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x199BE4u;
    // 0x199be8: 0x24848108  addiu       $a0, $a0, -0x7EF8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FD730u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FD730u, 0x199BE4u, 0x199BECu)) {
        return;
    }
    ctx->pc = 0x199BECu;
label_199bec:
    // 0x199bec: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x199becu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_199bf0:
    // 0x199bf0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x199bf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x199bf4: 0x3e00008  jr          $ra
    ctx->pc = 0x199BF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x199BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x199BF4u;
        // 0x199bf8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x199BF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x199BFCu;
    // 0x199bfc: 0x0  nop
    ctx->pc = 0x199bfcu;
    // NOP
    ctx->pc = 0x199c00u;
}
