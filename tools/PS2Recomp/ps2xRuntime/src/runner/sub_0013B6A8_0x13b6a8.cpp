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

// Function: sub_0013B6A8
// Address: 0x13b6a8 - 0x13b750
void sub_0013B6A8_0x13b6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013B6A8_0x13b6a8");
#endif

    switch (ctx->pc) {
        case 0x13b6c4u: goto label_13b6c4;
        case 0x13b6dcu: goto label_13b6dc;
        case 0x13b714u: goto label_13b714;
        case 0x13b730u: goto label_13b730;
        default: break;
    }

    ctx->pc = 0x13b6a8u;

    // 0x13b6a8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x13b6a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x13b6ac: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x13b6acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x13b6b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x13b6b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b6b4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13b6b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13b6b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13b6b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13b6bc: 0xc04f05a  jal         func_13C168
    ctx->pc = 0x13B6BCu;
    SET_GPR_U32(ctx, 31, 0x13B6C4u);
    ctx->pc = 0x13B6C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B6BCu;
    // 0x13b6c0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C168u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C168u, 0x13B6BCu, 0x13B6C4u)) {
        return;
    }
    ctx->pc = 0x13B6C4u;
label_13b6c4:
    // 0x13b6c4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13b6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13b6c8: 0xae000044  sw          $zero, 0x44($s0)
    ctx->pc = 0x13b6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 0));
    // 0x13b6cc: 0x2463f600  addiu       $v1, $v1, -0xA00
    ctx->pc = 0x13b6ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964736));
    // 0x13b6d0: 0x2604004c  addiu       $a0, $s0, 0x4C
    ctx->pc = 0x13b6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 76));
    // 0x13b6d4: 0xc041e9a  jal         func_107A68
    ctx->pc = 0x13B6D4u;
    SET_GPR_U32(ctx, 31, 0x13B6DCu);
    ctx->pc = 0x13B6D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B6D4u;
    // 0x13b6d8: 0xae030048  sw          $v1, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107A68u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x107A68u, 0x13B6D4u, 0x13B6DCu)) {
        return;
    }
    ctx->pc = 0x13B6DCu;
label_13b6dc:
    // 0x13b6dc: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x13b6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x13b6e0: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x13b6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x13b6e4: 0x3c050069  lui         $a1, 0x69
    ctx->pc = 0x13b6e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)105 << 16));
    // 0x13b6e8: 0x3c060069  lui         $a2, 0x69
    ctx->pc = 0x13b6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)105 << 16));
    // 0x13b6ec: 0x2463f548  addiu       $v1, $v1, -0xAB8
    ctx->pc = 0x13b6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294964552));
    // 0x13b6f0: 0x24a5f3e8  addiu       $a1, $a1, -0xC18
    ctx->pc = 0x13b6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964200));
    // 0x13b6f4: 0x24c6f568  addiu       $a2, $a2, -0xA98
    ctx->pc = 0x13b6f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964584));
    // 0x13b6f8: 0x2442f428  addiu       $v0, $v0, -0xBD8
    ctx->pc = 0x13b6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964264));
    // 0x13b6fc: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x13b6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x13b700: 0x26040088  addiu       $a0, $s0, 0x88
    ctx->pc = 0x13b700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 136));
    // 0x13b704: 0xae050084  sw          $a1, 0x84($s0)
    ctx->pc = 0x13b704u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 132), GPR_U32(ctx, 5));
    // 0x13b708: 0xae060034  sw          $a2, 0x34($s0)
    ctx->pc = 0x13b708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 6));
    // 0x13b70c: 0xc04ef7a  jal         func_13BDE8
    ctx->pc = 0x13B70Cu;
    SET_GPR_U32(ctx, 31, 0x13B714u);
    ctx->pc = 0x13B710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B70Cu;
    // 0x13b710: 0xae020048  sw          $v0, 0x48($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BDE8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BDE8u, 0x13B70Cu, 0x13B714u)) {
        return;
    }
    ctx->pc = 0x13B714u;
label_13b714:
    // 0x13b714: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x13b714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13b718: 0xae0000c4  sw          $zero, 0xC4($s0)
    ctx->pc = 0x13b718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 196), GPR_U32(ctx, 0));
    // 0x13b71c: 0xae0200d0  sw          $v0, 0xD0($s0)
    ctx->pc = 0x13b71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 2));
    // 0x13b720: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x13b720u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x13b724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b728: 0xc04edd4  jal         func_13B750
    ctx->pc = 0x13B728u;
    SET_GPR_U32(ctx, 31, 0x13B730u);
    ctx->pc = 0x13B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13B728u;
    // 0x13b72c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B750u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13B750u, 0x13B728u, 0x13B730u)) {
        return;
    }
    ctx->pc = 0x13B730u;
label_13b730:
    // 0x13b730: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x13b730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13b734: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13b734u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13b738: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x13b738u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13b73c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13b73cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13b740: 0x3e00008  jr          $ra
    ctx->pc = 0x13B740u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13B744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13B740u;
        // 0x13b744: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13B740u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13B748u;
    // 0x13b748: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13b748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13b74c: 0x0  nop
    ctx->pc = 0x13b74cu;
    // NOP
    ctx->pc = 0x13b750u;
}
